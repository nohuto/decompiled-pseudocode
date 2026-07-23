/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x1402A0C0C
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x1402A0608 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiFindBestOutswapPagefile @ 0x1402A123C (MiFindBestOutswapPagefile.c)
 *     MiOutSwapWorkingSet @ 0x1402A1D58 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1402A1E50 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1402A1EA8 (MiAllocateWorkingSetSwapSupport.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403534E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiValidateMemoryRangeEntries @ 0x1406BDF6C (MiValidateMemoryRangeEntries.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406BE338 (MiReserveWorkingSetSwapSpace.c)
 *     MiFreeReservationRuns @ 0x1406BED20 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1406BED6C (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1408D9C2C (MiExtendWorkingSetSwapPagefile.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 v9; // r13
  unsigned int BestOutswapPagefile; // esi
  ULONG_PTR v11; // r14
  __int64 v12; // r8
  unsigned __int64 *v13; // r12
  unsigned int i; // ebx
  int v15; // esi
  __int64 WorkingSetSwapSupport; // rax
  _QWORD *v17; // rbx
  PEPROCESS v18; // rcx
  struct _KTHREAD *v19; // rsi
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
  unsigned int v30; // r8d
  bool v31; // zf
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 *v40; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v41[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v42; // [rsp+40h] [rbp-C0h]
  PEPROCESS Processa; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v44; // [rsp+58h] [rbp-A8h]
  _QWORD *v45; // [rsp+60h] [rbp-A0h]
  _OWORD v46[10]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v47; // [rsp+110h] [rbp+10h]
  __int128 v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+30h]

  v40 = 0LL;
  v41[0] = 0;
  v49 = 0LL;
  v47 = 0LL;
  Processa = Process;
  v48 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = Process[1].IdealProcessorPadding[5];
  v45 = a4;
  v44 = CurrentThread;
  v9 = *(_QWORD *)(qword_140C4E688 + 8 * v7);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, v41);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v47) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v40);
  memset(v46, 0, 0x98uLL);
  --CurrentThread->SpecialApcDisable;
  v11 = v9 + 1128;
  ExAcquirePushLockExclusiveEx(v9 + 1128, 0LL);
  v13 = v40;
  for ( i = v41[0]; ; BestOutswapPagefile = i )
  {
    v15 = MiReserveWorkingSetSwapSpace(v9, (char *)&v46[2] + 8, v12, BestOutswapPagefile, i, v13);
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
  v19 = v44;
  *(_QWORD *)&v46[0] = WorkingSetSwapSupport;
  *((_QWORD *)&v46[1] + 1) = v9;
  *(_QWORD *)&v46[1] = (char *)Processa + 1664;
  v40 = &Processa[1].ActiveProcessorsPadding[6];
  --v44->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v18[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(v19[1].Queue) |= 2u;
  v20 = &a2[2 * a3];
  if ( a2 < v20 )
  {
    v21 = (int)v40;
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
            MiOutSwapWorkingSet(v21, (_DWORD)Address, *a2, v24, (__int64)v46);
        }
      }
      a2 += 2;
    }
    while ( a2 < v20 );
    v11 = v9 + 1128;
  }
  v25 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v19, Processa);
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
  v40 = (unsigned __int64 *)v17[3];
  *v45 = v17;
LABEL_21:
  MiFreeReservationRuns(v9, (char *)&v46[2] + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  v42 = 0;
  v27 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    SessionId = MmGetSessionIdEx(v27->ApcState.Process);
  else
    SessionId = -1;
  --v27->SpecialApcDisable;
  v29 = ++v27->AbAllocationRegionCount;
  v30 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v31 = !_BitScanReverse((unsigned int *)&v32, v30);
    v41[1] = v32;
    if ( v31 )
      break;
    v33 = (__int64)&v27->LockEntries[v32];
    v30 &= ~(1 << v32);
    if ( (*(_BYTE *)(v33 + 26) & 1) != 0
      && (*(_DWORD *)(v33 + 32) & 1) == 0
      && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v33 + 40) == SessionId )
    {
      *(_BYTE *)(v33 + 26) &= ~1u;
      if ( *(_QWORD *)(v33 + 32) )
      {
        if ( v33 )
        {
          *(_BYTE *)(v33 + 32) |= 2u;
          if ( *(__int64 *)(v33 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v33);
          v42 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
          *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v33 + 25) &= ~1u;
          *(_QWORD *)(v33 + 32) = 0LL;
          v34 = (signed __int64)(v33 - (unsigned __int64)v27->LockEntries) / 96;
          if ( v29 == 1 )
            v27->AbEntrySummary |= 1 << v34;
          else
            _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v34);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v27);
  v31 = v27->SpecialApcDisable++ == -1;
  if ( v31 && ($C459BD0D405E8E46662177FB3D0A143F *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
    KiCheckForKernelApcDelivery(v36, v35, v37, v38);
  KiLeaveGuardedRegionUnsafe(v44);
  *(_QWORD *)&v47 = v40;
  *((_QWORD *)&v47 + 1) = *((_QWORD *)&v46[7] + 1);
  v48 = v46[8];
  LODWORD(v49) = v15;
  EtwTraceWorkingSetSwap(v25);
  return (unsigned int)v15;
}
