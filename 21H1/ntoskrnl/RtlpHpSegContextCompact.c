/*
 * XREFs of RtlpHpSegContextCompact @ 0x14035DCA0
 * Callers:
 *     RtlpHpHeapCompact @ 0x14035DBEC (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x14023C580 (RtlpHpSegLockAcquire.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1402B0EB0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402B2C50 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x1402B31D0 (RtlpHpSegFreeRangeRemove.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpHpSegSegmentFree @ 0x140386244 (RtlpHpSegSegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, char a2)
{
  bool v2; // zf
  char v5; // al
  _QWORD *v6; // rsi
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // r8d
  unsigned __int8 v16; // bp
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // r9
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD **v27; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // edx
  _QWORD *v32; // rdx
  _QWORD *v33; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v34; // [rsp+38h] [rbp-30h]
  char v35; // [rsp+70h] [rbp+8h] BYREF
  int v36; // [rsp+80h] [rbp+18h]
  int v37; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 88) == 0LL;
  v34 = &v33;
  v33 = &v33;
  if ( !v2 )
  {
    v5 = RtlpHpSegLockAcquire(a1, a2);
    v6 = *(_QWORD **)(a1 + 72);
    v35 = v5;
    v7 = v5;
    if ( v6 != (_QWORD *)(a1 + 72) )
    {
      do
      {
        v8 = (unsigned __int64)&v6[4 * *(unsigned __int8 *)(a1 + 10)];
        v9 = v8 + 32 * (256LL - *(unsigned __int8 *)(a1 + 10));
        if ( v8 < v9 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)(v8 + 24) & 1) == 0 && *(_WORD *)(v8 + 28) != 0xFFFF )
            {
              RtlpHpSegFreeRangeRemove(a1, v8);
              *(_BYTE *)(v8 + 24) |= 1u;
              v12 = 32LL * ((unsigned int)*(unsigned __int8 *)(v8 + 31) - 1);
              *(_BYTE *)(v12 + v8 + 24) |= 1u;
              v8 = RtlpHpSegPageRangeCoalesce(a1, v8, a2, 1, &v35);
              v13 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, v8, 0);
              if ( v13 )
                break;
            }
            v8 += 32LL * *(unsigned __int8 *)(v8 + 31);
            if ( v8 >= v9 )
              goto LABEL_6;
          }
          v25 = *v13;
          v6 = (_QWORD *)v6[1];
          v26 = (_QWORD *)v13[1];
          if ( *(_QWORD **)(*v13 + 8LL) != v13
            || (_QWORD *)*v26 != v13
            || (*v26 = v25, *(_QWORD *)(v25 + 8) = v26, v27 = (_QWORD **)v34, --*(_QWORD *)(a1 + 88), *v27 != &v33) )
          {
            __fastfail(3u);
          }
          v13[1] = v27;
          *v13 = &v33;
          *v27 = v13;
          v34 = v13;
        }
LABEL_6:
        v6 = (_QWORD *)*v6;
      }
      while ( v6 != (_QWORD *)(a1 + 72) );
      v7 = v35;
    }
    if ( (a2 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v7 = v35;
              v31 = ~(unsigned __int16)(-1LL << (v35 + 1));
              v2 = (v31 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v31;
              if ( v2 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v7);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        v37 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v16 = ++CurrentThread->AbAllocationRegionCount;
        v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v2 = !_BitScanReverse((unsigned int *)&v18, v17);
        v36 = v18;
        if ( v2 )
          goto LABEL_38;
        while ( 1 )
        {
          v19 = (__int64)&CurrentThread->LockEntries[v18];
          v17 &= ~(1 << v18);
          if ( (*(_BYTE *)(v19 + 26) & 1) != 0
            && (*(_DWORD *)(v19 + 32) & 1) == 0
            && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v19 + 40) == SessionId )
          {
            *(_BYTE *)(v19 + 26) &= ~1u;
            if ( *(_QWORD *)(v19 + 32) )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v18, v17);
          v36 = v18;
          if ( v2 )
            goto LABEL_38;
        }
        if ( !v19 )
        {
LABEL_38:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v19 + 32) |= 2u;
          if ( *(__int64 *)(v19 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
          v37 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
          *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v19 + 25) &= ~1u;
          *(_QWORD *)(v19 + 32) = 0LL;
          v20 = (signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v16 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 64, &v37);
        v2 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v2
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v22, v21, v23, v24);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v21, v23, (__int64)v24);
      }
    }
  }
  v10 = v33;
  for ( result = &v33; v10 != &v33; result = &v33 )
  {
    v32 = v10;
    v10 = (_QWORD *)*v10;
    RtlpHpSegSegmentFree(a1, v32, 0x7FFFFFFFLL, 1LL);
  }
  return result;
}
