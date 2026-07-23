/*
 * XREFs of MiUpControlAreaRefs @ 0x140525050
 * Callers:
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiInsertChildVads @ 0x1408D4E30 (MiInsertChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceActiveSubsection @ 0x1402A23D0 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsections @ 0x1402A32F0 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1402A33A0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x1402A41F8 (MiControlAreaRequiresCharge.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     MiLockNestedVad @ 0x1408D5128 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408D5144 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiUpControlAreaRefs(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // ecx
  bool v9; // zf
  __int64 v10; // r14
  __int64 *v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  KIRQL v14; // al
  unsigned __int64 v15; // r12
  int v16; // ecx
  __int64 v17; // r15
  __int64 *v18; // rsi
  __int64 v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  unsigned __int64 v24; // r14
  struct _KTHREAD *v25; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v27; // r15
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _DWORD *v35; // r9
  int v36; // [rsp+30h] [rbp-38h]
  int v37; // [rsp+34h] [rbp-34h]
  BOOL v38; // [rsp+38h] [rbp-30h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v40; // [rsp+48h] [rbp-20h] BYREF
  __int64 v41; // [rsp+50h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  int active; // [rsp+B0h] [rbp+48h]
  int v45; // [rsp+C8h] [rbp+60h] BYREF

  v37 = 0;
  v4 = **(_QWORD **)(a1 + 72);
  v5 = MiControlAreaRequiresCharge(v4);
  if ( !v5 )
    return 3221227019LL;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_DWORD *)(a1 + 48);
  v38 = v7 != 0;
  if ( ((v8 & 0xF80) == 0x200 || (v8 & 0xF80) == 0x300) && v7 && (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 92));
    else
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 0xFFFFFFFF);
    v37 = 1;
  }
  v9 = (*(_DWORD *)(v4 + 56) & 0x400) == 0;
  v10 = 0LL;
  active = 0;
  v11 = 0LL;
  v36 = 0;
  BugCheckParameter2 = 0LL;
  v40 = 0LL;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad(a1);
    if ( !*(_QWORD *)(v4 + 64) || (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
    {
      v11 = (__int64 *)(v4 + 128);
      BugCheckParameter2 = v4 + 128;
    }
    else
    {
      MiGetProtoPteAddress(a1, v12, 0, &BugCheckParameter2);
      v11 = (__int64 *)BugCheckParameter2;
    }
    if ( v11 )
      v36 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *(_QWORD *)(v4 + 64) )
  {
    CurrentThread = 0LL;
    v41 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)v4;
    CurrentThread = KeGetCurrentThread();
    v41 = v13;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v13 + 40, 0LL);
    v11 = (__int64 *)BugCheckParameter2;
  }
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  ++*(_QWORD *)(v4 + 40);
  ++*(_QWORD *)(v4 + 48);
  v15 = v14;
  if ( v11 )
  {
    v16 = *(_DWORD *)(v4 + 56);
    if ( (v16 & 0x20) == 0 && *(_QWORD *)(v4 + 64) )
    {
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
        1,
        &v40);
      v17 = 0LL;
      v18 = v11;
      while ( 1 )
      {
        if ( a2 )
        {
          active = MiReferenceActiveSubsection(v18, 8, v15);
          if ( active < 0 )
          {
            if ( v17 )
              v10 += MiDecrementSubsections((ULONG_PTR)v11, v17, 8u);
            goto LABEL_41;
          }
        }
        else
        {
          v10 += MiDecrementSubsections((ULONG_PTR)v11, (__int64)v11, 8u);
        }
        v17 = (__int64)v18;
        if ( v18 != v40 )
        {
          v18 = (__int64 *)v18[2];
          if ( v18 )
            continue;
        }
        goto LABEL_41;
      }
    }
    if ( !a2 )
    {
      if ( (v16 & 0x20) != 0 )
      {
        if ( v5 != 2 )
          goto LABEL_41;
        v19 = MiDecrementSubsectionViewCount(v11, 24);
      }
      else
      {
        v19 = MiDecrementSubsections((ULONG_PTR)v11, (__int64)v11, 8u);
      }
      v10 = v19;
      goto LABEL_41;
    }
    active = MiReferenceActiveSubsection(v11, 8, v14);
  }
LABEL_41:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v9 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  if ( v10 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v38, v10);
  if ( !*(_QWORD *)(v4 + 64) )
  {
    v24 = v41 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v24);
    v45 = 0;
    v25 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v24) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v25->ApcState.Process);
    else
      SessionId = -1;
    --v25->SpecialApcDisable;
    v27 = ++v25->AbAllocationRegionCount;
    v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v29, v28);
      if ( v9 )
        break;
      v30 = (__int64)&v25->LockEntries[v29];
      v28 &= ~(1 << v29);
      if ( (*(_BYTE *)(v30 + 26) & 1) != 0
        && (*(_DWORD *)(v30 + 32) & 1) == 0
        && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v24 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v30 + 40) == SessionId )
      {
        *(_BYTE *)(v30 + 26) &= ~1u;
        if ( *(_QWORD *)(v30 + 32) )
        {
          if ( v30 )
          {
            *(_BYTE *)(v30 + 32) |= 2u;
            if ( *(__int64 *)(v30 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
            v45 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
            *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v30 + 25) &= ~1u;
            *(_QWORD *)(v30 + 32) = 0LL;
            v31 = (signed __int64)(v30 - (unsigned __int64)v25->LockEntries) / 96;
            if ( v27 == 1 )
              v25->AbEntrySummary |= 1 << v31;
            else
              _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v31);
            goto LABEL_69;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v25, v24, SessionId, 0LL);
LABEL_69:
    --v25->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v25, v24, &v45);
    v9 = v25->SpecialApcDisable++ == -1;
    if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
      KiCheckForKernelApcDelivery(v33, v32, v34, v35);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v32, v34, (__int64)v35);
  }
  if ( v36 == 1 )
    MiUnlockNestedVad(a1);
  result = (unsigned int)active;
  if ( active < 0 && v37 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  return result;
}
