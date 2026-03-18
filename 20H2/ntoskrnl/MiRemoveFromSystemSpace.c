/*
 * XREFs of MiRemoveFromSystemSpace @ 0x14024EF4C
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x140658CE0 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14070D7F4 (MiUnmapImageInSystemSpace.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiManageSubsectionView @ 0x1402986E0 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiUnmapLargePages @ 0x140394E74 (MiUnmapLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiDereferencePerSessionProtos @ 0x1406DC9FC (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(_QWORD *a1, ULONG_PTR a2, int a3)
{
  _QWORD *v4; // rbp
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r14
  _QWORD *v7; // rdx
  unsigned int SessionId; // r13d
  char *v9; // r15
  __int64 v10; // rdx
  __int64 SharedVm; // rbx
  KIRQL v12; // al
  KIRQL v13; // di
  char *i; // rbx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  struct _DMA_ADAPTER *v17; // r12
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  struct _KTHREAD *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *SchedulerAssist; // r9
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  void *v34; // rcx
  volatile LONG *v35; // rdi
  KIRQL v36; // al
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v41; // eax
  int v42; // [rsp+30h] [rbp-F8h] BYREF
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v44; // [rsp+40h] [rbp-E8h]
  struct _KTHREAD *v45; // [rsp+48h] [rbp-E0h]
  _QWORD v46[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+138h] [rbp+10h]

  v4 = a1;
  memset(v46, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v45 = CurrentThread;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v4 == (_QWORD *)&unk_140C4CBE8 )
  {
    v44 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  }
  else
  {
    AnyMultiplexedVm = (char *)MiGetSessionVm();
    v44 = CurrentThread->ApcState.Process[1].AffinityPadding[5];
  }
  SessionId = -1;
  if ( (a2 & 0x3FFFFFFF) == 0 && v4 == v7 )
  {
    v35 = (volatile LONG *)((char *)&unk_140C4CC30 + 16 * (unsigned __int8)(a2 >> 30));
    v36 = ExAcquireSpinLockExclusive(v35 + 3);
    i = *(char **)v35;
    v37 = v36;
    while ( i )
    {
      v38 = *((_QWORD *)i + 11) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v38 + *((_QWORD *)i + 4) )
      {
        i = (char *)*((_QWORD *)i + 1);
      }
      else
      {
        if ( a2 >= v38 )
        {
          RtlAvlRemoveNode(v35);
          --*((_DWORD *)v35 + 2);
          break;
        }
        i = *(char **)i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v35 + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v37 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
          v23 = (v41 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v41;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v37);
    if ( i )
    {
      v17 = (struct _DMA_ADAPTER *)*((_QWORD *)i + 8);
      v18 = **((_QWORD **)i + 6);
      goto LABEL_28;
    }
    v4 = a1;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v4[1], 0LL);
  v9 = AnyMultiplexedVm;
  SharedVm = MiGetSharedVm(AnyMultiplexedVm, v10);
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v13 = v12;
  for ( i = (char *)v4[2]; ; i = *(char **)i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v15 = *((_QWORD *)i + 11) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v15 + *((_QWORD *)i + 4) )
        break;
      i = (char *)*((_QWORD *)i + 1);
    }
    if ( a2 >= v15 )
      break;
  }
  --*((_DWORD *)v4 + 6);
  RtlAvlRemoveNode(v4 + 2);
  LOBYTE(v16) = v13;
  MiUnlockWorkingSetExclusive(v9, v16);
  v17 = (struct _DMA_ADAPTER *)*((_QWORD *)i + 8);
  v18 = **((_QWORD **)i + 6);
  v46[0] = v18;
  MiManageSubsectionView(v46, i + 72, 4LL);
  v19 = v4[1];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v19);
  v42 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v19) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  --v20->SpecialApcDisable;
  ++v20->AbAllocationRegionCount;
  v21 = v19 & 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v20->AbAllocationRegionCount;
  LODWORD(v22) = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v23 = !_BitScanReverse((unsigned int *)&v24, v22);
    if ( v23 )
      break;
    v25 = (__int64)&v20->LockEntries[v24];
    v22 = ~(1 << v24) & (unsigned int)v22;
    if ( (*(_BYTE *)(v25 + 26) & 1) != 0
      && (*(_DWORD *)(v25 + 32) & 1) == 0
      && (*(_QWORD *)(v25 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v21
      && *(_DWORD *)(v25 + 40) == SessionId )
    {
      *(_BYTE *)(v25 + 26) &= ~1u;
      if ( *(_QWORD *)(v25 + 32) )
      {
        if ( v25 )
        {
          *(_BYTE *)(v25 + 32) |= 2u;
          if ( *(__int64 *)(v25 + 32) < 0 )
            KiAbEntryRemoveFromTree(v25, v22, v21);
          v42 = *(_DWORD *)(v25 + 88) & 0x1FFFF;
          *(_DWORD *)(v25 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v25 + 25) &= ~1u;
          *(_QWORD *)(v25 + 32) = 0LL;
          v26 = (signed __int64)(v25 - (unsigned __int64)v20->LockEntries) / 96;
          if ( AbAllocationRegionCount == 1 )
            v20->AbEntrySummary |= 1 << v26;
          else
            _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v26);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, v19, SessionId, 0LL);
LABEL_24:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, v19, &v42);
  v23 = v20->SpecialApcDisable++ == -1;
  if ( v23 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v28, v27, v29, v30);
  KiLeaveGuardedRegionUnsafe((__int64)v45);
LABEL_28:
  if ( v17 )
    HalPutDmaAdapter(v17);
  if ( (*((_DWORD *)i + 14) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v18 + 92), 0xFFFFFFFF);
  if ( a3 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  v32 = *((unsigned int *)i + 25);
  if ( (_DWORD)v32 != 0x7FFFF )
    MiDereferencePerSessionProtos(v18, v32);
  v33 = ((*((_QWORD *)i + 4) >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (i[56] & 0x18) == 0x18 )
  {
    if ( a1 == (_QWORD *)&unk_140C4CBE8 )
      v34 = &unk_140C4E978;
    else
      v34 = (void *)(v44 + 880);
    MiReleasePtes(v34, v6, (unsigned int)v33);
  }
  else
  {
    MiUnmapLargePages(*((_QWORD *)i + 11) & 0xFFFFFFFFFFFFF000uLL, v33 << 12, 9LL, SchedulerAssist);
  }
  ExFreePoolWithTag(i, 0);
}
