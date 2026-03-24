/*
 * XREFs of MiMarkSystemVaAllocated @ 0x14053DC70
 * Callers:
 *     MiReservePoolMemory @ 0x1402B2E74 (MiReservePoolMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     MiSystemVaToDynamicBitmap @ 0x1402B407C (MiSystemVaToDynamicBitmap.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x1402FE300 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x140316A00 (RtlSetBitsEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     MiExtendDynamicBitMap @ 0x1403C984C (MiExtendDynamicBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
  _DWORD *v25; // r9
  unsigned int v26; // r8d
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // edx
  int v37; // [rsp+30h] [rbp-38h] BYREF
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
    v9 = qword_140C4CDA0;
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
    v37 = 0;
    v22 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v21) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v22->ApcState.Process);
    else
      SessionId = -1;
    --v22->SpecialApcDisable;
    v24 = ++v22->AbAllocationRegionCount;
    v25 = (_DWORD *)(v21 & 0x7FFFFFFFFFFFFFFCLL);
    v26 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v19 = !_BitScanReverse((unsigned int *)&v28, v26);
      if ( v19 )
        goto LABEL_46;
      v27 = (__int64)&v22->LockEntries[v28];
      v26 &= ~(1 << v28);
      if ( (*(_BYTE *)(v27 + 26) & 1) != 0
        && (*(_DWORD *)(v27 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v27 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v25
        && *(_DWORD *)(v27 + 40) == SessionId )
      {
        *(_BYTE *)(v27 + 26) &= ~1u;
        if ( *(_QWORD *)(v27 + 32) )
          break;
      }
    }
    if ( !v27 )
    {
LABEL_46:
      if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v22, v21, SessionId, 0LL);
      goto LABEL_53;
    }
    *(_BYTE *)(v27 + 32) |= 2u;
    if ( *(__int64 *)(v27 + 32) < 0 )
      KiAbEntryRemoveFromTree(v27);
    v37 = *(_DWORD *)(v27 + 88) & 0x1FFFF;
    *(_DWORD *)(v27 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v27 + 25) &= ~1u;
    *(_QWORD *)(v27 + 32) = 0LL;
    v29 = (signed __int64)(v27 - (unsigned __int64)v22->LockEntries) / 96;
    if ( v24 == 1 )
      v22->AbEntrySummary |= 1 << v29;
    else
      _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v29);
LABEL_53:
    --v22->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v22, v21, (__int64)&v37, v25);
    v19 = v22->SpecialApcDisable++ == -1;
    if ( v19 && ($C459BD0D405E8E46662177FB3D0A143F *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery(v30);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
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
          v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v35 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v35;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return v11;
}
