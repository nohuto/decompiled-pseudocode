/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x14023C7DC
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x1403C9420 (MmAdjustWorkingSetSize.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14059E7AC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059EBB0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspSetQuotaLimits @ 0x140603BC4 (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCheckWsLimits @ 0x14023CA9C (MiCheckWsLimits.c)
 *     MiGetCurrentMultiplexedVm @ 0x140260498 (MiGetCurrentMultiplexedVm.c)
 *     PsReturnProcessQuota @ 0x140274018 (PsReturnProcessQuota.c)
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     PsChargeProcessQuota @ 0x140297074 (PsChargeProcessQuota.c)
 *     MiEmptyWorkingSetInitiate @ 0x14029F170 (MiEmptyWorkingSetInitiate.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
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
  __int64 SharedVm; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r14
  __int64 v18; // r8
  struct _KPRCB *v19; // r9
  int v20; // r14d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  int v25; // ebx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  ULONG_PTR *v31; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v34; // zf
  signed __int32 v35; // eax
  ULONG_PTR *v36; // rcx
  __int64 v37; // rdx
  signed __int32 v38; // eax
  unsigned __int64 v39; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR *v40; // [rsp+38h] [rbp-48h]
  unsigned __int64 v41; // [rsp+40h] [rbp-40h] BYREF
  __int64 v42; // [rsp+48h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+68h] [rbp-18h] BYREF
  KIRQL v45; // [rsp+D0h] [rbp+50h]
  __int16 v47; // [rsp+E8h] [rbp+68h]

  *(_QWORD *)&v44.OldIrql = 0LL;
  Process = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a6 = 0;
  v44.LockQueue = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    Process = CurrentThread->ApcState.Process;
    CurrentMultiplexedVm = (__int64)&Process[1].ActiveProcessorsPadding[6];
LABEL_3:
    if ( a1 == -1LL && a2 == -1LL )
      return MiEmptyWorkingSetInitiate(CurrentMultiplexedVm, 0LL, 0LL);
    v40 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 174));
    SharedVm = MiGetSharedVm(CurrentMultiplexedVm, CurrentThread);
    v45 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v44.LockQueue.Next = 0LL;
    v44.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(CurrentMultiplexedVm, v13) + 64);
    KxAcquireQueuedSpinLock(&v44, v44.LockQueue.Lock, v14, v15);
    if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      v20 = -1073741558;
      goto LABEL_29;
    }
    if ( a1 )
      v16 = a1 >> 12;
    else
      v16 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v39 = v16;
    if ( a2 )
      v17 = a2 >> 12;
    else
      v17 = *(_QWORD *)(CurrentMultiplexedVm + 152);
    v41 = v17;
    v20 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v39, (unsigned int)&v41, a5, 0);
    if ( (v20 & 0xC0000000) == 0xC0000000 )
      goto LABEL_29;
    v21 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v22 = v39;
    v23 = *(_QWORD *)(CurrentMultiplexedVm + 16);
    v42 = v23;
    if ( v39 > v21 )
    {
      v24 = v39 - v21;
      *a6 = 1;
      if ( !a4 )
      {
        v20 = -1073741727;
        goto LABEL_29;
      }
      if ( !a3 )
      {
        v20 = PsChargeProcessQuota(Process, v23, v24);
        if ( v20 < 0 )
          goto LABEL_29;
      }
      if ( !(unsigned int)MiChargeResident(v40, v24, 512LL) )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v29, v24);
        v20 = -1073741670;
        goto LABEL_29;
      }
      v23 = v42;
    }
    else
    {
      v24 = v21 - v39;
      if ( v39 < *(_QWORD *)(v23 + 32) )
      {
        v20 = -1073741748;
        goto LABEL_29;
      }
    }
    if ( v41 < *(_QWORD *)(CurrentMultiplexedVm + 120) )
    {
      if ( *(_QWORD *)(v23 + 32) + 6LL >= v41 )
      {
        v20 = -1073741748;
        if ( *a6 == 1 )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v23, v24);
          v31 = v40;
          if ( v40 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( v24 + CachedResidentAvailable <= 0x100 )
              {
                do
                {
                  if ( v24 >= 0x80000 )
                    break;
                  v35 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                          v24 + CachedResidentAvailable,
                          CachedResidentAvailable);
                  v34 = (_DWORD)CachedResidentAvailable == v35;
                  LODWORD(CachedResidentAvailable) = v35;
                  if ( v34 )
                    goto LABEL_29;
                }
                while ( v35 != -1 && v24 + v35 <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v24 += (int)CachedResidentAvailable - 192;
              }
              v31 = v40;
            }
          }
          if ( v24 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 896, v24);
        }
        goto LABEL_29;
      }
      *(_BYTE *)(CurrentMultiplexedVm + 187) |= 0x10u;
    }
    if ( !*a6 && v24 )
    {
      if ( !a3 )
        PsReturnProcessQuota(Process, v23, v24);
      v36 = v40;
      if ( v40 == &MiSystemPartition )
      {
        v19 = KeGetCurrentPrcb();
        v18 = 0xFFFFFFFFLL;
        v37 = (int)v19->CachedResidentAvailable;
        if ( (_DWORD)v37 != -1 )
        {
          if ( v24 + v37 <= 0x100 )
          {
            do
            {
              if ( v24 >= 0x80000 )
                break;
              v38 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v19->CachedResidentAvailable,
                      v24 + v37,
                      v37);
              v34 = (_DWORD)v37 == v38;
              LODWORD(v37) = v38;
              if ( v34 )
                goto LABEL_86;
            }
            while ( v38 != -1 && v24 + v38 <= 0x100 );
          }
          if ( (int)v37 > 192
            && (_DWORD)v37 == _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v19->CachedResidentAvailable,
                                192,
                                v37) )
          {
            v24 += (int)v37 - 192;
          }
          v36 = v40;
        }
        v22 = v39;
      }
      if ( v24 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 896, v24);
LABEL_86:
        v22 = v39;
      }
    }
    *(_QWORD *)(CurrentMultiplexedVm + 152) = v41;
    *(_QWORD *)(CurrentMultiplexedVm + 112) = v22;
    if ( !a5 )
    {
LABEL_29:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
      LOBYTE(v27) = v45;
      MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v27);
      return (unsigned int)v20;
    }
    v25 = 0;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock(&LockHandle, &SpinLock, v18, v19);
    v26 = *(_DWORD *)(CurrentMultiplexedVm + 184);
    v47 = v26;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v26) = v26 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_23;
      LOBYTE(v26) = v26 & 0x7F;
    }
    v25 = 1;
    LOBYTE(v47) = v26;
LABEL_23:
    if ( (a5 & 1) != 0 )
    {
      LOBYTE(v47) = v26 | 0x40;
    }
    else
    {
      if ( (a5 & 2) != 0 )
      {
        v25 = 1;
        LOBYTE(v47) = v26 & 0xBF;
      }
      if ( !v25 )
        goto LABEL_28;
    }
    *(_WORD *)(CurrentMultiplexedVm + 184) = v47;
LABEL_28:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_29;
  }
  if ( a3 == 2 )
  {
    CurrentMultiplexedVm = MiGetCurrentMultiplexedVm(0LL, CurrentThread);
    if ( CurrentMultiplexedVm )
      goto LABEL_3;
  }
  else
  {
    v30 = (unsigned int)(a3 - 3);
    if ( a3 == 3 )
    {
      v30 = 2LL;
LABEL_43:
      CurrentMultiplexedVm = MiGetAnyMultiplexedVm(v30);
      goto LABEL_3;
    }
    if ( a3 == 4 )
      goto LABEL_43;
  }
  return 3221225713LL;
}
