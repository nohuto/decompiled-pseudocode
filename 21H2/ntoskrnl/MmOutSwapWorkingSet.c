/*
 * XREFs of MmOutSwapWorkingSet @ 0x14035C7D0
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiVadSupportsPrivateCommit @ 0x14021B240 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x14021CC20 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402D5F60 (MiGetWorkingSetSwapSupport.c)
 *     SmStoreExistsForProcess @ 0x1402D6310 (SmStoreExistsForProcess.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140348790 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     MiFindBestOutswapPagefile @ 0x14035C30C (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x14035C3EC (MiGetKernelStackSwapSupport.c)
 *     MiOutSwapWorkingSet @ 0x14035CE28 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14035CF20 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14035CF78 (MiAllocateWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14070FCE8 (MiReserveWorkingSetSwapSpace.c)
 *     MiFreeWorkingSetSwapContext @ 0x140710620 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1407106D0 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x14071071C (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x140710A9C (SmStoreSetProcessVaRanges.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D9ACC (MiExtendWorkingSetSwapPagefile.c)
 *     VmCheckLargePageInswap @ 0x14092E804 (VmCheckLargePageInswap.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v27; // rdi
  _QWORD *v28; // rcx
  int v29; // esi
  volatile LONG *v30; // r15
  unsigned __int64 v31; // rdi
  __int64 v32; // rcx
  LONG *SharedVm; // rax
  ULONG_PTR v34; // r15
  unsigned __int64 v35; // rcx
  struct _KTHREAD *v36; // rdi
  _DWORD *v37; // r9
  unsigned __int8 v38; // r12
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  PVOID v44; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  __int64 v54; // rax
  int v55; // eax
  int v56; // ecx
  __int64 v57; // rdi
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  unsigned int v62; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v63; // [rsp+40h] [rbp-C8h]
  unsigned int v64; // [rsp+48h] [rbp-C0h] BYREF
  int v65; // [rsp+4Ch] [rbp-BCh]
  __int64 v66; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+58h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PEPROCESS Processa; // [rsp+78h] [rbp-90h]
  _OWORD v72[10]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v73; // [rsp+128h] [rbp+20h]
  __int128 v74; // [rsp+138h] [rbp+30h]
  __int64 v75; // [rsp+148h] [rbp+40h]

  v64 = 0;
  v2 = &Process[1].ActiveProcessorsPadding[6];
  Processa = Process;
  v75 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v63 = 0LL;
  v5 = 0;
  P = 0LL;
  memset(v72, 0, 0x98uLL);
  v67 = *(_QWORD *)(qword_140C4E648 + 8LL * *((unsigned __int16 *)v2 + 87));
  v6 = v67;
  LODWORD(v73) = a2 != 0;
  *((_QWORD *)&v72[1] + 1) = v67;
  SessionId = -1;
  v62 = -1;
  if ( SmStoreExistsForProcess() )
  {
    LODWORD(v73) = v73 | 4;
    v5 = 2;
    LODWORD(v72[2]) = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v67, &v64);
  if ( BestOutswapPagefile == 16 )
  {
    v29 = -1073741497;
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
          v29 = -1073740682;
        }
        else
        {
          v29 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v29 = -1073741558;
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
              v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v20 = (v49 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v49;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        v6 = v67;
      }
      else
      {
        *((_QWORD *)MiGetSharedVm(v13) + 3) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v50 = KeGetCurrentIrql();
            if ( v50 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v20 = (v53 & v52[5]) == 0;
              v14 = (unsigned int)v53 & v52[5];
              v52[5] = v14;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
        }
        __writecr8(v11);
        v15 = v64;
        while ( 1 )
        {
          v16 = v2[16];
          v63 = v16;
          if ( !v16 )
          {
            v29 = -1073741779;
            goto LABEL_36;
          }
          if ( LODWORD(v72[2]) == -1 )
            break;
          v29 = MiReserveWorkingSetSwapSpace(v67, (char *)&v72[2] + 8, v14, BestOutswapPagefile, v15, v16);
          if ( v29 >= 0 )
          {
            v16 = v63;
            break;
          }
          if ( v15 < 0x10 )
          {
            BestOutswapPagefile = v15;
            v29 = MiExtendWorkingSetSwapPagefile(v67, v63, v15);
            if ( v29 >= 0 )
              continue;
          }
          goto LABEL_36;
        }
        v17 = MiAllocateWorkingSetSwapSupport(v16);
        *Pool = (PVOID)v17;
        if ( !v17 )
          goto LABEL_99;
        if ( LODWORD(v72[2]) != -1 )
          *(_DWORD *)(v17 + 32) |= 1u;
        v18 = 0LL;
        if ( !a2 )
          goto LABEL_14;
        v18 = v2[17];
        if ( v18 - v2[18] <= v18 )
          v18 = v2[17] - v2[18];
        if ( v18 && (v54 = MiAllocateWorkingSetSwapSupport(v18), (Pool[1] = (PVOID)v54) == 0LL) )
        {
LABEL_99:
          v29 = -1073741670;
        }
        else
        {
LABEL_14:
          v19 = Processa;
          v72[0] = *(_OWORD *)Pool;
          v20 = Processa[2].Affinity.Bitmap[5] == 0;
          *(_QWORD *)&v72[1] = v2;
          if ( !v20 )
          {
            v55 = VmCheckLargePageInswap(Processa);
            v56 = v72[9];
            if ( v55 )
              v56 = 1;
            LODWORD(v72[9]) = v56;
          }
          v21 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v19[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v21[1].Queue) |= 2u;
          if ( (v19[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, (__int64)v19);
            v29 = -1073741558;
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
                  (__int64)v72);
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
            if ( *((_QWORD *)*Pool + 2) < v63 )
            {
              v27 = MiReAllocateWorkingSetSwapSupport(*Pool);
              if ( v27 )
              {
                ExFreePoolWithTag(*Pool, 0);
                *Pool = (PVOID)v27;
              }
            }
            v28 = Pool[1];
            if ( v28 )
            {
              if ( v28[2] < v18 )
              {
                v57 = MiReAllocateWorkingSetSwapSupport(v28);
                if ( v57 )
                {
                  ExFreePoolWithTag(Pool[1], 0);
                  Pool[1] = (PVOID)v57;
                }
              }
            }
            v63 = *((_QWORD *)*Pool + 3);
            MiGetKernelStackSwapSupport((__int64)Pool, (__int64)v19);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*Pool);
            v5 |= 4u;
            v29 = 0;
          }
        }
LABEL_36:
        v30 = SpinLock;
        v31 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport((__int64)v2) == 1 )
        {
          SharedVm = MiGetSharedVm(v32);
          if ( v5 < 4 )
          {
            *((_QWORD *)SharedVm + 3) = 0LL;
          }
          else
          {
            *((_QWORD *)SharedVm + 3) = Pool;
            Pool = 0LL;
            v29 = 0;
          }
        }
        else
        {
          v29 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v30);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v58 = KeGetCurrentIrql();
            if ( v58 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v58 >= 2u )
            {
              v59 = KeGetCurrentPrcb();
              v60 = v59->SchedulerAssist;
              v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
              v20 = (v61 & v60[5]) == 0;
              v60[5] &= v61;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v59);
            }
          }
        }
        __writecr8(v31);
        v6 = v67;
        MiFreeReservationRuns(v67, (char *)&v72[2] + 8);
      }
      if ( Pool )
        MiFreeWorkingSetSwapContext(v6, Pool);
    }
    else
    {
      v29 = -1073741670;
    }
    SessionId = -1;
  }
  if ( (v5 & 1) != 0 )
  {
    v34 = v6 + 1128;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 1128);
    LODWORD(v66) = 0;
    v35 = v6 + 1128;
    v36 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v35) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v36->ApcState.Process);
      v62 = SessionId;
    }
    --v36->SpecialApcDisable;
    v38 = ++v36->AbAllocationRegionCount;
    v39 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v40, v39);
    v65 = v40;
    if ( v20 )
    {
LABEL_72:
      if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v36, v34, SessionId, 0LL);
    }
    else
    {
      v37 = (_DWORD *)v62;
      while ( 1 )
      {
        v41 = (__int64)&v36->LockEntries[v40];
        v39 &= ~(1 << v40);
        if ( (*(_BYTE *)(v41 + 26) & 1) != 0
          && (*(_DWORD *)(v41 + 32) & 1) == 0
          && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v34 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v41 + 40) == v62 )
        {
          *(_BYTE *)(v41 + 26) &= ~1u;
          if ( *(_QWORD *)(v41 + 32) )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v40, v39);
        v65 = v40;
        if ( v20 )
          goto LABEL_71;
      }
      if ( !v41 )
      {
LABEL_71:
        SessionId = v62;
        goto LABEL_72;
      }
      *(_BYTE *)(v41 + 32) |= 2u;
      if ( *(__int64 *)(v41 + 32) < 0 )
        KiAbEntryRemoveFromTree(v41);
      LODWORD(v66) = *(_DWORD *)(v41 + 88) & 0x1FFFF;
      *(_DWORD *)(v41 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v41 + 25) &= ~1u;
      *(_QWORD *)(v41 + 32) = 0LL;
      v42 = (signed __int64)(v41 - (unsigned __int64)v36->LockEntries) / 96;
      if ( v38 == 1 )
        v36->AbEntrySummary |= 1 << v42;
      else
        _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v42);
    }
    --v36->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v36, v34, (__int64)&v66, v37);
    v20 = v36->SpecialApcDisable++ == -1;
    if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
      KiCheckForKernelApcDelivery(v43);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v44 = P;
  if ( P )
  {
    if ( v5 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v44, 0);
  }
  *(_QWORD *)&v73 = v63;
  *((_QWORD *)&v73 + 1) = *((_QWORD *)&v72[7] + 1);
  v74 = v72[8];
  LODWORD(v75) = v29;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v29;
}
