/*
 * XREFs of MiUpControlAreaRefs @ 0x14052ADB0
 * Callers:
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiInsertChildVads @ 0x1408D98E0 (MiInsertChildVads.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiControlAreaRequiresCharge @ 0x14027C22C (MiControlAreaRequiresCharge.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiDecrementSubsections @ 0x14031FE10 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x140320A50 (MiReferenceActiveSubsection.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     MiLockNestedVad @ 0x1408D9BD8 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408D9BF4 (MiUnlockNestedVad.c)
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
  __int64 v15; // r8
  unsigned __int64 v16; // r12
  int v17; // ecx
  __int64 v18; // r15
  __int64 *v19; // rsi
  __int64 v20; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  unsigned __int64 v25; // r14
  struct _KTHREAD *v26; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v28; // r15
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
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
  v5 = MiControlAreaRequiresCharge(v4, 0LL);
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
  v16 = v14;
  if ( v11 )
  {
    v17 = *(_DWORD *)(v4 + 56);
    if ( (v17 & 0x20) == 0 && *(_QWORD *)(v4 + 64) )
    {
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
        1,
        &v37);
      v18 = 0LL;
      v19 = v11;
      while ( 1 )
      {
        if ( a2 )
        {
          active = MiReferenceActiveSubsection(v19, 8, v16);
          if ( active < 0 )
          {
            if ( v18 )
              v10 += MiDecrementSubsections((ULONG_PTR)v11, v18, 8u);
            goto LABEL_41;
          }
        }
        else
        {
          v10 += MiDecrementSubsections((ULONG_PTR)v11, (__int64)v11, 8u);
        }
        v18 = (__int64)v19;
        if ( v19 != v37 )
        {
          v19 = (__int64 *)v19[2];
          if ( v19 )
            continue;
        }
        goto LABEL_41;
      }
    }
    if ( !a2 )
    {
      if ( (v17 & 0x20) != 0 )
      {
        if ( v5 != 2 )
          goto LABEL_41;
        v20 = MiDecrementSubsectionViewCount(v11, 24LL, v15);
      }
      else
      {
        v20 = MiDecrementSubsections((ULONG_PTR)v11, (__int64)v11, 8u);
      }
      v10 = v20;
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
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v9 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v16);
  if ( v10 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v35, v10);
  if ( !*(_QWORD *)(v4 + 64) )
  {
    v25 = v38 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v25);
    v42 = 0;
    v26 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v25) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v26->ApcState.Process);
    else
      SessionId = -1;
    --v26->SpecialApcDisable;
    v28 = ++v26->AbAllocationRegionCount;
    v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v30, v29);
      if ( v9 )
        break;
      v31 = (__int64)&v26->LockEntries[v30];
      v29 &= ~(1 << v30);
      if ( (*(_BYTE *)(v31 + 26) & 1) != 0
        && (*(_DWORD *)(v31 + 32) & 1) == 0
        && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v25 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v31 + 40) == SessionId )
      {
        *(_BYTE *)(v31 + 26) &= ~1u;
        if ( *(_QWORD *)(v31 + 32) )
        {
          if ( v31 )
          {
            *(_BYTE *)(v31 + 32) |= 2u;
            if ( *(__int64 *)(v31 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31);
            v42 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
            *(_DWORD *)(v31 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v31 + 25) &= ~1u;
            *(_QWORD *)(v31 + 32) = 0LL;
            v32 = (signed __int64)(v31 - (unsigned __int64)v26->LockEntries) / 96;
            if ( v28 == 1 )
              v26->AbEntrySummary |= 1 << v32;
            else
              _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v32);
            goto LABEL_69;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v26, v25, SessionId, 0LL);
LABEL_69:
    --v26->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v26, v25, (unsigned int *)&v42);
    v9 = v26->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v33 == 1 )
    MiUnlockNestedVad(a1);
  result = (unsigned int)active;
  if ( active < 0 && v34 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  return result;
}
