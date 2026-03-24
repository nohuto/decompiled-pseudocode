/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x1402BE19C
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x1403C9280 (MmAdjustWorkingSetSize.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14059E57C (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14059E980 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiGetCurrentMultiplexedVm @ 0x1402724F8 (MiGetCurrentMultiplexedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsReturnProcessQuota @ 0x140296F38 (PsReturnProcessQuota.c)
 *     MiCheckWsLimits @ 0x1402BE45C (MiCheckWsLimits.c)
 *     PsChargeProcessQuota @ 0x1402E5D24 (PsChargeProcessQuota.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiEmptyWorkingSetInitiate @ 0x14035A3D4 (MiEmptyWorkingSetInitiate.c)
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
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r14d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  int v23; // ebx
  int v24; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  ULONG_PTR *v28; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v31; // zf
  signed __int32 v32; // eax
  ULONG_PTR *v33; // rcx
  struct _KPRCB *v34; // r9
  __int64 v35; // rdx
  signed __int32 v36; // eax
  unsigned __int64 v37; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR *v38; // [rsp+38h] [rbp-48h]
  unsigned __int64 v39; // [rsp+40h] [rbp-40h] BYREF
  __int64 v40; // [rsp+48h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+68h] [rbp-18h] BYREF
  KIRQL v43; // [rsp+D0h] [rbp+50h]
  __int16 v45; // [rsp+E8h] [rbp+68h]

  *(_QWORD *)&v42.OldIrql = 0LL;
  Process = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a6 = 0;
  v42.LockQueue = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    Process = CurrentThread->ApcState.Process;
    CurrentMultiplexedVm = (__int64)&Process[1].ActiveProcessorsPadding[6];
LABEL_3:
    if ( a1 == -1LL && a2 == -1LL )
      return MiEmptyWorkingSetInitiate(CurrentMultiplexedVm, 0LL, 0LL, -1LL);
    v38 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 174));
    SharedVm = MiGetSharedVm(CurrentMultiplexedVm);
    v43 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v42.LockQueue.Next = 0LL;
    v42.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(CurrentMultiplexedVm) + 16);
    KxAcquireQueuedSpinLock(&v42, v42.LockQueue.Lock, v13);
    if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      v18 = -1073741558;
      goto LABEL_29;
    }
    if ( a1 )
      v14 = a1 >> 12;
    else
      v14 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v37 = v14;
    if ( a2 )
      v15 = a2 >> 12;
    else
      v15 = *(_QWORD *)(CurrentMultiplexedVm + 152);
    v39 = v15;
    v18 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v37, (unsigned int)&v39, a5, 0);
    if ( (v18 & 0xC0000000) == 0xC0000000 )
      goto LABEL_29;
    v19 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v20 = v37;
    v21 = *(_QWORD *)(CurrentMultiplexedVm + 16);
    v40 = v21;
    if ( v37 > v19 )
    {
      v22 = v37 - v19;
      *a6 = 1;
      if ( !a4 )
      {
        v18 = -1073741727;
        goto LABEL_29;
      }
      if ( !a3 )
      {
        v18 = PsChargeProcessQuota(Process, v21, v22);
        if ( v18 < 0 )
          goto LABEL_29;
      }
      if ( !(unsigned int)MiChargeResident(v38, v22, 512LL, v17) )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v26, v22);
        v18 = -1073741670;
        goto LABEL_29;
      }
      v21 = v40;
    }
    else
    {
      v22 = v19 - v37;
      if ( v37 < *(_QWORD *)(v21 + 32) )
      {
        v18 = -1073741748;
        goto LABEL_29;
      }
    }
    if ( v39 < *(_QWORD *)(CurrentMultiplexedVm + 120) )
    {
      if ( *(_QWORD *)(v21 + 32) + 6LL >= v39 )
      {
        v18 = -1073741748;
        if ( *a6 == 1 )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v21, v22);
          v28 = v38;
          if ( v38 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( v22 + CachedResidentAvailable <= 0x100 )
              {
                do
                {
                  if ( v22 >= 0x80000 )
                    break;
                  v32 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                          v22 + CachedResidentAvailable,
                          CachedResidentAvailable);
                  v31 = (_DWORD)CachedResidentAvailable == v32;
                  LODWORD(CachedResidentAvailable) = v32;
                  if ( v31 )
                    goto LABEL_29;
                }
                while ( v32 != -1 && v22 + v32 <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v22 += (int)CachedResidentAvailable - 192;
              }
              v28 = v38;
            }
          }
          if ( v22 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 896, v22);
        }
        goto LABEL_29;
      }
      *(_BYTE *)(CurrentMultiplexedVm + 187) |= 0x10u;
    }
    if ( !*a6 && v22 )
    {
      if ( !a3 )
        PsReturnProcessQuota(Process, v21, v22);
      v33 = v38;
      if ( v38 == &MiSystemPartition )
      {
        v34 = KeGetCurrentPrcb();
        v16 = 0xFFFFFFFFLL;
        v35 = (int)v34->CachedResidentAvailable;
        if ( (_DWORD)v35 != -1 )
        {
          if ( v22 + v35 <= 0x100 )
          {
            do
            {
              if ( v22 >= 0x80000 )
                break;
              v36 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v34->CachedResidentAvailable,
                      v22 + v35,
                      v35);
              v31 = (_DWORD)v35 == v36;
              LODWORD(v35) = v36;
              if ( v31 )
                goto LABEL_86;
            }
            while ( v36 != -1 && v22 + v36 <= 0x100 );
          }
          if ( (int)v35 > 192
            && (_DWORD)v35 == _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v34->CachedResidentAvailable,
                                192,
                                v35) )
          {
            v22 += (int)v35 - 192;
          }
          v33 = v38;
        }
        v20 = v37;
      }
      if ( v22 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 896, v22);
LABEL_86:
        v20 = v37;
      }
    }
    *(_QWORD *)(CurrentMultiplexedVm + 152) = v39;
    *(_QWORD *)(CurrentMultiplexedVm + 112) = v20;
    if ( !a5 )
    {
LABEL_29:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v42);
      MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v43);
      return (unsigned int)v18;
    }
    v23 = 0;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock(&LockHandle, &SpinLock, v16);
    v24 = *(_DWORD *)(CurrentMultiplexedVm + 184);
    v45 = v24;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v24) = v24 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_23;
      LOBYTE(v24) = v24 & 0x7F;
    }
    v23 = 1;
    LOBYTE(v45) = v24;
LABEL_23:
    if ( (a5 & 1) != 0 )
    {
      LOBYTE(v45) = v24 | 0x40;
    }
    else
    {
      if ( (a5 & 2) != 0 )
      {
        v23 = 1;
        LOBYTE(v45) = v24 & 0xBF;
      }
      if ( !v23 )
        goto LABEL_28;
    }
    *(_WORD *)(CurrentMultiplexedVm + 184) = v45;
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
    v27 = (unsigned int)(a3 - 3);
    if ( a3 == 3 )
    {
      v27 = 2LL;
LABEL_43:
      CurrentMultiplexedVm = MiGetAnyMultiplexedVm(v27);
      goto LABEL_3;
    }
    if ( a3 == 4 )
      goto LABEL_43;
  }
  return 3221225713LL;
}
