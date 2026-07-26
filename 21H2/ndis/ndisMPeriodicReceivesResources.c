/*
 * XREFs of ndisMPeriodicReceivesResources @ 0x1C00A367C
 * Callers:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C00A3828 (ndisMQueueReceiveNetBufferLists.c)
 * Callees:
 *     ndisCopyPeriodicReceiveNbl @ 0x1C00A23B4 (ndisCopyPeriodicReceiveNbl.c)
 *     ndisFreePeriodicReceives @ 0x1C00A2DC0 (ndisFreePeriodicReceives.c)
 */

char __fastcall ndisMPeriodicReceivesResources(__int64 a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  KIRQL v5; // r13
  char v6; // r15
  _QWORD *v8; // rsi
  PNET_BUFFER_LIST v10; // rax
  __int64 v11; // rcx
  struct _NET_BUFFER_LIST *v12; // rdi
  unsigned int v13; // ebp
  _QWORD *i; // r12
  PNET_BUFFER_LIST v15; // rax
  KSPIN_LOCK *v16; // rcx
  KSPIN_LOCK *v17; // rcx

  *(_DWORD *)(a1 + 3236) += a4;
  v5 = 0;
  v6 = 0;
  v8 = (_QWORD *)a2;
  if ( *(_DWORD *)(a1 + 3168) == 1 )
  {
    v10 = ndisCopyPeriodicReceiveNbl(a1, a3, a2);
    v12 = v10;
    if ( v10 )
    {
      v13 = 1;
      for ( i = &v10->Link.Alignment; ; i = &v15->Link.Alignment )
      {
        v8 = (_QWORD *)*v8;
        if ( !v8 )
          break;
        v15 = ndisCopyPeriodicReceiveNbl(v11, a3, (__int64)v8);
        if ( !v15 )
        {
          ndisFreePeriodicReceives(v12);
          return v6;
        }
        *i = v15;
        ++v13;
      }
      v16 = (KSPIN_LOCK *)(a1 + 3176);
      if ( (a5 & 1) != 0 )
        KeAcquireSpinLockAtDpcLevel(v16);
      else
        v5 = KeAcquireSpinLockRaiseToDpc(v16);
      *(_QWORD *)(a1 + 3184) = KeGetCurrentThread();
      if ( *(_DWORD *)(a1 + 3168) == 1 && (unsigned __int64)a4 + *(int *)(a1 + 3192) < 0x3E8 )
      {
        *(_DWORD *)(a1 + 3228) += v13;
        _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 3224), v13);
        if ( *(_QWORD *)(a1 + 3200) )
          **(_QWORD **)(a1 + 3208) = v12;
        else
          *(_QWORD *)(a1 + 3200) = v12;
        *(_DWORD *)(a1 + 3192) += v13;
        v6 = 1;
        *(_QWORD *)(a1 + 3208) = i;
      }
      else
      {
        ndisFreePeriodicReceives(v12);
      }
      *(_QWORD *)(a1 + 3184) = 0LL;
      v17 = (KSPIN_LOCK *)(a1 + 3176);
      if ( (a5 & 1) != 0 )
        KeReleaseSpinLockFromDpcLevel(v17);
      else
        KeReleaseSpinLock(v17, v5);
    }
  }
  return v6;
}
