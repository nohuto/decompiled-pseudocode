/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x14063AC3C
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x14061B674 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpRealtimeDeliverBuffer @ 0x14063AAF8 (EtwpRealtimeDeliverBuffer.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpFindUserBufferSpace @ 0x14063AE30 (EtwpFindUserBufferSpace.c)
 *     EtwpFreeUserBufferSpace @ 0x140941DAC (EtwpFreeUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdx
  _DWORD *v8; // r8
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  int v11; // ecx
  unsigned int v13; // ecx
  int UserBufferSpace; // [rsp+20h] [rbp-78h]
  void *v15; // [rsp+28h] [rbp-70h] BYREF
  signed __int64 v16; // [rsp+30h] [rbp-68h]
  __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  char *v19; // [rsp+48h] [rbp-50h]
  _OWORD v20[3]; // [rsp+50h] [rbp-48h] BYREF

  v17 = a2;
  v18 = a3;
  memset(v20, 0, sizeof(v20));
  v15 = 0LL;
  if ( *(_WORD *)(a3 + 54) == 6 )
  {
    v13 = *(_DWORD *)(a2 + 84) + 1;
    *(_DWORD *)(a2 + 84) = v13;
    if ( (a1[3] & 0x10000000) != 0 || v13 > 2 )
      return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 1112LL)) )
    return 3221225738LL;
  KiStackAttachProcess(*(_KPROCESS **)(a2 + 24), 0, (__int64)v20);
  **(_DWORD **)(a2 + 136) = a1[64];
  **(_DWORD **)(a2 + 144) = a1[69];
  v6 = (unsigned int)(4 * a1[63]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v6 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v6, a2, *(unsigned int *)(a3 + 48), &v15);
    if ( UserBufferSpace >= 0 )
    {
      memmove(v15, (const void *)a3, *(unsigned int *)(a3 + 48));
      v7 = *(volatile signed __int32 **)(a2 + 72);
      v8 = (char *)v15 + 32;
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v19 = (char *)v15 + 32;
        LODWORD(v9) = *v7;
        do
        {
          *v8 = v9;
          v11 = v9;
          LODWORD(v9) = _InterlockedCompareExchange(v7, (signed __int32)v8, v9);
        }
        while ( (_DWORD)v9 != v11 );
        v9 = (unsigned int)v9;
      }
      else
      {
        _m_prefetchw((const void *)v7);
        v9 = *(_QWORD *)v7;
        do
        {
          *(_QWORD *)v8 = v9;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, (signed __int64)v8, v9);
        }
        while ( v9 != v10 );
      }
      v16 = v9;
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !v16 )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    UserBufferSpace = -1073741764;
  }
  KiUnstackDetachProcess((__int64)v20, 0LL);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 1112LL));
  return (unsigned int)UserBufferSpace;
}
