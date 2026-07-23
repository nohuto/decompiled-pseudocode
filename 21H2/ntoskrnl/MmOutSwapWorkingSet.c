/*
 * XREFs of MmOutSwapWorkingSet @ 0x1402A1700
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402872B0 (MiGetWorkingSetSwapSupport.c)
 *     SmStoreExistsForProcess @ 0x140287660 (SmStoreExistsForProcess.c)
 *     MiFindBestOutswapPagefile @ 0x1402A123C (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x1402A131C (MiGetKernelStackSwapSupport.c)
 *     MiOutSwapWorkingSet @ 0x1402A1D58 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1402A1E50 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1402A1EA8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiVadSupportsPrivateCommit @ 0x1402BFB40 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1402C1520 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403534E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406BE338 (MiReserveWorkingSetSwapSpace.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406BEC70 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406BED20 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1406BED6C (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1406BF0EC (SmStoreSetProcessVaRanges.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D9C2C (MiExtendWorkingSetSwapPagefile.c)
 *     VmCheckLargePageInswap @ 0x14092E964 (VmCheckLargePageInswap.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  PEPROCESS v21; // r15
  bool v22; // zf
  struct _KTHREAD *v23; // r12
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  _QWORD *v30; // rcx
  int v31; // esi
  volatile LONG *v32; // r15
  unsigned __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 SharedVm; // rax
  ULONG_PTR v38; // r15
  __int64 v39; // rcx
  struct _KTHREAD *v40; // rdi
  unsigned __int8 v41; // r12
  unsigned int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  PVOID v50; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  int v62; // ecx
  __int64 v63; // rdi
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  int v68; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v69; // [rsp+40h] [rbp-C8h]
  unsigned int v70; // [rsp+48h] [rbp-C0h] BYREF
  int v71; // [rsp+4Ch] [rbp-BCh]
  __int64 v72; // [rsp+50h] [rbp-B8h]
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
  v73 = *(_QWORD *)(qword_140C4E688 + 8LL * *((unsigned __int16 *)v2 + 87));
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
    v31 = -1073741497;
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
          v31 = -1073740682;
        }
        else
        {
          v31 = -1073741791;
          if ( WorkingSetSwapSupport == 2 )
            v31 = -1073741558;
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
              v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v22 = (v55 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v55;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        v6 = v73;
      }
      else
      {
        *(_QWORD *)(MiGetSharedVm(v15, v14) + 24) = 1LL;
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v56 = KeGetCurrentIrql();
            if ( v56 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v56 >= 2u )
            {
              v57 = KeGetCurrentPrcb();
              v58 = v57->SchedulerAssist;
              v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v22 = (v59 & v58[5]) == 0;
              v16 = (unsigned int)v59 & v58[5];
              v58[5] = v16;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(v57);
            }
          }
        }
        __writecr8(v11);
        v17 = v70;
        while ( 1 )
        {
          v18 = v2[16];
          v69 = v18;
          if ( !v18 )
          {
            v31 = -1073741779;
            goto LABEL_36;
          }
          if ( LODWORD(v78[2]) == -1 )
            break;
          v31 = MiReserveWorkingSetSwapSpace(v73, (char *)&v78[2] + 8, v16, BestOutswapPagefile, v17, v18);
          if ( v31 >= 0 )
          {
            v18 = v69;
            break;
          }
          if ( v17 < 0x10 )
          {
            BestOutswapPagefile = v17;
            v31 = MiExtendWorkingSetSwapPagefile(v73, v69, v17);
            if ( v31 >= 0 )
              continue;
          }
          goto LABEL_36;
        }
        v19 = MiAllocateWorkingSetSwapSupport(v18);
        *Pool = (PVOID)v19;
        if ( !v19 )
          goto LABEL_98;
        if ( LODWORD(v78[2]) != -1 )
          *(_DWORD *)(v19 + 32) |= 1u;
        v20 = 0LL;
        if ( !a2 )
          goto LABEL_14;
        v20 = v2[17];
        if ( v20 - v2[18] <= v20 )
          v20 = v2[17] - v2[18];
        if ( v20 && (v60 = MiAllocateWorkingSetSwapSupport(v20), (Pool[1] = (PVOID)v60) == 0LL) )
        {
LABEL_98:
          v31 = -1073741670;
        }
        else
        {
LABEL_14:
          v21 = Processa;
          v78[0] = *(_OWORD *)Pool;
          v22 = Processa[2].Affinity.Bitmap[5] == 0;
          *(_QWORD *)&v78[1] = v2;
          if ( !v22 )
          {
            v61 = VmCheckLargePageInswap(Processa);
            v62 = v78[9];
            if ( v61 )
              v62 = 1;
            LODWORD(v78[9]) = v62;
          }
          v23 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v21[1].Affinity.Bitmap[7], 0LL);
          LOBYTE(v23[1].Queue) |= 2u;
          if ( (v21[1].DirectoryTableBase & 0x2000000000LL) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v23, v21);
            v31 = -1073741558;
          }
          else
          {
            v24 = *(_QWORD **)&v21[1].Spare2[15];
            v25 = 0LL;
            while ( v24 )
            {
              v25 = (unsigned __int64)v24;
              v24 = (_QWORD *)*v24;
            }
            while ( v25 )
            {
              if ( !(unsigned int)MiVadMapsLargeImage(v25) && (unsigned int)MiVadSupportsPrivateCommit(v27) )
                MiOutSwapWorkingSet(
                  (_DWORD)v2,
                  v25,
                  *(_DWORD *)(v25 + 24) << 12,
                  (*(_DWORD *)(v25 + 28) << 12) | 0xFFF,
                  (__int64)v78);
              v26 = *(_QWORD **)(v25 + 8);
              v28 = v25;
              if ( v26 )
              {
                do
                {
                  v25 = (unsigned __int64)v26;
                  v26 = (_QWORD *)*v26;
                }
                while ( v26 );
              }
              else
              {
                while ( 1 )
                {
                  v25 = *(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !v25 || *(_QWORD *)v25 == v28 )
                    break;
                  v28 = v25;
                }
              }
            }
            UNLOCK_ADDRESS_SPACE_SHARED(v23, v21);
            if ( *((_QWORD *)*Pool + 2) < v69 )
            {
              v29 = MiReAllocateWorkingSetSwapSupport(*Pool);
              if ( v29 )
              {
                ExFreePoolWithTag(*Pool, 0);
                *Pool = (PVOID)v29;
              }
            }
            v30 = Pool[1];
            if ( v30 )
            {
              if ( v30[2] < v20 )
              {
                v63 = MiReAllocateWorkingSetSwapSupport(v30);
                if ( v63 )
                {
                  ExFreePoolWithTag(Pool[1], 0);
                  Pool[1] = (PVOID)v63;
                }
              }
            }
            v69 = *((_QWORD *)*Pool + 3);
            MiGetKernelStackSwapSupport((__int64)Pool, (__int64)v21);
            if ( v5 >= 2 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*Pool);
            v5 |= 4u;
            v31 = 0;
          }
        }
LABEL_36:
        v32 = SpinLock;
        v33 = ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport((__int64)v2, v34) == 1 )
        {
          SharedVm = MiGetSharedVm(v36, v35);
          if ( v5 < 4 )
          {
            *(_QWORD *)(SharedVm + 24) = 0LL;
          }
          else
          {
            *(_QWORD *)(SharedVm + 24) = Pool;
            Pool = 0LL;
            v31 = 0;
          }
        }
        else
        {
          v31 = -1073741558;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v32);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v64 = KeGetCurrentIrql();
            if ( v64 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v64 >= 2u )
            {
              v65 = KeGetCurrentPrcb();
              v66 = v65->SchedulerAssist;
              v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
              v22 = (v67 & v66[5]) == 0;
              v66[5] &= v67;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(v65);
            }
          }
        }
        __writecr8(v33);
        v6 = v73;
        MiFreeReservationRuns(v73, (char *)&v78[2] + 8);
      }
      if ( Pool )
        MiFreeWorkingSetSwapContext(v6, Pool);
    }
    else
    {
      v31 = -1073741670;
    }
    SessionId = -1;
  }
  if ( (v5 & 1) != 0 )
  {
    v38 = v6 + 1128;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 1128);
    LODWORD(v72) = 0;
    v39 = v6 + 1128;
    v40 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v39) == 1 )
    {
      SessionId = MmGetSessionIdEx(v40->ApcState.Process);
      v68 = SessionId;
    }
    --v40->SpecialApcDisable;
    v41 = ++v40->AbAllocationRegionCount;
    v42 = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
    v22 = !_BitScanReverse((unsigned int *)&v43, v42);
    v71 = v43;
    if ( v22 )
    {
LABEL_71:
      if ( (*((_DWORD *)&v40->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v40, v38, SessionId, 0LL);
    }
    else
    {
      while ( 1 )
      {
        v44 = (__int64)&v40->LockEntries[v43];
        v42 &= ~(1 << v43);
        if ( (*(_BYTE *)(v44 + 26) & 1) != 0
          && (*(_DWORD *)(v44 + 32) & 1) == 0
          && (*(_QWORD *)(v44 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v38 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v44 + 40) == v68 )
        {
          *(_BYTE *)(v44 + 26) &= ~1u;
          if ( *(_QWORD *)(v44 + 32) )
            break;
        }
        v22 = !_BitScanReverse((unsigned int *)&v43, v42);
        v71 = v43;
        if ( v22 )
          goto LABEL_70;
      }
      if ( !v44 )
      {
LABEL_70:
        SessionId = v68;
        goto LABEL_71;
      }
      *(_BYTE *)(v44 + 32) |= 2u;
      if ( *(__int64 *)(v44 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v44);
      LODWORD(v72) = *(_DWORD *)(v44 + 88) & 0x1FFFF;
      *(_DWORD *)(v44 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v44 + 25) &= ~1u;
      *(_QWORD *)(v44 + 32) = 0LL;
      v45 = (signed __int64)(v44 - (unsigned __int64)v40->LockEntries) / 96;
      if ( v41 == 1 )
        v40->AbEntrySummary |= 1 << v45;
      else
        _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, 1 << v45);
    }
    --v40->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v40);
    v22 = v40->SpecialApcDisable++ == -1;
    if ( v22 && ($C459BD0D405E8E46662177FB3D0A143F *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
      KiCheckForKernelApcDelivery(v47, v46, v48, v49);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  v50 = P;
  if ( P )
  {
    if ( v5 >= 4 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v50, 0);
  }
  *(_QWORD *)&v79 = v69;
  *((_QWORD *)&v79 + 1) = *((_QWORD *)&v78[7] + 1);
  v80 = v78[8];
  LODWORD(v81) = v31;
  EtwTraceWorkingSetSwap(Processa);
  return (unsigned int)v31;
}
