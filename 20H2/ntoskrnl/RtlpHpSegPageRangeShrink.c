/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x1402CDD70
 * Callers:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     RtlpHpSegFree @ 0x140237FF4 (RtlpHpSegFree.c)
 *     RtlpHpSegPageRangeFree @ 0x140593554 (RtlpHpSegPageRangeFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402CE210 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1402CE6E0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegSegmentFree @ 0x140389374 (RtlpHpSegSegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, __int64 a3, __int64 SchedulerAssist)
{
  int v4; // ebp
  int v5; // r12d
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rdx
  BOOLEAN v16; // al
  __int64 v17; // rax
  __int64 result; // rax
  _QWORD *v19; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v21; // rdx
  unsigned __int8 v22; // di
  char v23; // al
  struct _KTHREAD *v24; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v26; // bp
  unsigned int v27; // edx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v37; // rcx
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v44; // [rsp+70h] [rbp+8h] BYREF
  int v45; // [rsp+80h] [rbp+18h] BYREF
  int v46; // [rsp+88h] [rbp+20h]

  v45 = a3;
  v4 = *(unsigned __int8 *)(a2 + 31);
  v5 = SchedulerAssist;
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    a3 = a2 + 56;
    SchedulerAssist = (unsigned int)(v4 - 2);
    do
    {
      v23 = *(_BYTE *)a3;
      a3 += 32LL;
      *(_BYTE *)(a3 - 32) = v23 & 0xFE;
      --SchedulerAssist;
    }
    while ( SchedulerAssist );
  }
  CurrentIrql = -1;
  if ( (v5 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        a3 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = a3;
      }
      v9 = (volatile signed __int32 *)(a1 + 64);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, CurrentIrql);
      else
        ExpAcquireSpinLockExclusive(v9, CurrentIrql, a3, SchedulerAssist);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    }
  }
  v10 = *(_DWORD *)(a2 + 28);
  LOBYTE(v45) = CurrentIrql;
  if ( HIBYTE(v10) != v4 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_WORD *)(a2 + 28) = -1;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + a2 + 31) = v4 - 1;
  *(_WORD *)(a2 + 28) = v10;
  *(_BYTE *)(a2 + 31) = v4;
  *(_DWORD *)a2 = -857879331;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v11 = RtlpHpSegPageRangeCoalesce(a1, a2, v5, 0, (__int64)&v45);
  v12 = *(_BYTE *)(a1 + 13);
  v13 = v11;
  if ( (v12 & 0x10) != 0
    && (result = *(unsigned __int8 *)(v11 + 31), (_DWORD)result == 256 - *(unsigned __int8 *)(a1 + 10)) )
  {
    v19 = (_QWORD *)(v13 & *(_QWORD *)a1);
    *(_DWORD *)v13 = -857879297;
    if ( v19 )
    {
      v37 = *v19;
      result = v19[1];
      if ( *(_QWORD **)(*v19 + 8LL) != v19 || *(_QWORD **)result != v19 )
        __fastfail(3u);
      *(_QWORD *)result = v37;
      *(_QWORD *)(v37 + 8) = result;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v12 & 7) != 0 )
      v14 = RtlpHpSegPageRangeComputeLargePageCost(
              a1,
              ((v13 - (v13 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) + (v13 & *(_QWORD *)a1),
              *(unsigned __int8 *)(v13 + 31) << *(_BYTE *)(a1 + 8));
    else
      v14 = 4;
    *(_BYTE *)(v13 + 30) = v14;
    v15 = *(_QWORD *)(a1 + 96);
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
    {
      if ( v15 )
        v15 ^= a1 + 96;
      else
        v15 = 0LL;
    }
    v16 = 0;
    if ( v15 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v13 + 28) < *(_DWORD *)(v15 + 28) )
        {
          v17 = *(_QWORD *)v15;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_27;
            v17 ^= v15;
          }
          if ( !v17 )
          {
LABEL_27:
            v16 = 0;
            break;
          }
        }
        else
        {
          v17 = *(_QWORD *)(v15 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v17 )
              goto LABEL_28;
            v17 ^= v15;
          }
          if ( !v17 )
          {
LABEL_28:
            v16 = 1;
            break;
          }
        }
        v15 = v17;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v15, v16, (PRTL_BALANCED_NODE)v13);
    result = *(__int16 *)(a1 + 22);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), (unsigned __int16)~*(_WORD *)(v13 + 28));
    v19 = 0LL;
  }
  if ( (v5 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
      else
        *(_DWORD *)(a1 + 64) = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v38 = v21[6] - 1;
          v21[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v39 = KeGetCurrentIrql(), v39 <= 0xFu) )
      {
        v22 = v45;
        if ( (unsigned __int8)v45 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v22 = v45;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
          v28 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      else
      {
        v22 = v45;
      }
      result = v22;
      __writecr8(v22);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      v44 = 0;
      v24 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
      else
        SessionId = -1;
      --v24->SpecialApcDisable;
      v26 = ++v24->AbAllocationRegionCount;
      v27 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
      v28 = !_BitScanReverse((unsigned int *)&v29, v27);
      v46 = v29;
      if ( v28 )
        goto LABEL_66;
      while ( 1 )
      {
        v30 = (__int64)&v24->LockEntries[v29];
        v27 &= ~(1 << v29);
        if ( (*(_BYTE *)(v30 + 26) & 1) != 0
          && (*(_DWORD *)(v30 + 32) & 1) == 0
          && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v30 + 40) == SessionId )
        {
          *(_BYTE *)(v30 + 26) &= ~1u;
          if ( *(_QWORD *)(v30 + 32) )
            break;
        }
        v28 = !_BitScanReverse((unsigned int *)&v29, v27);
        v46 = v29;
        if ( v28 )
          goto LABEL_66;
      }
      if ( !v30 )
      {
LABEL_66:
        if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v24, a1 + 64, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v30 + 32) |= 2u;
        if ( *(__int64 *)(v30 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
        v44 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
        *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v30 + 25) &= ~1u;
        *(_QWORD *)(v30 + 32) = 0LL;
        v31 = (signed __int64)(v30 - (unsigned __int64)v24->LockEntries) / 96;
        if ( v26 == 1 )
          v24->AbEntrySummary |= 1 << v31;
        else
          _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v31);
      }
      --v24->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v24, a1 + 64, &v44);
      v28 = v24->SpecialApcDisable++ == -1;
      if ( v28 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
        KiCheckForKernelApcDelivery(v33, v32, v34, v35);
      result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( v19 )
    return RtlpHpSegSegmentFree(a1, v19, 0x7FFFFFFFLL, 1LL);
  return result;
}
