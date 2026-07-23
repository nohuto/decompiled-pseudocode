/*
 * XREFs of RtlpHpHeapExtendContext @ 0x14035B66C
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x14035B650 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpAllocVA @ 0x1402581C0 (RtlpHpAllocVA.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402CF3DC (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14035B9E4 (RtlpHpAcquireReleaseLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x1403C7AE4 (RtlpHpMetadataCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(int *a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned int v5; // r13d
  signed __int64 v6; // r15
  KIRQL v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int128 v12; // xmm0
  unsigned __int64 v13; // rdi
  int v14; // eax
  bool v15; // sf
  int v16; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v18; // edx
  unsigned __int8 v19; // r15
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int SessionId; // edx
  unsigned __int8 v29; // r15
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  struct _KTHREAD *v44; // rbx
  unsigned __int8 v45; // r14
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rdi
  int v49; // ecx
  unsigned int v50; // edx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  int v55; // edx
  _DWORD *v56; // r9
  _DWORD v57[2]; // [rsp+30h] [rbp-39h] BYREF
  int v58; // [rsp+38h] [rbp-31h] BYREF
  size_t v59; // [rsp+40h] [rbp-29h] BYREF
  void *v60; // [rsp+48h] [rbp-21h] BYREF
  __int128 v61; // [rsp+60h] [rbp-9h] BYREF
  __int128 v62[5]; // [rsp+70h] [rbp+7h] BYREF
  int v64; // [rsp+E0h] [rbp+77h] BYREF
  int v65; // [rsp+E8h] [rbp+7Fh]

  v2 = (unsigned __int64)(a1 + 56);
  v59 = 0LL;
  v3 = a2;
  v60 = 0LL;
  RtlpHpAcquireReleaseLockExclusive((ULONG_PTR)(a1 + 56));
  v5 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)a1 + 29);
        if ( (unsigned __int64)(v6 + v3) > *((_QWORD *)a1 + 30) )
          break;
        if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 29, v6 + v3, v6) )
          return v6;
      }
      v8 = RtlpHpAcquireLockExclusive((volatile LONG *)v2, *a1 & 1);
      v9 = *((_QWORD *)a1 + 29);
      v10 = *((_QWORD *)a1 + 30);
      v11 = v8;
      if ( v9 + v3 > v10 )
        break;
      if ( (*a1 & 1) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v2);
        v64 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v29 = ++CurrentThread->AbAllocationRegionCount;
        v30 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v21 = !_BitScanReverse((unsigned int *)&v31, v30);
        if ( v21 )
          goto LABEL_55;
        while ( 1 )
        {
          v32 = (__int64)&CurrentThread->LockEntries[v31];
          v30 &= ~(1 << v31);
          if ( (*(_BYTE *)(v32 + 26) & 1) != 0
            && (*(_DWORD *)(v32 + 32) & 1) == 0
            && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v32 + 40) == SessionId )
          {
            *(_BYTE *)(v32 + 26) &= ~1u;
            if ( *(_QWORD *)(v32 + 32) )
              break;
          }
          v21 = !_BitScanReverse((unsigned int *)&v31, v30);
          if ( v21 )
            goto LABEL_55;
        }
        if ( !v32 )
        {
LABEL_55:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v32 + 32) |= 2u;
          if ( *(__int64 *)(v32 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
          v33 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
          v34 = *(_DWORD *)(v32 + 88) & 0xFFFE0000;
          *(_BYTE *)(v32 + 25) &= ~1u;
          v64 = v33;
          *(_DWORD *)(v32 + 88) = v34;
          *(_QWORD *)(v32 + 32) = 0LL;
          v35 = (signed __int64)(v32 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v29 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v35;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v35);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v64);
        v21 = CurrentThread->SpecialApcDisable++ == -1;
        if ( !v21 )
          goto LABEL_28;
LABEL_26:
        if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          KiCheckForKernelApcDelivery(v27);
LABEL_28:
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_29;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v21 = (v39 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v39;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    v12 = *(_OWORD *)a1;
    v60 = (void *)*((_QWORD *)a1 + 30);
    v13 = (v9 - v10 + 4095 + v3) & 0xFFFFFFFFFFFFF000uLL;
    v59 = v13;
    if ( (*((_BYTE *)a1 + 30) & 1) != 0 )
    {
      v61 = v12;
      v14 = RtlpHpMetadataCommit((_DWORD)a1, v10, v13, (unsigned int)&v61, 1);
    }
    else
    {
      v62[0] = v12;
      v14 = RtlpHpAllocVA(&v60, &v59, 0LL, 4096, 4, v62);
      v13 = v59;
    }
    v15 = v14 < 0;
    v16 = *a1;
    if ( v15 )
      break;
    *((_QWORD *)a1 + 30) += v13;
    if ( (v16 & 1) == 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v2);
      v57[0] = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
        v18 = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        v18 = -1;
      --CurrentThread->SpecialApcDisable;
      v19 = ++CurrentThread->AbAllocationRegionCount;
      v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      v21 = !_BitScanReverse((unsigned int *)&v22, v20);
      v65 = v22;
      if ( v21 )
        goto LABEL_35;
      while ( 1 )
      {
        v23 = (__int64)&CurrentThread->LockEntries[v22];
        v20 &= ~(1 << v22);
        if ( (*(_BYTE *)(v23 + 26) & 1) != 0
          && (*(_DWORD *)(v23 + 32) & 1) == 0
          && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v23 + 40) == v18 )
        {
          *(_BYTE *)(v23 + 26) &= ~1u;
          if ( *(_QWORD *)(v23 + 32) )
            break;
        }
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        v65 = v22;
        if ( v21 )
          goto LABEL_35;
      }
      if ( !v23 )
      {
LABEL_35:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, v18, 0LL);
      }
      else
      {
        *(_BYTE *)(v23 + 32) |= 2u;
        if ( *(__int64 *)(v23 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
        v24 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
        v25 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
        *(_BYTE *)(v23 + 25) &= ~1u;
        v57[0] = v24;
        *(_DWORD *)(v23 + 88) = v25;
        *(_QWORD *)(v23 + 32) = 0LL;
        v26 = (signed __int64)(v23 - (unsigned __int64)CurrentThread->LockEntries) / 96;
        if ( v19 == 1 )
          CurrentThread->AbEntrySummary |= 1 << v26;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
      }
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, v57);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( !v21 )
        goto LABEL_28;
      goto LABEL_26;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v21 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
    }
    __writecr8(v11);
LABEL_29:
    v3 = a2;
  }
  v6 = 0LL;
  if ( (v16 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v53 = KeGetCurrentIrql();
        if ( v53 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v53 >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v56 = v54->SchedulerAssist;
          v21 = (v55 & v56[5]) == 0;
          v56[5] &= v55;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
    }
    __writecr8(v11);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    v58 = 0;
    v44 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      v5 = MmGetSessionIdEx((__int64)v44->ApcState.Process);
    --v44->SpecialApcDisable;
    v45 = ++v44->AbAllocationRegionCount;
    v46 = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v21 = !_BitScanReverse((unsigned int *)&v47, v46);
      v57[1] = v47;
      if ( v21 )
        break;
      v48 = (__int64)&v44->LockEntries[v47];
      v46 &= ~(1 << v47);
      if ( (*(_BYTE *)(v48 + 26) & 1) != 0
        && (*(_DWORD *)(v48 + 32) & 1) == 0
        && (*(_QWORD *)(v48 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v48 + 40) == v5 )
      {
        *(_BYTE *)(v48 + 26) &= ~1u;
        if ( *(_QWORD *)(v48 + 32) )
        {
          if ( v48 )
          {
            *(_BYTE *)(v48 + 32) |= 2u;
            if ( *(__int64 *)(v48 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v48);
            v49 = *(_DWORD *)(v48 + 88) & 0x1FFFF;
            v50 = *(_DWORD *)(v48 + 88) & 0xFFFE0000;
            *(_BYTE *)(v48 + 25) &= ~1u;
            v58 = v49;
            *(_DWORD *)(v48 + 88) = v50;
            *(_QWORD *)(v48 + 32) = 0LL;
            v51 = (signed __int64)(v48 - (unsigned __int64)v44->LockEntries) / 96;
            if ( v45 == 1 )
              v44->AbEntrySummary |= 1 << v51;
            else
              _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, 1 << v51);
            goto LABEL_93;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v44, v2, v5, 0LL);
LABEL_93:
    --v44->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v44, v2, &v58);
    v21 = v44->SpecialApcDisable++ == -1;
    if ( v21 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
      KiCheckForKernelApcDelivery(v52);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v6;
}
