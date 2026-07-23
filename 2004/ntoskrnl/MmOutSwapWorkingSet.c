/*
 * XREFs of MmOutSwapWorkingSet @ 0x14030DD64
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14065A9AC (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14020B330 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiVadMapsLargeImage @ 0x140213440 (MiVadMapsLargeImage.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiVadSupportsPrivateCommit @ 0x1402AD6E0 (MiVadSupportsPrivateCommit.c)
 *     SmStoreExistsForProcess @ 0x1402CCAB8 (SmStoreExistsForProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402F237C (MiGetWorkingSetSwapSupport.c)
 *     MiOutSwapWorkingSet @ 0x14030E3BC (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14030E4B4 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14030E50C (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x14030E7AC (MiGetKernelStackSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x14030E8C4 (MiFindBestOutswapPagefile.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SmStoreSetProcessVaRanges @ 0x1406D0138 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x1406D01E0 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x1406D056C (MiFreeReservationRuns.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406D05FC (MiFreeWorkingSetSwapContext.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406D28EC (MiReserveWorkingSetSwapSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D64CC (MiExtendWorkingSetSwapPagefile.c)
 *     VmCheckLargePageInswap @ 0x14092B204 (VmCheckLargePageInswap.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  PVOID v49; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  __int64 v59; // rax
  int v60; // eax
  int v61; // ecx
  __int64 v62; // rdi
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  __int64 v67; // [rsp+28h] [rbp-E0h]
  int v68; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v69; // [rsp+40h] [rbp-C8h]
  unsigned int v70; // [rsp+48h] [rbp-C0h] BYREF
  int v71; // [rsp+4Ch] [rbp-BCh]
  __int64 v72; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+58h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PEPROCESS Processa; // [rsp+78h] [rbp-90h]
  _OWORD v78[10]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v79; // [rsp+128h] [rbp+20h]
  __int128 v80; // [rsp+138h] [rbp+30h]
  __int64 v81; // [rsp+148h] [rbp+40h]

  v70 = 0;
  v2 = &Process[1].ActiveProcessorsPadding[6];
  Processa = Process;
  v81 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v69 = 0LL;
  v5 = 0;
  P = 0LL;
  memset(v78, 0, 0x98uLL);
  v73 = *(_QWORD *)(qword_140C4E448 + 8LL * *((unsigned __int16 *)v2 + 87));
  v6 = v73;
  LODWORD(v79) = a2 != 0;
  *((_QWORD *)&v78[1] + 1) = v73;
  SessionId = -1;
  v68 = -1;
  if ( SmStoreExistsForProcess() )
  {
    LODWORD(v79) = v79 | 4;
    v5 = 2;
    LODWORD(v78[2]) = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v73, &v70);
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
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v2);
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
              v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v20 = (v54 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v54;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        v6 = v73;
      }
      else
      {
        *((_QWORD *)MiGetSharedVm(v13) + 3) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v55 = KeGetCurrentIrql();
            if ( v55 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v55 >= 2u )
            {
              v56 = KeGetCurrentPrcb();
              v57 = v56->SchedulerAssist;
              v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v20 = (v58 & v57[5]) == 0;
              v14 = (unsigned int)v58 & v57[5];
              v57[5] = v14;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v56);
            }
          }
        }
        __writecr8(v11);
        v15 = v70;
        while ( 1 )
        {
          v16 = v2[16];
          v69 = v16;
          if ( !v16 )
          {
            v35 = -1073741779;
            goto LABEL_36;
          }
          if ( LODWORD(v78[2]) == -1 )
            break;
          LODWORD(v67) = v15;
          v35 = MiReserveWorkingSetSwapSpace(v73, (char *)&v78[2] + 8, v14, BestOutswapPagefile);
          if ( v35 >= 0 )
          {
            v16 = v69;
            break;
          }
          if ( v15 < 0x10 )
          {
            BestOutswapPagefile = v15;
            v35 = MiExtendWorkingSetSwapPagefile(v73, v69, v15);
            if ( v35 >= 0 )
              continue;
          }
          goto LABEL_36;
        }
        v17 = MiAllocateWorkingSetSwapSupport(v16);
        *Pool = (PVOID)v17;
        if ( !v17 )
          goto LABEL_98;
        if ( LODWORD(v78[2]) != -1 )
          *(_DWORD *)(v17 + 32) |= 1u;
        v18 = 0LL;
        if ( !a2 )
          goto LABEL_14;
        v18 = v2[17];
        if ( v18 - v2[18] <= v18 )
          v18 = v2[17] - v2[18];
        if ( v18 && (v59 = MiAllocateWorkingSetSwapSupport(v18), (Pool[1] = (PVOID)v59) == 0LL) )
        {
LABEL_98:
          v35 = -1073741670;
        }
        else
        {
LABEL_14:
          v19 = Processa;
          v78[0] = *(_OWORD *)Pool;
          v20 = Processa[2].Affinity.Bitmap[5] == 0;
          *(_QWORD *)&v78[1] = v2;
          if ( !v20 )
          {
            v60 = VmCheckLargePageInswap(Processa);
            v61 = v78[9];
            if ( v60 )
              v61 = 1;
            LODWORD(v78[9]) = v61;
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
                  (__int64)v78);
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
            if ( *((_QWORD *)*Pool + 2) < v69 )
            {
              v30 = MiReAllocateWorkingSetSwapSupport(*Pool, v27, v28, v29, v67);
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
                v62 = MiReAllocateWorkingSetSwapSupport(v31, v27, v28, v29, v67);
                if ( v62 )
                {
                  ExFreePoolWithTag(Pool[1], 0);
                  Pool[1] = (PVOID)v62;
                }
              }
            }
            v69 = *((_QWORD *)*Pool + 3);
            MiGetKernelStackSwapSupport(Pool, v19);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*Pool, v32, v33, v34, v67);
            v5 |= 4u;
            v35 = 0;
          }
        }
LABEL_36:
        v36 = SpinLock;
        v37 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport((__int64)v2) == 1 )
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
            v63 = KeGetCurrentIrql();
            if ( v63 <= 0xFu && (unsigned __int8)v37 <= 0xFu && v63 >= 2u )
            {
              v64 = KeGetCurrentPrcb();
              v65 = v64->SchedulerAssist;
              v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
              v20 = (v66 & v65[5]) == 0;
              v65[5] &= v66;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v64);
            }
          }
        }
        __writecr8(v37);
        v6 = v73;
        MiFreeReservationRuns(v73, (char *)&v78[2] + 8);
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
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1128));
    LODWORD(v72) = 0;
    v41 = v6 + 1128;
    v42 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v41) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v42->ApcState.Process);
      v68 = SessionId;
    }
    --v42->SpecialApcDisable;
    v43 = ++v42->AbAllocationRegionCount;
    v44 = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v45, v44);
    v71 = v45;
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
        v46 = (__int64)&v42->LockEntries[v45];
        v44 &= ~(1 << v45);
        if ( (*(_BYTE *)(v46 + 26) & 1) != 0
          && (*(_DWORD *)(v46 + 32) & 1) == 0
          && (*(_QWORD *)(v46 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v40 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v46 + 40) == v68 )
        {
          *(_BYTE *)(v46 + 26) &= ~1u;
          if ( *(_QWORD *)(v46 + 32) )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v45, v44);
        v71 = v45;
        if ( v20 )
          goto LABEL_70;
      }
      if ( !v46 )
      {
LABEL_70:
        SessionId = v68;
        goto LABEL_71;
      }
      *(_BYTE *)(v46 + 32) |= 2u;
      if ( *(__int64 *)(v46 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v46);
      LODWORD(v72) = *(_DWORD *)(v46 + 88) & 0x1FFFF;
      *(_DWORD *)(v46 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v46 + 25) &= ~1u;
      *(_QWORD *)(v46 + 32) = 0LL;
      v47 = (signed __int64)(v46 - (unsigned __int64)v42->LockEntries) / 96;
      if ( v43 == 1 )
        v42->AbEntrySummary |= 1 << v47;
      else
        _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, 1 << v47);
    }
    --v42->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v42, v40, &v72);
    v20 = v42->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
      KiCheckForKernelApcDelivery(v48);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v49 = P;
  if ( P )
  {
    if ( v5 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v49, 0);
  }
  *(_QWORD *)&v79 = v69;
  *((_QWORD *)&v79 + 1) = *((_QWORD *)&v78[7] + 1);
  v80 = v78[8];
  LODWORD(v81) = v35;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v35;
}
