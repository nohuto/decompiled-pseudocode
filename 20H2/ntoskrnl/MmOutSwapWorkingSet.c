/*
 * XREFs of MmOutSwapWorkingSet @ 0x1403394F4
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14021E7C0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiGetWorkingSetSwapSupport @ 0x140250E80 (MiGetWorkingSetSwapSupport.c)
 *     SmStoreExistsForProcess @ 0x140253B60 (SmStoreExistsForProcess.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiVadSupportsPrivateCommit @ 0x14027CA20 (MiVadSupportsPrivateCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiVadMapsLargeImage @ 0x14027F1D0 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiOutSwapWorkingSet @ 0x140339B4C (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140339C44 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x140339C9C (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x140339F3C (MiGetKernelStackSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x14033A054 (MiFindBestOutswapPagefile.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406E3938 (MiReserveWorkingSetSwapSpace.c)
 *     SmStoreSetProcessVaRanges @ 0x1406F0730 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x1406F07D8 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406F0B5C (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406F0BC8 (MiFreeReservationRuns.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408DC30C (MiExtendWorkingSetSwapPagefile.c)
 *     VmCheckLargePageInswap @ 0x140931034 (VmCheckLargePageInswap.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v12; // rdx
  __int64 WorkingSetSwapSupport; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // edi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  PEPROCESS v20; // r15
  bool v21; // zf
  struct _KTHREAD *v22; // r12
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // esi
  volatile LONG *v37; // r15
  unsigned __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  LONG *SharedVm; // rax
  ULONG_PTR v42; // r15
  unsigned __int64 v43; // rcx
  struct _KTHREAD *v44; // rdi
  unsigned __int8 v45; // r12
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  PVOID v51; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  __int64 v61; // rax
  int v62; // eax
  int v63; // ecx
  __int64 v64; // rdi
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  __int64 v69; // [rsp+28h] [rbp-E0h]
  int v70; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v71; // [rsp+40h] [rbp-C8h]
  unsigned int v72; // [rsp+48h] [rbp-C0h] BYREF
  int v73; // [rsp+4Ch] [rbp-BCh]
  __int64 v74; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v75; // [rsp+58h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PEPROCESS Processa; // [rsp+78h] [rbp-90h]
  _OWORD v80[10]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v81; // [rsp+128h] [rbp+20h]
  __int128 v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+148h] [rbp+40h]

  v72 = 0;
  v2 = &Process[1].ActiveProcessorsPadding[6];
  Processa = Process;
  v83 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v71 = 0LL;
  v5 = 0;
  P = 0LL;
  memset(v80, 0, 0x98uLL);
  v75 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *((unsigned __int16 *)v2 + 87));
  v6 = v75;
  LODWORD(v81) = a2 != 0;
  *((_QWORD *)&v80[1] + 1) = v75;
  SessionId = -1;
  v70 = -1;
  if ( SmStoreExistsForProcess() )
  {
    LODWORD(v81) = v81 | 4;
    v5 = 2;
    LODWORD(v80[2]) = -1;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v75, &v72);
  if ( BestOutswapPagefile == 16 )
  {
    v36 = -1073741497;
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
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v2, v12);
      if ( WorkingSetSwapSupport )
      {
        if ( WorkingSetSwapSupport == 1 )
        {
          v36 = -1073740682;
        }
        else
        {
          v36 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v36 = -1073741558;
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
              v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v21 = (v56 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v56;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        v6 = v75;
      }
      else
      {
        *((_QWORD *)MiGetSharedVm(v14) + 3) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v57 = KeGetCurrentIrql();
            if ( v57 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v57 >= 2u )
            {
              v58 = KeGetCurrentPrcb();
              v59 = v58->SchedulerAssist;
              v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v21 = (v60 & v59[5]) == 0;
              v15 = (unsigned int)v60 & v59[5];
              v59[5] = v15;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v58);
            }
          }
        }
        __writecr8(v11);
        v16 = v72;
        while ( 1 )
        {
          v17 = v2[16];
          v71 = v17;
          if ( !v17 )
          {
            v36 = -1073741779;
            goto LABEL_36;
          }
          if ( LODWORD(v80[2]) == -1 )
            break;
          LODWORD(v69) = v16;
          v36 = MiReserveWorkingSetSwapSpace(v75, (char *)&v80[2] + 8, v15, BestOutswapPagefile);
          if ( v36 >= 0 )
          {
            v17 = v71;
            break;
          }
          if ( v16 < 0x10 )
          {
            BestOutswapPagefile = v16;
            v36 = MiExtendWorkingSetSwapPagefile(v75, v71, v16);
            if ( v36 >= 0 )
              continue;
          }
          goto LABEL_36;
        }
        v18 = MiAllocateWorkingSetSwapSupport(v17);
        *Pool = (PVOID)v18;
        if ( !v18 )
          goto LABEL_98;
        if ( LODWORD(v80[2]) != -1 )
          *(_DWORD *)(v18 + 32) |= 1u;
        v19 = 0LL;
        if ( !a2 )
          goto LABEL_14;
        v19 = v2[17];
        if ( v19 - v2[18] <= v19 )
          v19 = v2[17] - v2[18];
        if ( v19 && (v61 = MiAllocateWorkingSetSwapSupport(v19), (Pool[1] = (PVOID)v61) == 0LL) )
        {
LABEL_98:
          v36 = -1073741670;
        }
        else
        {
LABEL_14:
          v20 = Processa;
          v80[0] = *(_OWORD *)Pool;
          v21 = Processa[2].Affinity.Bitmap[5] == 0;
          *(_QWORD *)&v80[1] = v2;
          if ( !v21 )
          {
            v62 = VmCheckLargePageInswap(Processa);
            v63 = v80[9];
            if ( v62 )
              v63 = 1;
            LODWORD(v80[9]) = v63;
          }
          v22 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v20[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v22[1].Queue) |= 2u;
          if ( (v20[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v22, (__int64)v20);
            v36 = -1073741558;
          }
          else
          {
            v23 = *(_QWORD **)&v20[1].Spare2[15];
            v24 = 0LL;
            while ( v23 )
            {
              v24 = (unsigned __int64)v23;
              v23 = (_QWORD *)*v23;
            }
            while ( v24 )
            {
              if ( !MiVadMapsLargeImage(v24) && MiVadSupportsPrivateCommit(v26) )
                MiOutSwapWorkingSet(
                  (_DWORD)v2,
                  v24,
                  *(_DWORD *)(v24 + 24) << 12,
                  (*(_DWORD *)(v24 + 28) << 12) | 0xFFF,
                  (__int64)v80);
              v25 = *(_QWORD **)(v24 + 8);
              v27 = v24;
              if ( v25 )
              {
                do
                {
                  v24 = (unsigned __int64)v25;
                  v25 = (_QWORD *)*v25;
                }
                while ( v25 );
              }
              else
              {
                while ( 1 )
                {
                  v24 = *(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !v24 || *(_QWORD *)v24 == v27 )
                    break;
                  v27 = v24;
                }
              }
            }
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v22, (__int64)v20);
            if ( *((_QWORD *)*Pool + 2) < v71 )
            {
              v31 = MiReAllocateWorkingSetSwapSupport(*Pool, v28, v29, v30, v69);
              if ( v31 )
              {
                ExFreePoolWithTag(*Pool, 0);
                *Pool = (PVOID)v31;
              }
            }
            v32 = Pool[1];
            if ( v32 )
            {
              if ( v32[2] < v19 )
              {
                v64 = MiReAllocateWorkingSetSwapSupport(v32, v28, v29, v30, v69);
                if ( v64 )
                {
                  ExFreePoolWithTag(Pool[1], 0);
                  Pool[1] = (PVOID)v64;
                }
              }
            }
            v71 = *((_QWORD *)*Pool + 3);
            MiGetKernelStackSwapSupport(Pool, v20);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*Pool, v33, v34, v35, v69);
            v5 |= 4u;
            v36 = 0;
          }
        }
LABEL_36:
        v37 = SpinLock;
        v38 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport((__int64)v2, v39) == 1 )
        {
          SharedVm = MiGetSharedVm(v40);
          if ( v5 < 4 )
          {
            *((_QWORD *)SharedVm + 3) = 0LL;
          }
          else
          {
            *((_QWORD *)SharedVm + 3) = Pool;
            Pool = 0LL;
            v36 = 0;
          }
        }
        else
        {
          v36 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v37);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v65 = KeGetCurrentIrql();
            if ( v65 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v65 >= 2u )
            {
              v66 = KeGetCurrentPrcb();
              v67 = v66->SchedulerAssist;
              v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
              v21 = (v68 & v67[5]) == 0;
              v67[5] &= v68;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(v66);
            }
          }
        }
        __writecr8(v38);
        v6 = v75;
        MiFreeReservationRuns(v75, (char *)&v80[2] + 8);
      }
      if ( Pool )
        MiFreeWorkingSetSwapContext(v6, Pool);
    }
    else
    {
      v36 = -1073741670;
    }
    SessionId = -1;
  }
  if ( (v5 & 1) != 0 )
  {
    v42 = v6 + 1128;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1128));
    LODWORD(v74) = 0;
    v43 = v6 + 1128;
    v44 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v43) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v44->ApcState.Process);
      v70 = SessionId;
    }
    --v44->SpecialApcDisable;
    v45 = ++v44->AbAllocationRegionCount;
    v46 = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
    v21 = !_BitScanReverse((unsigned int *)&v47, v46);
    v73 = v47;
    if ( v21 )
    {
LABEL_71:
      if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v44, v42, SessionId, 0LL);
    }
    else
    {
      while ( 1 )
      {
        v48 = (__int64)&v44->LockEntries[v47];
        v46 &= ~(1 << v47);
        if ( (*(_BYTE *)(v48 + 26) & 1) != 0
          && (*(_DWORD *)(v48 + 32) & 1) == 0
          && (*(_QWORD *)(v48 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v42 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v48 + 40) == v70 )
        {
          *(_BYTE *)(v48 + 26) &= ~1u;
          if ( *(_QWORD *)(v48 + 32) )
            break;
        }
        v21 = !_BitScanReverse((unsigned int *)&v47, v46);
        v73 = v47;
        if ( v21 )
          goto LABEL_70;
      }
      if ( !v48 )
      {
LABEL_70:
        SessionId = v70;
        goto LABEL_71;
      }
      *(_BYTE *)(v48 + 32) |= 2u;
      if ( *(__int64 *)(v48 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v48);
      LODWORD(v74) = *(_DWORD *)(v48 + 88) & 0x1FFFF;
      *(_DWORD *)(v48 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v48 + 25) &= ~1u;
      *(_QWORD *)(v48 + 32) = 0LL;
      v49 = (signed __int64)(v48 - (unsigned __int64)v44->LockEntries) / 96;
      if ( v45 == 1 )
        v44->AbEntrySummary |= 1 << v49;
      else
        _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, 1 << v49);
    }
    --v44->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v44, v42, &v74);
    v21 = v44->SpecialApcDisable++ == -1;
    if ( v21 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
      KiCheckForKernelApcDelivery(v50);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  v51 = P;
  if ( P )
  {
    if ( v5 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v51, 0);
  }
  *(_QWORD *)&v81 = v71;
  *((_QWORD *)&v81 + 1) = *((_QWORD *)&v80[7] + 1);
  v82 = v80[8];
  LODWORD(v83) = v36;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v36;
}
