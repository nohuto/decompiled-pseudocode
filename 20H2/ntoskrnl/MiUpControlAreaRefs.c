/*
 * XREFs of MiUpControlAreaRefs @ 0x140529070
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiInsertChildVads @ 0x1408DBFC0 (MiInsertChildVads.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiDecrementSubsections @ 0x14022BE70 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14022BF20 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x14022CE60 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x140232D6C (MiControlAreaRequiresCharge.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     MiLockNestedVad @ 0x1408DC2B8 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408DC2D4 (MiUnlockNestedVad.c)
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
  __int64 v32; // rcx
  int v33; // [rsp+30h] [rbp-38h]
  int v34; // [rsp+34h] [rbp-34h]
  BOOL v35; // [rsp+38h] [rbp-30h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v37; // [rsp+48h] [rbp-20h] BYREF
  __int64 v38; // [rsp+50h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  int active; // [rsp+B0h] [rbp+48h]
  int v42; // [rsp+C8h] [rbp+60h] BYREF

  v34 = 0;
  v4 = **(_QWORD **)(a1 + 72);
  v5 = MiControlAreaRequiresCharge(v4);
  if ( !v5 )
    return 3221227019LL;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_DWORD *)(a1 + 48);
  v35 = v7 != 0;
  if ( ((v8 & 0xF80) == 0x200 || (v8 & 0xF80) == 0x300) && v7 && (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 92));
    else
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 0xFFFFFFFF);
    v34 = 1;
  }
  v9 = (*(_DWORD *)(v4 + 56) & 0x400) == 0;
  v10 = 0LL;
  active = 0;
  v11 = 0LL;
  v33 = 0;
  BugCheckParameter2 = 0LL;
  v37 = 0LL;
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
      v33 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *(_QWORD *)(v4 + 64) )
  {
    CurrentThread = 0LL;
    v38 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)v4;
    CurrentThread = KeGetCurrentThread();
    v38 = v13;
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
        &v37);
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
        if ( v18 != v37 )
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
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v35, v10);
  if ( !*(_QWORD *)(v4 + 64) )
  {
    v24 = v38 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v24);
    v42 = 0;
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
            v42 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v25, v24, &v42);
    v9 = v25->SpecialApcDisable++ == -1;
    if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
      KiCheckForKernelApcDelivery(v32);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v33 == 1 )
    MiUnlockNestedVad(a1);
  result = (unsigned int)active;
  if ( active < 0 && v34 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  return result;
}
