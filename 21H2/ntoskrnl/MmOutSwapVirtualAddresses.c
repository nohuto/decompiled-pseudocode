/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x14035BCDC
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14035B868 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140348790 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     MiFindBestOutswapPagefile @ 0x14035C30C (MiFindBestOutswapPagefile.c)
 *     MiOutSwapWorkingSet @ 0x14035CE28 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14035CF20 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x14035CF78 (MiAllocateWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiValidateMemoryRangeEntries @ 0x14070F91C (MiValidateMemoryRangeEntries.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14070FCE8 (MiReserveWorkingSetSwapSpace.c)
 *     MiFreeReservationRuns @ 0x1407106D0 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x14071071C (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D9ACC (MiExtendWorkingSetSwapPagefile.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 v9; // r13
  unsigned int BestOutswapPagefile; // esi
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  unsigned __int64 *v13; // r12
  unsigned int i; // ebx
  int v15; // esi
  __int64 WorkingSetSwapSupport; // rax
  _QWORD *v17; // rbx
  PEPROCESS v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 *v20; // r15
  int v21; // r14d
  __int64 **Address; // rax
  int v23; // ecx
  unsigned __int64 v24; // r9
  struct _KPROCESS *v25; // r15
  __int64 v26; // rdi
  struct _KTHREAD *v27; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v29; // r12
  _DWORD *v30; // r9
  unsigned int v31; // r8d
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 *v38; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v39[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Processa; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v42; // [rsp+58h] [rbp-A8h]
  _QWORD *v43; // [rsp+60h] [rbp-A0h]
  _OWORD v44[10]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v45; // [rsp+110h] [rbp+10h]
  __int128 v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+30h]

  v38 = 0LL;
  v39[0] = 0;
  v47 = 0LL;
  v45 = 0LL;
  Processa = Process;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = Process[1].IdealProcessorPadding[5];
  v43 = a4;
  v42 = CurrentThread;
  v9 = *(_QWORD *)(qword_140C4E648 + 8 * v7);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, v39);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v45) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v38);
  memset(v44, 0, 0x98uLL);
  --CurrentThread->SpecialApcDisable;
  v11 = v9 + 1128;
  ExAcquirePushLockExclusiveEx(v9 + 1128, 0LL);
  v13 = v38;
  for ( i = v39[0]; ; BestOutswapPagefile = i )
  {
    v15 = MiReserveWorkingSetSwapSpace(v9, (char *)&v44[2] + 8, v12, BestOutswapPagefile, i, v13);
    if ( v15 >= 0 )
      break;
    if ( i >= 0x10 )
      goto LABEL_49;
    v15 = MiExtendWorkingSetSwapPagefile(v9, v13, i);
    if ( v15 < 0 )
      goto LABEL_49;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v13);
  v17 = (_QWORD *)WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
  {
    v15 = -1073741670;
LABEL_49:
    v25 = Processa;
    goto LABEL_21;
  }
  v18 = Processa;
  v19 = (__int64)v42;
  *(_QWORD *)&v44[0] = WorkingSetSwapSupport;
  *((_QWORD *)&v44[1] + 1) = v9;
  *(_QWORD *)&v44[1] = (char *)Processa + 1664;
  v38 = &Processa[1].ActiveProcessorsPadding[6];
  --v42->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v18[1].Affinity.Bitmap[7], 0LL);
  *(_BYTE *)(v19 + 1304) |= 2u;
  v20 = &a2[2 * a3];
  if ( a2 < v20 )
  {
    v21 = (int)v38;
    do
    {
      Address = MiLocateAddress(*a2);
      if ( Address )
      {
        v23 = *((_DWORD *)Address + 12);
        if ( (v23 & 0x70) == 0
          && ((v23 & 0x100000) == 0 || (v23 & 0x400000) == 0 && (v23 & 0xC0000u) < 0x80000)
          && (v23 & 0x100000) != 0 )
        {
          v24 = *a2 + a2[1] - 1;
          if ( (*((unsigned int *)Address + 7) | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32)) >= v24 >> 12 )
            MiOutSwapWorkingSet(v21, (_DWORD)Address, *a2, v24, (__int64)v44);
        }
      }
      a2 += 2;
    }
    while ( a2 < v20 );
    v11 = v9 + 1128;
  }
  v25 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v19, (__int64)Processa);
  if ( v17[2] < (unsigned __int64)v13 )
  {
    v26 = MiReAllocateWorkingSetSwapSupport(v17);
    if ( v26 )
    {
      ExFreePoolWithTag(v17, 0);
      v17 = (_QWORD *)v26;
    }
  }
  v15 = 0;
  v38 = (unsigned __int64 *)v17[3];
  *v43 = v17;
LABEL_21:
  MiFreeReservationRuns(v9, (char *)&v44[2] + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  v40 = 0;
  v27 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v27->ApcState.Process);
  else
    SessionId = -1;
  --v27->SpecialApcDisable;
  v29 = ++v27->AbAllocationRegionCount;
  v30 = (_DWORD *)(v11 & 0x7FFFFFFFFFFFFFFCLL);
  v31 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v32 = !_BitScanReverse((unsigned int *)&v33, v31);
    v39[1] = v33;
    if ( v32 )
      break;
    v34 = (__int64)&v27->LockEntries[v33];
    v31 &= ~(1 << v33);
    if ( (*(_BYTE *)(v34 + 26) & 1) != 0
      && (*(_DWORD *)(v34 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v34 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v30
      && *(_DWORD *)(v34 + 40) == SessionId )
    {
      *(_BYTE *)(v34 + 26) &= ~1u;
      if ( *(_QWORD *)(v34 + 32) )
      {
        if ( v34 )
        {
          *(_BYTE *)(v34 + 32) |= 2u;
          if ( *(__int64 *)(v34 + 32) < 0 )
            KiAbEntryRemoveFromTree(v34);
          v40 = *(_DWORD *)(v34 + 88) & 0x1FFFF;
          *(_DWORD *)(v34 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v34 + 25) &= ~1u;
          *(_QWORD *)(v34 + 32) = 0LL;
          v35 = (signed __int64)(v34 - (unsigned __int64)v27->LockEntries) / 96;
          if ( v29 == 1 )
            v27->AbEntrySummary |= 1 << v35;
          else
            _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v35);
          goto LABEL_37;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v27, v11, SessionId, 0LL);
LABEL_37:
  --v27->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v27, v11, (__int64)&v40, v30);
  v32 = v27->SpecialApcDisable++ == -1;
  if ( v32 && ($C459BD0D405E8E46662177FB3D0A143F *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
    KiCheckForKernelApcDelivery(v36);
  KiLeaveGuardedRegionUnsafe((__int64)v42);
  *(_QWORD *)&v45 = v38;
  *((_QWORD *)&v45 + 1) = *((_QWORD *)&v44[7] + 1);
  v46 = v44[8];
  LODWORD(v47) = v15;
  EtwTraceWorkingSetSwap(v25);
  return (unsigned int)v15;
}
