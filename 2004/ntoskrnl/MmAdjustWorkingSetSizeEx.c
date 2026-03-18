/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x14034BC24
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x1403AB810 (MmAdjustWorkingSetSize.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405990AC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405994B0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     PsReturnProcessQuota @ 0x14026B5F8 (PsReturnProcessQuota.c)
 *     MiGetCurrentMultiplexedVm @ 0x14027C7A4 (MiGetCurrentMultiplexedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     PsChargeProcessQuota @ 0x1402E2188 (PsChargeProcessQuota.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 *     MiEmptyWorkingSetInitiate @ 0x140311470 (MiEmptyWorkingSetInitiate.c)
 *     MiCheckWsLimits @ 0x14034BEE4 (MiCheckWsLimits.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  _KPROCESS *Process; // r15
  struct _KTHREAD *CurrentThread; // rdx
  __int64 CurrentMultiplexedVm; // rdi
  LONG *SharedVm; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  int v15; // r14d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  int v20; // ebx
  int v21; // eax
  __int64 v23; // rdx
  int v24; // ecx
  ULONG_PTR *v25; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v28; // zf
  signed __int32 v29; // eax
  ULONG_PTR *v30; // rcx
  struct _KPRCB *v31; // r9
  __int64 v32; // rdx
  signed __int32 v33; // eax
  unsigned __int64 v34; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR *v35; // [rsp+38h] [rbp-48h]
  unsigned __int64 v36; // [rsp+40h] [rbp-40h] BYREF
  __int64 v37; // [rsp+48h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+68h] [rbp-18h] BYREF
  KIRQL v40; // [rsp+D0h] [rbp+50h]
  __int16 v42; // [rsp+E8h] [rbp+68h]

  *(_QWORD *)&v39.OldIrql = 0LL;
  Process = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a6 = 0;
  v39.LockQueue = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    Process = CurrentThread->ApcState.Process;
    CurrentMultiplexedVm = (__int64)&Process[1].ActiveProcessorsPadding[6];
LABEL_3:
    if ( a1 == -1LL && a2 == -1LL )
      return MiEmptyWorkingSetInitiate(CurrentMultiplexedVm, 0, 0LL, -1LL);
    v35 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 174));
    SharedVm = MiGetSharedVm(CurrentMultiplexedVm);
    v40 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v39.LockQueue.Next = 0LL;
    v39.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(CurrentMultiplexedVm) + 16);
    KxAcquireQueuedSpinLock((__int64)&v39, (volatile __int64 *)v39.LockQueue.Lock);
    if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      v15 = -1073741558;
      goto LABEL_29;
    }
    if ( a1 )
      v13 = a1 >> 12;
    else
      v13 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v34 = v13;
    if ( a2 )
      v14 = a2 >> 12;
    else
      v14 = *(_QWORD *)(CurrentMultiplexedVm + 152);
    v36 = v14;
    v15 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v34, (unsigned int)&v36, a5, 0);
    if ( (v15 & 0xC0000000) == 0xC0000000 )
      goto LABEL_29;
    v16 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v17 = v34;
    v18 = *(_QWORD *)(CurrentMultiplexedVm + 16);
    v37 = v18;
    if ( v34 > v16 )
    {
      v19 = v34 - v16;
      *a6 = 1;
      if ( !a4 )
      {
        v15 = -1073741727;
        goto LABEL_29;
      }
      if ( !a3 )
      {
        v15 = PsChargeProcessQuota(Process, v18, v19);
        if ( v15 < 0 )
          goto LABEL_29;
      }
      if ( !(unsigned int)MiChargeResident(v35, v19, 512LL) )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v23, v19);
        v15 = -1073741670;
        goto LABEL_29;
      }
      v18 = v37;
    }
    else
    {
      v19 = v16 - v34;
      if ( v34 < *(_QWORD *)(v18 + 32) )
      {
        v15 = -1073741748;
        goto LABEL_29;
      }
    }
    if ( v36 < *(_QWORD *)(CurrentMultiplexedVm + 120) )
    {
      if ( *(_QWORD *)(v18 + 32) + 6LL >= v36 )
      {
        v15 = -1073741748;
        if ( *a6 == 1 )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v18, v19);
          v25 = v35;
          if ( v35 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( v19 + CachedResidentAvailable <= 0x100 )
              {
                do
                {
                  if ( v19 >= 0x80000 )
                    break;
                  v29 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                          v19 + CachedResidentAvailable,
                          CachedResidentAvailable);
                  v28 = (_DWORD)CachedResidentAvailable == v29;
                  LODWORD(CachedResidentAvailable) = v29;
                  if ( v28 )
                    goto LABEL_29;
                }
                while ( v29 != -1 && v19 + v29 <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v19 += (int)CachedResidentAvailable - 192;
              }
              v25 = v35;
            }
          }
          if ( v19 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 896, v19);
        }
        goto LABEL_29;
      }
      *(_BYTE *)(CurrentMultiplexedVm + 187) |= 0x10u;
    }
    if ( !*a6 && v19 )
    {
      if ( !a3 )
        PsReturnProcessQuota(Process, v18, v19);
      v30 = v35;
      if ( v35 == &MiSystemPartition )
      {
        v31 = KeGetCurrentPrcb();
        v32 = (int)v31->CachedResidentAvailable;
        if ( (_DWORD)v32 != -1 )
        {
          if ( v19 + v32 <= 0x100 )
          {
            do
            {
              if ( v19 >= 0x80000 )
                break;
              v33 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v31->CachedResidentAvailable,
                      v19 + v32,
                      v32);
              v28 = (_DWORD)v32 == v33;
              LODWORD(v32) = v33;
              if ( v28 )
                goto LABEL_86;
            }
            while ( v33 != -1 && v19 + v33 <= 0x100 );
          }
          if ( (int)v32 > 192
            && (_DWORD)v32 == _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v31->CachedResidentAvailable,
                                192,
                                v32) )
          {
            v19 += (int)v32 - 192;
          }
          v30 = v35;
        }
        v17 = v34;
      }
      if ( v19 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 896, v19);
LABEL_86:
        v17 = v34;
      }
    }
    *(_QWORD *)(CurrentMultiplexedVm + 152) = v36;
    *(_QWORD *)(CurrentMultiplexedVm + 112) = v17;
    if ( !a5 )
    {
LABEL_29:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v39);
      MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v40);
      return (unsigned int)v15;
    }
    v20 = 0;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
    v21 = *(_DWORD *)(CurrentMultiplexedVm + 184);
    v42 = v21;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v21) = v21 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_23;
      LOBYTE(v21) = v21 & 0x7F;
    }
    v20 = 1;
    LOBYTE(v42) = v21;
LABEL_23:
    if ( (a5 & 1) != 0 )
    {
      LOBYTE(v42) = v21 | 0x40;
    }
    else
    {
      if ( (a5 & 2) != 0 )
      {
        v20 = 1;
        LOBYTE(v42) = v21 & 0xBF;
      }
      if ( !v20 )
        goto LABEL_28;
    }
    *(_WORD *)(CurrentMultiplexedVm + 184) = v42;
LABEL_28:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_29;
  }
  if ( a3 == 2 )
  {
    CurrentMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( CurrentMultiplexedVm )
      goto LABEL_3;
  }
  else
  {
    v24 = a3 - 3;
    if ( a3 == 3 )
    {
      v24 = 2;
LABEL_43:
      CurrentMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v24);
      goto LABEL_3;
    }
    if ( a3 == 4 )
      goto LABEL_43;
  }
  return 3221225713LL;
}
