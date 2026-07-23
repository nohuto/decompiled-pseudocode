/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x140360D10
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x140360CA0 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14023C5AC (RtlpHpAcquireLockExclusive.c)
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpEnvFreeVA @ 0x1402AC068 (RtlpHpEnvFreeVA.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140360180 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1403613E8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x140361A28 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeFind @ 0x140361DA4 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrFree @ 0x140361E5C (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140361FD8 (RtlpHpVaMgrRangeSplit.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  unsigned __int8 v38; // r14
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rsi
  unsigned __int8 v42; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _DWORD *v46; // r9
  __int64 v47; // [rsp+30h] [rbp-39h] BYREF
  int v48; // [rsp+38h] [rbp-31h]
  _DWORD v49[2]; // [rsp+3Ch] [rbp-2Dh] BYREF
  int v50; // [rsp+44h] [rbp-25h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-21h] BYREF
  __int64 v52; // [rsp+50h] [rbp-19h] BYREF
  __int128 v53; // [rsp+58h] [rbp-11h] BYREF
  __int64 v54; // [rsp+68h] [rbp-1h]
  unsigned __int64 v55; // [rsp+70h] [rbp+7h]
  _DWORD v56[4]; // [rsp+78h] [rbp+Fh]

  v52 = 0LL;
  v47 = 0LL;
  v3 = a3;
  v4 = *a2;
  v56[0] = 0x100000;
  v56[1] = 0x100000;
  v56[2] = 0x200000;
  v56[3] = 0x40000000;
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
                                  &v52);
    v12 = -1;
    v13 = (__int64)v11;
    if ( v11 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(BugCheckParameter2 + 8), v11);
      v14 = v52;
      if ( v52 != v13 )
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
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v20 = (v37 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v37;
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
          ExfTryToWakePushLock(BugCheckParameter2);
        v49[0] = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v38 = ++CurrentThread->AbAllocationRegionCount;
        v39 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v20 = !_BitScanReverse((unsigned int *)&v40, v39);
        v48 = v40;
        if ( v20 )
          goto LABEL_66;
        while ( 1 )
        {
          v41 = (__int64)&CurrentThread->LockEntries[v40];
          v39 &= ~(1 << v40);
          if ( (*(_BYTE *)(v41 + 26) & 1) != 0
            && (*(_DWORD *)(v41 + 32) & 1) == 0
            && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v41 + 40) == SessionId )
          {
            *(_BYTE *)(v41 + 26) &= ~1u;
            if ( *(_QWORD *)(v41 + 32) )
              break;
          }
          v20 = !_BitScanReverse((unsigned int *)&v40, v39);
          v48 = v40;
          if ( v20 )
            goto LABEL_66;
        }
        if ( !v41 )
        {
LABEL_66:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v41 + 32) |= 2u;
          if ( *(__int64 *)(v41 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v41);
          v49[0] = *(_DWORD *)(v41 + 88) & 0x1FFFF;
          *(_DWORD *)(v41 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v41 + 25) &= ~1u;
          *(_QWORD *)(v41 + 32) = 0LL;
          v42 = 1 << ((signed __int64)(v41 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v38 == 1 )
            CurrentThread->AbEntrySummary |= v42;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v42);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, v49);
        v20 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v20
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v44, v43, v45, v46);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v43, v45, (__int64)v46);
      }
      v13 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
      if ( !v13 )
        return v47;
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
    v47 = v15;
    if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v20 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
      }
      __writecr8((unsigned __int8)v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v50 = 0;
      v17 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        v12 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
      --v17->SpecialApcDisable;
      v18 = ++v17->AbAllocationRegionCount;
      v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        v49[1] = v21;
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
              v50 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v17, BugCheckParameter2, &v50);
      v20 = v17->SpecialApcDisable++ == -1;
      if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
        KiCheckForKernelApcDelivery(v25, v24, v26, v27);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v24, v26, (__int64)v27);
    }
    return v47;
  }
  if ( a3 <= (unsigned int)v56[((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 3] )
    v3 = (unsigned int)v56[((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 46) >> 1) & 3];
  v51 = v4 - ((v3 - 1) & (v3 + v4 - 1)) + v3 - 1;
  result = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v51);
  v47 = result;
  if ( result )
  {
    v8 = *(_BYTE *)(BugCheckParameter2 + 44);
    v53 = 0LL;
    BYTE1(v53) = v8;
    v55 = v51 >> 20;
    v54 = 0LL;
    LOBYTE(v53) = 5;
    if ( !RtlpHpVaMgrRangeCreate(BugCheckParameter2, result, &v53) )
    {
      RtlpHpEnvFreeVA((unsigned __int64 *)&v47, &v51, 0x8000);
      return 0LL;
    }
    *a2 = v51;
    return v47;
  }
  return result;
}
