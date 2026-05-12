/*
 * XREFs of GatewayCheckWaitTimeout @ 0x1C004D540
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x1C002B60C (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GatewayCheckWaitTimeout(KSPIN_LOCK *SpinLock, int a2, KSPIN_LOCK a3)
{
  PKSPIN_LOCK v3; // rbx
  unsigned int v6; // r14d
  char v7; // r15
  unsigned int v8; // edi
  __int64 v9; // rsi
  ULONGLONG UnbiasedInterruptTime; // r12
  PKSPIN_LOCK v11; // rax
  KSPIN_LOCK v12; // r8
  ULONGLONG v13; // rdx
  KSPIN_LOCK v14; // rcx
  PKSPIN_LOCK *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  PKSPIN_LOCK *v19; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = SpinLock + 33;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( !*((_DWORD *)SpinLock + 6) || (PKSPIN_LOCK)*v3 == v3 )
    return 0LL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
  v11 = (PKSPIN_LOCK)*v3;
  while ( v11 != v3 )
  {
    v12 = v11[3];
    if ( (*(_BYTE *)(v12 + 450) & 2) == 0 )
    {
      v13 = *(v11 - 2);
      if ( v13 == -1LL || v13 >= UnbiasedInterruptTime )
        break;
    }
    if ( (*(_BYTE *)(v12 + 450) & 2) == 0 && !v7 )
    {
      v9 = *(_QWORD *)(v12 + 24);
      v7 = 1;
      v8 = *((_DWORD *)SpinLock + 6);
    }
    v14 = *v11;
    if ( *(PKSPIN_LOCK *)(*v11 + 8) != v11 )
      goto LABEL_21;
    v15 = (PKSPIN_LOCK *)v11[1];
    if ( *v15 != v11 )
      goto LABEL_21;
    *v15 = (PKSPIN_LOCK)v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = v11[2] + 120;
    v17 = *(_QWORD *)v16;
    if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) == v16 )
    {
      v18 = *(_QWORD **)(v11[2] + 128);
      if ( *v18 == v16 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        --*((_DWORD *)SpinLock + 6);
        v19 = *(PKSPIN_LOCK **)(a3 + 8);
        if ( *v19 == (PKSPIN_LOCK)a3 )
          goto LABEL_25;
      }
    }
LABEL_21:
    __fastfail(3u);
LABEL_25:
    *v11 = a3;
    ++v6;
    v11[1] = (KSPIN_LOCK)v19;
    *v19 = v11;
    *(_QWORD *)(a3 + 8) = v11;
    v11 = (PKSPIN_LOCK)*v3;
    if ( v6 == a2 )
      break;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v7 )
  {
    if ( v8 > *(_DWORD *)(v9 + 5476) )
      *(_DWORD *)(v9 + 5476) = v8;
  }
  return v6;
}
