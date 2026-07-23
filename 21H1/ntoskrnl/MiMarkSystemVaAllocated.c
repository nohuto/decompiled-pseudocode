/*
 * XREFs of MiMarkSystemVaAllocated @ 0x140538150
 * Callers:
 *     MiReservePoolMemory @ 0x1403008E0 (MiReservePoolMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlSetBitsEx @ 0x1402A30D0 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1402AA000 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x140301D30 (MiSystemVaToDynamicBitmap.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiExtendDynamicBitMap @ 0x1403C52AC (MiExtendDynamicBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMarkSystemVaAllocated(int a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 *v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // r14
  unsigned int v11; // r14d
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  int v14; // r13d
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // r9
  __int64 *v18; // r8
  bool v19; // zf
  bool i; // zf
  unsigned __int64 v21; // rsi
  struct _KTHREAD *v22; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v24; // r15
  unsigned int v25; // r8d
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _DWORD *v32; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // edx
  int v39; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  v6 = (a3 - a2) >> 3;
  v7 = a2 << 25 >> 16 << 25 >> 16;
  if ( a1 == 1 )
  {
    v8 = 0LL;
    v9 = qword_140C4CCE0;
    CurrentThread = KeGetCurrentThread();
    v5 = CurrentThread->ApcState.Process[1].AffinityPadding[5];
    --CurrentThread->SpecialApcDisable;
    v10 = v5 + 832;
    ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 824, 0LL);
  }
  else
  {
    v8 = MiSystemVaToDynamicBitmap(a1);
    v10 = (__int64)v8;
    v9 = v8[4];
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v8 + 8, &LockHandle);
  }
  if ( v7 < v9 )
    goto LABEL_5;
  v12 = (v7 - v9) >> 21;
  if ( a5 && (v13 = v12 + v6 - 1, v13 >= *(_QWORD *)v10) )
  {
    if ( v13 >= v8[2]
      || (v14 = a1,
          !(unsigned int)MiExtendDynamicBitMap(
                           v8,
                           (unsigned __int64 *)v10,
                           (v13 - *(_QWORD *)v10 + 0x8000) & 0xFFFFFFFFFFFF8000uLL,
                           a1,
                           1)) )
    {
LABEL_5:
      v11 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v14 = a1;
  }
  if ( a4 == 1 )
  {
    if ( v12 < *(_QWORD *)v10 )
    {
      if ( v6 <= 1 )
      {
        if ( v6 != 1 || _bittest64(*(const signed __int64 **)(v10 + 8), v12) )
          goto LABEL_17;
LABEL_27:
        RtlSetBitsEx(v10, v12, v6);
        v11 = 1;
        if ( v5 )
        {
          *(_DWORD *)(v5 + 872) += v6;
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      if ( *(_QWORD *)v10 - v12 >= v6 )
      {
        v15 = *(_QWORD *)(v10 + 8);
        v16 = (__int64 *)(v15 + 8 * (v12 >> 6));
        v17 = *v16;
        v18 = (__int64 *)(v15 + 8 * ((v12 + v6 - 1) >> 6));
        if ( v16 != v18 )
        {
          for ( i = (v17 & (-1LL << v12)) == 0; i; i = *v16 == 0 )
          {
            if ( ++v16 == v18 )
            {
              v19 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v12 + (unsigned __int8)v6 - 1)) & *v16) == 0;
              goto LABEL_26;
            }
          }
          goto LABEL_17;
        }
        v19 = (v17 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << v12)) == 0;
LABEL_26:
        if ( v19 )
          goto LABEL_27;
      }
    }
LABEL_17:
    v11 = 0;
    goto LABEL_33;
  }
  RtlClearBitsEx(v10, v12, v6);
  v11 = 1;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 872) -= v6;
    goto LABEL_33;
  }
  v6 = -(__int64)v6;
LABEL_32:
  _InterlockedExchangeAdd64(&MiState[v14 + 1553], v6);
LABEL_33:
  if ( v5 )
  {
    v21 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 824;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v21);
    v39 = 0;
    v22 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v21) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v22->ApcState.Process);
    else
      SessionId = -1;
    --v22->SpecialApcDisable;
    v24 = ++v22->AbAllocationRegionCount;
    v25 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v19 = !_BitScanReverse((unsigned int *)&v27, v25);
      if ( v19 )
        goto LABEL_46;
      v26 = (__int64)&v22->LockEntries[v27];
      v25 &= ~(1 << v27);
      if ( (*(_BYTE *)(v26 + 26) & 1) != 0
        && (*(_DWORD *)(v26 + 32) & 1) == 0
        && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v21 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v26 + 40) == SessionId )
      {
        *(_BYTE *)(v26 + 26) &= ~1u;
        if ( *(_QWORD *)(v26 + 32) )
          break;
      }
    }
    if ( !v26 )
    {
LABEL_46:
      if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v22, v21, SessionId, 0LL);
      goto LABEL_53;
    }
    *(_BYTE *)(v26 + 32) |= 2u;
    if ( *(__int64 *)(v26 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26);
    v39 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
    *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v26 + 25) &= ~1u;
    *(_QWORD *)(v26 + 32) = 0LL;
    v28 = (signed __int64)(v26 - (unsigned __int64)v22->LockEntries) / 96;
    if ( v24 == 1 )
      v22->AbEntrySummary |= 1 << v28;
    else
      _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v28);
LABEL_53:
    --v22->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v22, v21, &v39);
    v19 = v22->SpecialApcDisable++ == -1;
    if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery(v30, v29, v31, v32);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v29, v31, (__int64)v32);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return v11;
}
