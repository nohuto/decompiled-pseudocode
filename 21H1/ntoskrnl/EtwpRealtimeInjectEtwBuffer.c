/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x140704A9C
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x14067B8E4 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140704958 (EtwpRealtimeDeliverBuffer.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     EtwpFindUserBufferSpace @ 0x140704C90 (EtwpFindUserBufferSpace.c)
 *     EtwpFreeUserBufferSpace @ 0x14093D3CC (EtwpFreeUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // r9
  _DWORD *v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  int v13; // ecx
  unsigned int v15; // ecx
  int UserBufferSpace; // [rsp+20h] [rbp-78h]
  void *v17; // [rsp+28h] [rbp-70h] BYREF
  signed __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  char *v21; // [rsp+48h] [rbp-50h]
  _OWORD v22[3]; // [rsp+50h] [rbp-48h] BYREF

  v19 = a2;
  v20 = a3;
  memset(v22, 0, sizeof(v22));
  v17 = 0LL;
  if ( *(_WORD *)(a3 + 54) == 6 )
  {
    v15 = *(_DWORD *)(a2 + 84) + 1;
    *(_DWORD *)(a2 + 84) = v15;
    if ( (a1[3] & 0x10000000) != 0 || v15 > 2 )
      return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 1112LL)) )
    return 3221225738LL;
  KiStackAttachProcess(*(_KPROCESS **)(a2 + 24), 0LL, (__int64)v22, v6);
  **(_DWORD **)(a2 + 136) = a1[64];
  **(_DWORD **)(a2 + 144) = a1[69];
  v9 = (unsigned int)(4 * a1[63]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v9 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v9, a2, *(unsigned int *)(a3 + 48), &v17);
    if ( UserBufferSpace >= 0 )
    {
      memmove(v17, (const void *)a3, *(unsigned int *)(a3 + 48));
      v10 = *(volatile signed __int32 **)(a2 + 72);
      v7 = (char *)v17 + 32;
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v21 = (char *)v17 + 32;
        LODWORD(v11) = *v10;
        do
        {
          *v7 = v11;
          v13 = v11;
          LODWORD(v11) = _InterlockedCompareExchange(v10, (signed __int32)v7, v11);
        }
        while ( (_DWORD)v11 != v13 );
        v11 = (unsigned int)v11;
      }
      else
      {
        _m_prefetchw((const void *)v10);
        v11 = *(_QWORD *)v10;
        do
        {
          *(_QWORD *)v7 = v11;
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, (signed __int64)v7, v11);
        }
        while ( v11 != v12 );
      }
      v18 = v11;
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !v18 )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    UserBufferSpace = -1073741764;
  }
  KiUnstackDetachProcess((__int64)v22, 0LL, (__int64)v7, v8);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 1112LL));
  return (unsigned int)UserBufferSpace;
}
