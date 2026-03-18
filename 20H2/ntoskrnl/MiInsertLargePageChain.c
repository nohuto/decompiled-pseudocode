/*
 * XREFs of MiInsertLargePageChain @ 0x1402F1AEC
 * Callers:
 *     MiInsertDemotedPages @ 0x1402F1930 (MiInsertDemotedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiSetPfnPageState @ 0x1402AD310 (MiSetPfnPageState.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiIsFreeZeroPfnCold @ 0x14034D3C0 (MiIsFreeZeroPfnCold.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AB590 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     MiLockPageAtDpc @ 0x14054DE4C (MiLockPageAtDpc.c)
 *     MiWakeLargePageWaiters @ 0x1405562AC (MiWakeLargePageWaiters.c)
 */

void __fastcall MiInsertLargePageChain(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  BOOL v7; // r14d
  int v8; // r9d
  unsigned int IsFreeZeroPfnCold; // r12d
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rcx
  char v16; // r9
  unsigned int v17; // eax
  bool v18; // zf
  __int64 v19; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]

  v21 = a3;
  v23 = 0LL;
  v7 = (*(_DWORD *)(a2 + 16) & 0x3E0LL) != 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v22 = 0LL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a2);
  v10 = MiLargePageSizes[v8];
  if ( v8 == 2 )
  {
    MiConvertEntireLargePageToSmall(a2, 2, 1, v7, 0LL, 0LL);
  }
  else
  {
    v11 = MiLargePageSizes[v8 + 1];
    v12 = v10 / v11;
    v13 = v10 + (a2 + 0x58000000000LL) / 48 - v11;
    v14 = 48 * (v10 - v11) + a2;
    MiLockPageAtDpc(v14);
    LockHandle.LockQueue.Next = 0LL;
    *((_QWORD *)&v22 + 1) = v7 | 0x300000000LL;
    *(_QWORD *)&v22 = v13;
    LOBYTE(v23) = 2;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4328);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4328));
    while ( 1 )
    {
      if ( (*(_BYTE *)(v14 + 34) & 7) == 6 )
      {
        MiSetPfnPageState(v14, 5);
        MiSetFreeZeroPfnCold(v15, IsFreeZeroPfnCold);
        MiSetPfnPageState(v14, 6);
      }
      else
      {
        MiSetFreeZeroPfnCold(v14, IsFreeZeroPfnCold);
      }
      *(_BYTE *)(v14 + 39) = v16 | *(_BYTE *)(v14 + 39) & 0xFC;
      if ( (_DWORD)v12 == 1 )
      {
        if ( v21 )
          break;
      }
      v18 = *(_QWORD *)(a1 + 4352) == 0LL;
      *(_QWORD *)&v22 = v13;
      if ( v18 )
      {
        HIDWORD(v22) |= 2u;
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        HIDWORD(v22) &= ~2u;
      }
      MiInsertLargePageInNodeList(&v22);
      LODWORD(v12) = v12 - 1;
      if ( !(_DWORD)v12 )
        goto LABEL_21;
      v13 -= v11;
      v14 += -48LL * v11;
      v17 = HIDWORD(v22);
      v18 = (BYTE12(v22) & 2) == 0;
      if ( (BYTE12(v22) & 2) != 0 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v17 = HIDWORD(v22) & 0xFFFFFFFD;
          HIDWORD(v22) &= ~2u;
        }
        else
        {
          v17 = HIDWORD(v22);
        }
        v18 = (v17 & 2) == 0;
      }
      if ( v18 )
      {
        HIDWORD(v22) = v17 | 2;
        MiLockPageAtDpc(v14);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4328);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4328));
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_21:
  if ( a5 )
  {
    if ( (BYTE12(v22) & 2) == 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4328);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4328));
    }
    v19 = *(_QWORD *)(a1 + 4288);
    *(_QWORD *)(a1 + 4288) = 0LL;
    --*(_DWORD *)(a1 + 4284);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v19 )
      MiWakeLargePageWaiters(v19);
  }
  else if ( (BYTE12(v22) & 2) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
