/*
 * XREFs of MiInsertLargePageChain @ 0x1403094D4
 * Callers:
 *     MiInsertDemotedPages @ 0x14020F840 (MiInsertDemotedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiIsFreeZeroPfnCold @ 0x14030DE70 (MiIsFreeZeroPfnCold.c)
 *     MiSetPfnPageState @ 0x140334C50 (MiSetPfnPageState.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiSetFreeZeroPfnCold @ 0x1403B1600 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiLockPageAtDpc @ 0x14054FB5C (MiLockPageAtDpc.c)
 *     MiWakeLargePageWaiters @ 0x140557FBC (MiWakeLargePageWaiters.c)
 */

void __fastcall MiInsertLargePageChain(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  BOOL v7; // r14d
  int v8; // r9d
  unsigned int IsFreeZeroPfnCold; // r12d
  unsigned __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  bool v25; // zf
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  unsigned int v29; // [rsp+30h] [rbp-50h]
  unsigned int v30; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-48h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h]
  __int128 v33; // [rsp+58h] [rbp-28h] BYREF
  __int64 v34; // [rsp+68h] [rbp-18h]

  v32 = a3;
  v34 = 0LL;
  v7 = (*(_DWORD *)(a2 + 16) & 0x3E0LL) != 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v33 = 0LL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a2);
  v10 = MiLargePageSizes[v8];
  if ( v8 == 2 )
  {
    MiConvertEntireLargePageToSmall(a2, 2, 1, v7, 0LL, 0LL);
  }
  else
  {
    v13 = (unsigned int)(v8 + 1);
    v29 = v13;
    v14 = MiLargePageSizes[v13];
    v15 = v10 / v14;
    v16 = v10 + (a2 + 0x58000000000LL) / 48 - v14;
    v17 = 48 * (v10 - v14) + a2;
    MiLockPageAtDpc(v17);
    LockHandle.LockQueue.Next = 0LL;
    *((_QWORD *)&v33 + 1) = v7 | 0x300000000LL;
    *(_QWORD *)&v33 = v16;
    LOBYTE(v34) = 2;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4328);
    KxAcquireQueuedSpinLock(&LockHandle, a1 + 4328, v18, v19);
    v20 = v29;
    LOBYTE(v20) = ~(_BYTE)v29 & 3;
    v30 = v20;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v17 + 34) & 7) == 6 )
      {
        MiSetPfnPageState(v17, 5LL, v11, v20);
        MiSetFreeZeroPfnCold(v21, IsFreeZeroPfnCold);
        MiSetPfnPageState(v17, 6LL, v22, v23);
      }
      else
      {
        MiSetFreeZeroPfnCold(v17, IsFreeZeroPfnCold);
      }
      *(_BYTE *)(v17 + 39) = v12 | *(_BYTE *)(v17 + 39) & 0xFC;
      if ( (_DWORD)v15 == 1 )
      {
        if ( v32 )
          break;
      }
      v25 = *(_QWORD *)(a1 + 4352) == 0LL;
      *(_QWORD *)&v33 = v16;
      if ( v25 )
      {
        HIDWORD(v33) |= 2u;
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        HIDWORD(v33) &= ~2u;
      }
      MiInsertLargePageInNodeList(&v33);
      LODWORD(v15) = v15 - 1;
      if ( !(_DWORD)v15 )
        goto LABEL_21;
      v16 -= v14;
      v17 += -48LL * v14;
      v24 = HIDWORD(v33);
      v25 = (BYTE12(v33) & 2) == 0;
      if ( (BYTE12(v33) & 2) != 0 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v24 = HIDWORD(v33) & 0xFFFFFFFD;
          HIDWORD(v33) &= ~2u;
        }
        else
        {
          v24 = HIDWORD(v33);
        }
        v25 = (v24 & 2) == 0;
      }
      v20 = v30;
      if ( v25 )
      {
        HIDWORD(v33) = v24 | 2;
        MiLockPageAtDpc(v17);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4328);
        KxAcquireQueuedSpinLock(&LockHandle, a1 + 4328, v26, v27);
        v20 = v30;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_21:
  if ( a5 )
  {
    if ( (BYTE12(v33) & 2) == 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4328);
      KxAcquireQueuedSpinLock(&LockHandle, a1 + 4328, v11, v12);
    }
    v28 = *(_QWORD *)(a1 + 4288);
    *(_QWORD *)(a1 + 4288) = 0LL;
    --*(_DWORD *)(a1 + 4284);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v28 )
      MiWakeLargePageWaiters(v28);
  }
  else if ( (BYTE12(v33) & 2) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
