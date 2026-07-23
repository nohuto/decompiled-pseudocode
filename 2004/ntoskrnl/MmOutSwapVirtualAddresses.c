/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x1403100C0
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140310C2C (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14020B330 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiOutSwapWorkingSet @ 0x14030E3BC (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14030E4B4 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14030E50C (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x14030E8C4 (MiFindBestOutswapPagefile.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiValidateMemoryRangeEntries @ 0x140606FAC (MiValidateMemoryRangeEntries.c)
 *     EtwTraceWorkingSetSwap @ 0x1406D01E0 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x1406D056C (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406D28EC (MiReserveWorkingSetSwapSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D64CC (MiExtendWorkingSetSwapPagefile.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 v9; // r13
  unsigned int BestOutswapPagefile; // esi
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  unsigned __int64 v13; // r12
  unsigned int i; // ebx
  int v15; // esi
  _QWORD *WorkingSetSwapSupport; // rax
  _QWORD *v17; // rbx
  PEPROCESS v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 *v20; // r15
  __int64 v21; // r14
  __int64 **Address; // rax
  int v23; // ecx
  struct _KPROCESS *v24; // r15
  __int64 v25; // rdi
  struct _KTHREAD *v26; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v28; // r12
  unsigned int v29; // r8d
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 *v36; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v37[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Processa; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v40; // [rsp+58h] [rbp-A8h]
  _QWORD *v41; // [rsp+60h] [rbp-A0h]
  _OWORD v42[10]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v43; // [rsp+110h] [rbp+10h]
  __int128 v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+30h]

  v36 = 0LL;
  v37[0] = 0;
  v45 = 0LL;
  v43 = 0LL;
  Processa = Process;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = Process[1].IdealProcessorPadding[5];
  v41 = a4;
  v40 = CurrentThread;
  v9 = *(_QWORD *)(qword_140C4E448 + 8 * v7);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, v37);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v43) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v36);
  memset(v42, 0, 0x98uLL);
  --CurrentThread->SpecialApcDisable;
  v11 = v9 + 1128;
  ExAcquirePushLockExclusiveEx(v9 + 1128, 0LL);
  v13 = (unsigned __int64)v36;
  for ( i = v37[0]; ; BestOutswapPagefile = i )
  {
    v15 = MiReserveWorkingSetSwapSpace(v9, (char *)&v42[2] + 8, v12, BestOutswapPagefile);
    if ( v15 >= 0 )
      break;
    if ( i >= 0x10 )
      goto LABEL_49;
    v15 = MiExtendWorkingSetSwapPagefile(v9, v13, i);
    if ( v15 < 0 )
      goto LABEL_49;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v13);
  v17 = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
  {
    v15 = -1073741670;
LABEL_49:
    v24 = Processa;
    goto LABEL_21;
  }
  v18 = Processa;
  v19 = (__int64)v40;
  *(_QWORD *)&v42[0] = WorkingSetSwapSupport;
  *((_QWORD *)&v42[1] + 1) = v9;
  *(_QWORD *)&v42[1] = (char *)Processa + 1664;
  v36 = &Processa[1].ActiveProcessorsPadding[6];
  --v40->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v18[1].Affinity.Bitmap[7], 0LL);
  *(_BYTE *)(v19 + 1304) |= 2u;
  v20 = &a2[2 * a3];
  if ( a2 < v20 )
  {
    v21 = (__int64)v36;
    do
    {
      Address = MiLocateAddress(*a2);
      if ( Address )
      {
        v23 = *((_DWORD *)Address + 12);
        if ( (v23 & 0x70) == 0
          && ((v23 & 0x100000) == 0 || (v23 & 0x400000) == 0 && (v23 & 0xC0000u) < 0x80000)
          && (v23 & 0x100000) != 0
          && (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) >= (*a2 + a2[1] - 1) >> 12 )
        {
          MiOutSwapWorkingSet(v21, (__int64)Address, *a2, *a2 + a2[1] - 1, (__int64)v42);
        }
      }
      a2 += 2;
    }
    while ( a2 < v20 );
    v11 = v9 + 1128;
  }
  v24 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v19, (__int64)Processa);
  if ( v17[2] < v13 )
  {
    v25 = MiReAllocateWorkingSetSwapSupport((__int64)v17);
    if ( v25 )
    {
      ExFreePoolWithTag(v17, 0);
      v17 = (_QWORD *)v25;
    }
  }
  v15 = 0;
  v36 = (unsigned __int64 *)v17[3];
  *v41 = v17;
LABEL_21:
  MiFreeReservationRuns(v9, (char *)&v42[2] + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11);
  v38 = 0;
  v26 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v26->ApcState.Process);
  else
    SessionId = -1;
  --v26->SpecialApcDisable;
  v28 = ++v26->AbAllocationRegionCount;
  v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v30 = !_BitScanReverse((unsigned int *)&v31, v29);
    v37[1] = v31;
    if ( v30 )
      break;
    v32 = (__int64)&v26->LockEntries[v31];
    v29 &= ~(1 << v31);
    if ( (*(_BYTE *)(v32 + 26) & 1) != 0
      && (*(_DWORD *)(v32 + 32) & 1) == 0
      && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v32 + 40) == SessionId )
    {
      *(_BYTE *)(v32 + 26) &= ~1u;
      if ( *(_QWORD *)(v32 + 32) )
      {
        if ( v32 )
        {
          *(_BYTE *)(v32 + 32) |= 2u;
          if ( *(__int64 *)(v32 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
          v38 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
          *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v32 + 25) &= ~1u;
          *(_QWORD *)(v32 + 32) = 0LL;
          v33 = (signed __int64)(v32 - (unsigned __int64)v26->LockEntries) / 96;
          if ( v28 == 1 )
            v26->AbEntrySummary |= 1 << v33;
          else
            _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v33);
          goto LABEL_37;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v26, v11, SessionId, 0LL);
LABEL_37:
  --v26->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v26, v11, &v38);
  v30 = v26->SpecialApcDisable++ == -1;
  if ( v30 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
    KiCheckForKernelApcDelivery(v34);
  KiLeaveGuardedRegionUnsafe((__int64)v40);
  *(_QWORD *)&v43 = v36;
  *((_QWORD *)&v43 + 1) = *((_QWORD *)&v42[7] + 1);
  v44 = v42[8];
  LODWORD(v45) = v15;
  EtwTraceWorkingSetSwap(v24);
  return (unsigned int)v15;
}
