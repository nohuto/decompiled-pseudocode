/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x1403071D4
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x140307164 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     RtlpHpEnvFreeVA @ 0x140237A70 (RtlpHpEnvFreeVA.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402D4324 (RtlpHpAcquireLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140306644 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1403078AC (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x140307EEC (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeFind @ 0x140308268 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrFree @ 0x140308320 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x14030849C (RtlpHpVaMgrRangeSplit.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r15
  __int64 result; // rax
  char v8; // dl
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rsi
  _RTL_BALANCED_NODE *v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // rax
  struct _KTHREAD *v17; // rdi
  unsigned __int8 v18; // r14
  unsigned int v19; // edx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  unsigned __int8 v35; // r14
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rsi
  unsigned __int8 v39; // al
  __int64 v40; // rcx
  __int64 v41; // [rsp+30h] [rbp-39h] BYREF
  int v42; // [rsp+38h] [rbp-31h]
  _DWORD v43[2]; // [rsp+3Ch] [rbp-2Dh] BYREF
  int v44; // [rsp+44h] [rbp-25h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-21h] BYREF
  __int64 v46; // [rsp+50h] [rbp-19h] BYREF
  __int128 v47; // [rsp+58h] [rbp-11h] BYREF
  __int64 v48; // [rsp+68h] [rbp-1h]
  unsigned __int64 v49; // [rsp+70h] [rbp+7h]
  _DWORD v50[4]; // [rsp+78h] [rbp+Fh]

  v46 = 0LL;
  v41 = 0LL;
  v3 = a3;
  v4 = *a2;
  v50[0] = 0x100000;
  v50[1] = 0x100000;
  v50[2] = 0x200000;
  v50[3] = 0x40000000;
  if ( !v4 )
    __int2c();
  if ( v4 <= (unsigned __int64)(*(unsigned __int16 *)(BugCheckParameter2 + 40) << 20) >> 1 )
  {
    v9 = v4 >> 20;
    v10 = RtlpHpAcquireLockExclusive((volatile LONG *)BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    v11 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(
                                  BugCheckParameter2,
                                  (unsigned __int16)v9,
                                  (unsigned __int16)(v3 >> 20),
                                  &v46);
    v12 = -1;
    v13 = (__int64)v11;
    if ( v11 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(BugCheckParameter2 + 8), v11);
      v14 = v46;
      if ( v46 != v13 )
      {
        *(_OWORD *)v13 = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_BYTE *)v13 = 1;
        *(_BYTE *)(v13 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
        RtlpHpVaMgrRangeSplit(BugCheckParameter2, v13, (v14 - v13) >> 5);
        RtlpHpVaMgrFree(BugCheckParameter2, v13);
        v13 = v14;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v20 = (v34 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v34;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v10);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        v43[0] = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v35 = ++CurrentThread->AbAllocationRegionCount;
        v36 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v20 = !_BitScanReverse((unsigned int *)&v37, v36);
        v42 = v37;
        if ( v20 )
          goto LABEL_66;
        while ( 1 )
        {
          v38 = (__int64)&CurrentThread->LockEntries[v37];
          v36 &= ~(1 << v37);
          if ( (*(_BYTE *)(v38 + 26) & 1) != 0
            && (*(_DWORD *)(v38 + 32) & 1) == 0
            && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v38 + 40) == SessionId )
          {
            *(_BYTE *)(v38 + 26) &= ~1u;
            if ( *(_QWORD *)(v38 + 32) )
              break;
          }
          v20 = !_BitScanReverse((unsigned int *)&v37, v36);
          v42 = v37;
          if ( v20 )
            goto LABEL_66;
        }
        if ( !v38 )
        {
LABEL_66:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v38 + 32) |= 2u;
          if ( *(__int64 *)(v38 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
          v43[0] = *(_DWORD *)(v38 + 88) & 0x1FFFF;
          *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v38 + 25) &= ~1u;
          *(_QWORD *)(v38 + 32) = 0LL;
          v39 = 1 << ((signed __int64)(v38 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v35 == 1 )
            CurrentThread->AbEntrySummary |= v39;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v39);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, v43);
        v20 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v20
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v40);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v13 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
      if ( !v13 )
        return v41;
      LOBYTE(v10) = RtlpHpAcquireLockExclusive(
                      (volatile LONG *)BugCheckParameter2,
                      *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    }
    v15 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
        + ((unsigned __int64)(v13 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 24LL) << 20);
    *(_OWORD *)v13 = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_BYTE *)v13 = 1;
    *(_BYTE *)(v13 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
    if ( *(_WORD *)(v13 + 24) > (unsigned __int16)v9 )
    {
      v16 = RtlpHpVaMgrRangeSplit(BugCheckParameter2, v13, (unsigned __int16)v9);
      RtlpHpVaMgrFree(BugCheckParameter2, v16);
    }
    v41 = v15;
    if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v20 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8((unsigned __int8)v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      v44 = 0;
      v17 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        v12 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
      --v17->SpecialApcDisable;
      v18 = ++v17->AbAllocationRegionCount;
      v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        v43[1] = v21;
        if ( v20 )
          break;
        v22 = (__int64)&v17->LockEntries[v21];
        v19 &= ~(1 << v21);
        if ( (*(_BYTE *)(v22 + 26) & 1) != 0
          && (*(_DWORD *)(v22 + 32) & 1) == 0
          && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v22 + 40) == v12 )
        {
          *(_BYTE *)(v22 + 26) &= ~1u;
          if ( *(_QWORD *)(v22 + 32) )
          {
            if ( v22 )
            {
              *(_BYTE *)(v22 + 32) |= 2u;
              if ( *(__int64 *)(v22 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
              v44 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
              *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v22 + 25) &= ~1u;
              *(_QWORD *)(v22 + 32) = 0LL;
              v23 = (signed __int64)(v22 - (unsigned __int64)v17->LockEntries) / 96;
              if ( v18 == 1 )
                v17->AbEntrySummary |= 1 << v23;
              else
                _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v23);
              goto LABEL_35;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, BugCheckParameter2, v12, 0LL);
LABEL_35:
      --v17->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v17, BugCheckParameter2, &v44);
      v20 = v17->SpecialApcDisable++ == -1;
      if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
        KiCheckForKernelApcDelivery(v24);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return v41;
  }
  if ( a3 <= (unsigned int)v50[((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 3] )
    v3 = (unsigned int)v50[((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 3];
  v45 = v4 - ((v3 - 1) & (v3 + v4 - 1)) + v3 - 1;
  result = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v45);
  v41 = result;
  if ( result )
  {
    v8 = *(_BYTE *)(BugCheckParameter2 + 44);
    v47 = 0LL;
    BYTE1(v47) = v8;
    v49 = v45 >> 20;
    v48 = 0LL;
    LOBYTE(v47) = 5;
    if ( !RtlpHpVaMgrRangeCreate(BugCheckParameter2, result, &v47) )
    {
      RtlpHpEnvFreeVA((unsigned __int64 *)&v41, &v45, 0x8000);
      return 0LL;
    }
    *a2 = v45;
    return v41;
  }
  return result;
}
