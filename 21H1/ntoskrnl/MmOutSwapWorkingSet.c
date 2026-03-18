/*
 * XREFs of MmOutSwapWorkingSet @ 0x1402CC124
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiVadSupportsPrivateCommit @ 0x14021AA60 (MiVadSupportsPrivateCommit.c)
 *     SmStoreExistsForProcess @ 0x140239C88 (SmStoreExistsForProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140264380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiVadMapsLargeImage @ 0x14026C490 (MiVadMapsLargeImage.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiOutSwapWorkingSet @ 0x1402CC77C (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1402CC874 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1402CC8CC (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402CCB68 (MiGetWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x1402CCDE0 (MiGetKernelStackSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1402CCEF8 (MiFindBestOutswapPagefile.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SmStoreSetProcessVaRanges @ 0x140655AD8 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x140655B80 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x140655F0C (MiFreeReservationRuns.c)
 *     MiFreeWorkingSetSwapContext @ 0x140655F9C (MiFreeWorkingSetSwapContext.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140656318 (MiReserveWorkingSetSwapSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D517C (MiExtendWorkingSetSwapPagefile.c)
 *     VmCheckLargePageInswap @ 0x140929F54 (VmCheckLargePageInswap.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int64 *v2; // r13
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int SessionId; // r14d
  unsigned int BestOutswapPagefile; // r15d
  PVOID *Pool; // r14
  volatile LONG *v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 WorkingSetSwapSupport; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  PEPROCESS v19; // r15
  bool v20; // zf
  struct _KTHREAD *v21; // r12
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // esi
  volatile LONG *v36; // r15
  unsigned __int64 v37; // rdi
  __int64 v38; // rcx
  LONG *SharedVm; // rax
  ULONG_PTR v40; // r15
  unsigned __int64 v41; // rcx
  struct _KTHREAD *v42; // rdi
  unsigned __int8 v43; // r12
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  PVOID v53; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  __int64 v63; // rax
  int v64; // eax
  int v65; // ecx
  __int64 v66; // rdi
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  __int64 v71; // [rsp+28h] [rbp-E0h]
  int v72; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v73; // [rsp+40h] [rbp-C8h]
  unsigned int v74; // [rsp+48h] [rbp-C0h] BYREF
  int v75; // [rsp+4Ch] [rbp-BCh]
  __int64 v76; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v77; // [rsp+58h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PEPROCESS Processa; // [rsp+78h] [rbp-90h]
  _OWORD v82[10]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v83; // [rsp+128h] [rbp+20h]
  __int128 v84; // [rsp+138h] [rbp+30h]
  __int64 v85; // [rsp+148h] [rbp+40h]

  v74 = 0;
  v2 = &Process[1].ActiveProcessorsPadding[6];
  Processa = Process;
  v85 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v73 = 0LL;
  v5 = 0;
  P = 0LL;
  memset(v82, 0, 0x98uLL);
  v77 = *(_QWORD *)(qword_140C4E588 + 8LL * *((unsigned __int16 *)v2 + 87));
  v6 = v77;
  LODWORD(v83) = a2 != 0;
  *((_QWORD *)&v82[1] + 1) = v77;
  SessionId = -1;
  v72 = -1;
  if ( SmStoreExistsForProcess() )
  {
    LODWORD(v83) = v83 | 4;
    v5 = 2;
    LODWORD(v82[2]) = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v77, &v74);
  if ( BestOutswapPagefile == 16 )
  {
    v35 = -1073741497;
  }
  else
  {
    Pool = (PVOID *)MiAllocatePool(64, 0x50uLL, 0x43536D4Du);
    if ( Pool )
    {
      v5 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 1128, 0LL);
      v10 = (volatile LONG *)(v6 + 1136);
      SpinLock = (PEX_SPIN_LOCK)(v6 + 1136);
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1136));
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v35 = -1073740682;
        }
        else
        {
          v35 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v35 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v20 = (v58 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v58;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        v6 = v77;
      }
      else
      {
        *((_QWORD *)MiGetSharedVm(v13) + 3) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v59 = KeGetCurrentIrql();
            if ( v59 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v59 >= 2u )
            {
              v60 = KeGetCurrentPrcb();
              v61 = v60->SchedulerAssist;
              v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v20 = (v62 & v61[5]) == 0;
              v14 = (unsigned int)v62 & v61[5];
              v61[5] = v14;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v60);
            }
          }
        }
        __writecr8(v11);
        v15 = v74;
        while ( 1 )
        {
          v16 = v2[16];
          v73 = v16;
          if ( !v16 )
          {
            v35 = -1073741779;
            goto LABEL_36;
          }
          if ( LODWORD(v82[2]) == -1 )
            break;
          LODWORD(v71) = v15;
          v35 = MiReserveWorkingSetSwapSpace(v77, (char *)&v82[2] + 8, v14, BestOutswapPagefile);
          if ( v35 >= 0 )
          {
            v16 = v73;
            break;
          }
          if ( v15 < 0x10 )
          {
            BestOutswapPagefile = v15;
            v35 = MiExtendWorkingSetSwapPagefile(v77, v73, v15);
            if ( v35 >= 0 )
              continue;
          }
          goto LABEL_36;
        }
        v17 = MiAllocateWorkingSetSwapSupport(v16);
        *Pool = (PVOID)v17;
        if ( !v17 )
          goto LABEL_98;
        if ( LODWORD(v82[2]) != -1 )
          *(_DWORD *)(v17 + 32) |= 1u;
        v18 = 0LL;
        if ( !a2 )
          goto LABEL_14;
        v18 = v2[17];
        if ( v18 - v2[18] <= v18 )
          v18 = v2[17] - v2[18];
        if ( v18 && (v63 = MiAllocateWorkingSetSwapSupport(v18), (Pool[1] = (PVOID)v63) == 0LL) )
        {
LABEL_98:
          v35 = -1073741670;
        }
        else
        {
LABEL_14:
          v19 = Processa;
          v82[0] = *(_OWORD *)Pool;
          v20 = Processa[2].Affinity.Bitmap[5] == 0;
          *(_QWORD *)&v82[1] = v2;
          if ( !v20 )
          {
            v64 = VmCheckLargePageInswap(Processa);
            v65 = v82[9];
            if ( v64 )
              v65 = 1;
            LODWORD(v82[9]) = v65;
          }
          v21 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v19[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v21[1].Queue) |= 2u;
          if ( (v19[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, (__int64)v19);
            v35 = -1073741558;
          }
          else
          {
            v22 = *(_QWORD **)&v19[1].Spare2[15];
            v23 = 0LL;
            while ( v22 )
            {
              v23 = (unsigned __int64)v22;
              v22 = (_QWORD *)*v22;
            }
            while ( v23 )
            {
              if ( !MiVadMapsLargeImage(v23) && MiVadSupportsPrivateCommit(v25) )
                MiOutSwapWorkingSet(
                  (_DWORD)v2,
                  v23,
                  *(_DWORD *)(v23 + 24) << 12,
                  (*(_DWORD *)(v23 + 28) << 12) | 0xFFF,
                  (__int64)v82);
              v24 = *(_QWORD **)(v23 + 8);
              v26 = v23;
              if ( v24 )
              {
                do
                {
                  v23 = (unsigned __int64)v24;
                  v24 = (_QWORD *)*v24;
                }
                while ( v24 );
              }
              else
              {
                while ( 1 )
                {
                  v23 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !v23 || *(_QWORD *)v23 == v26 )
                    break;
                  v26 = v23;
                }
              }
            }
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, (__int64)v19);
            if ( *((_QWORD *)*Pool + 2) < v73 )
            {
              v30 = MiReAllocateWorkingSetSwapSupport(*Pool, v27, v28, v29, v71);
              if ( v30 )
              {
                ExFreePoolWithTag(*Pool, 0);
                *Pool = (PVOID)v30;
              }
            }
            v31 = Pool[1];
            if ( v31 )
            {
              if ( v31[2] < v18 )
              {
                v66 = MiReAllocateWorkingSetSwapSupport(v31, v27, v28, v29, v71);
                if ( v66 )
                {
                  ExFreePoolWithTag(Pool[1], 0);
                  Pool[1] = (PVOID)v66;
                }
              }
            }
            v73 = *((_QWORD *)*Pool + 3);
            MiGetKernelStackSwapSupport(Pool, v19);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*Pool, v32, v33, v34, v71);
            v5 |= 4u;
            v35 = 0;
          }
        }
LABEL_36:
        v36 = SpinLock;
        v37 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport(v2) == 1 )
        {
          SharedVm = MiGetSharedVm(v38);
          if ( v5 < 4 )
          {
            *((_QWORD *)SharedVm + 3) = 0LL;
          }
          else
          {
            *((_QWORD *)SharedVm + 3) = Pool;
            Pool = 0LL;
            v35 = 0;
          }
        }
        else
        {
          v35 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v36);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v67 = KeGetCurrentIrql();
            if ( v67 <= 0xFu && (unsigned __int8)v37 <= 0xFu && v67 >= 2u )
            {
              v68 = KeGetCurrentPrcb();
              v69 = v68->SchedulerAssist;
              v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
              v20 = (v70 & v69[5]) == 0;
              v69[5] &= v70;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v68);
            }
          }
        }
        __writecr8(v37);
        v6 = v77;
        MiFreeReservationRuns(v77, (char *)&v82[2] + 8);
      }
      if ( Pool )
        MiFreeWorkingSetSwapContext(v6, Pool);
    }
    else
    {
      v35 = -1073741670;
    }
    SessionId = -1;
  }
  if ( (v5 & 1) != 0 )
  {
    v40 = v6 + 1128;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 1128);
    LODWORD(v76) = 0;
    v41 = v6 + 1128;
    v42 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v41) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v42->ApcState.Process);
      v72 = SessionId;
    }
    --v42->SpecialApcDisable;
    v43 = ++v42->AbAllocationRegionCount;
    LODWORD(v44) = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
    v45 = v40 & 0x7FFFFFFFFFFFFFFCLL;
    v20 = !_BitScanReverse((unsigned int *)&v46, v44);
    v75 = v46;
    if ( v20 )
    {
LABEL_71:
      if ( (*((_DWORD *)&v42->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v42, v40, SessionId, 0LL);
    }
    else
    {
      while ( 1 )
      {
        v47 = (__int64)&v42->LockEntries[v46];
        v44 = ~(1 << v46) & (unsigned int)v44;
        if ( (*(_BYTE *)(v47 + 26) & 1) != 0
          && (*(_DWORD *)(v47 + 32) & 1) == 0
          && (*(_QWORD *)(v47 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v45
          && *(_DWORD *)(v47 + 40) == v72 )
        {
          *(_BYTE *)(v47 + 26) &= ~1u;
          if ( *(_QWORD *)(v47 + 32) )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v46, v44);
        v75 = v46;
        if ( v20 )
          goto LABEL_70;
      }
      if ( !v47 )
      {
LABEL_70:
        SessionId = v72;
        goto LABEL_71;
      }
      *(_BYTE *)(v47 + 32) |= 2u;
      if ( *(__int64 *)(v47 + 32) < 0 )
        KiAbEntryRemoveFromTree(v47, v44, v45);
      LODWORD(v76) = *(_DWORD *)(v47 + 88) & 0x1FFFF;
      *(_DWORD *)(v47 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v47 + 25) &= ~1u;
      *(_QWORD *)(v47 + 32) = 0LL;
      v48 = (signed __int64)(v47 - (unsigned __int64)v42->LockEntries) / 96;
      if ( v43 == 1 )
        v42->AbEntrySummary |= 1 << v48;
      else
        _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, 1 << v48);
    }
    --v42->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v42, v40, &v76);
    v20 = v42->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
      KiCheckForKernelApcDelivery(v50);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v49, v51, v52);
  }
  v53 = P;
  if ( P )
  {
    if ( v5 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v53, 0);
  }
  *(_QWORD *)&v83 = v73;
  *((_QWORD *)&v83 + 1) = *((_QWORD *)&v82[7] + 1);
  v84 = v82[8];
  LODWORD(v85) = v35;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v35;
}
