/*
 * XREFs of RtlpHpHeapExtendContext @ 0x14031DA7C
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x14031DA60 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14023C5AC (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpAllocVA @ 0x1402B11F0 (RtlpHpAllocVA.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x14031DDF4 (RtlpHpAcquireReleaseLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpHpMetadataCommit @ 0x1403C6CD4 (RtlpHpMetadataCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int SessionId; // edx
  unsigned __int8 v32; // r15
  unsigned int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // rdi
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  struct _KTHREAD *v47; // rbx
  unsigned __int8 v48; // r14
  unsigned int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // rdi
  int v52; // ecx
  unsigned int v53; // edx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  int v61; // edx
  _DWORD *v62; // r9
  _DWORD v63[2]; // [rsp+30h] [rbp-39h] BYREF
  int v64; // [rsp+38h] [rbp-31h] BYREF
  size_t v65; // [rsp+40h] [rbp-29h] BYREF
  void *v66; // [rsp+48h] [rbp-21h] BYREF
  __int128 v67; // [rsp+60h] [rbp-9h] BYREF
  __int128 v68[5]; // [rsp+70h] [rbp+7h] BYREF
  int v70; // [rsp+E0h] [rbp+77h] BYREF
  int v71; // [rsp+E8h] [rbp+7Fh]

  v2 = (unsigned __int64)(a1 + 56);
  v65 = 0LL;
  v3 = a2;
  v66 = 0LL;
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
          ExfTryToWakePushLock(v2);
        v70 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v32 = ++CurrentThread->AbAllocationRegionCount;
        v33 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v21 = !_BitScanReverse((unsigned int *)&v34, v33);
        if ( v21 )
          goto LABEL_55;
        while ( 1 )
        {
          v35 = (__int64)&CurrentThread->LockEntries[v34];
          v33 &= ~(1 << v34);
          if ( (*(_BYTE *)(v35 + 26) & 1) != 0
            && (*(_DWORD *)(v35 + 32) & 1) == 0
            && (*(_QWORD *)(v35 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v35 + 40) == SessionId )
          {
            *(_BYTE *)(v35 + 26) &= ~1u;
            if ( *(_QWORD *)(v35 + 32) )
              break;
          }
          v21 = !_BitScanReverse((unsigned int *)&v34, v33);
          if ( v21 )
            goto LABEL_55;
        }
        if ( !v35 )
        {
LABEL_55:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v35 + 32) |= 2u;
          if ( *(__int64 *)(v35 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v35);
          v36 = *(_DWORD *)(v35 + 88) & 0x1FFFF;
          v37 = *(_DWORD *)(v35 + 88) & 0xFFFE0000;
          *(_BYTE *)(v35 + 25) &= ~1u;
          v70 = v36;
          *(_DWORD *)(v35 + 88) = v37;
          *(_QWORD *)(v35 + 32) = 0LL;
          v38 = (signed __int64)(v35 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v32 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v38;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v38);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v70);
        v21 = CurrentThread->SpecialApcDisable++ == -1;
        if ( !v21 )
          goto LABEL_28;
LABEL_26:
        if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          KiCheckForKernelApcDelivery(v28);
LABEL_28:
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v27, v29, v30);
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
            v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v21 = (v42 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v42;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    v12 = *(_OWORD *)a1;
    v66 = (void *)*((_QWORD *)a1 + 30);
    v13 = (v9 - v10 + 4095 + v3) & 0xFFFFFFFFFFFFF000uLL;
    v65 = v13;
    if ( (*((_BYTE *)a1 + 30) & 1) != 0 )
    {
      v67 = v12;
      v14 = RtlpHpMetadataCommit((_DWORD)a1, v10, v13, (unsigned int)&v67, 1);
    }
    else
    {
      v68[0] = v12;
      v14 = RtlpHpAllocVA(&v66, &v65, 0LL, 4096, 4, v68);
      v13 = v65;
    }
    v15 = v14 < 0;
    v16 = *a1;
    if ( v15 )
      break;
    *((_QWORD *)a1 + 30) += v13;
    if ( (v16 & 1) == 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v2);
      v63[0] = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
        v18 = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        v18 = -1;
      --CurrentThread->SpecialApcDisable;
      v19 = ++CurrentThread->AbAllocationRegionCount;
      v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      v21 = !_BitScanReverse((unsigned int *)&v22, v20);
      v71 = v22;
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
        v71 = v22;
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
        v63[0] = v24;
        *(_DWORD *)(v23 + 88) = v25;
        *(_QWORD *)(v23 + 32) = 0LL;
        v26 = (signed __int64)(v23 - (unsigned __int64)CurrentThread->LockEntries) / 96;
        if ( v19 == 1 )
          CurrentThread->AbEntrySummary |= 1 << v26;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
      }
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, v63);
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
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v21 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v44);
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
        v59 = KeGetCurrentIrql();
        if ( v59 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v59 >= 2u )
        {
          v60 = KeGetCurrentPrcb();
          v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v62 = v60->SchedulerAssist;
          v21 = (v61 & v62[5]) == 0;
          v62[5] &= v61;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
    }
    __writecr8(v11);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    v64 = 0;
    v47 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      v5 = MmGetSessionIdEx((__int64)v47->ApcState.Process);
    --v47->SpecialApcDisable;
    v48 = ++v47->AbAllocationRegionCount;
    v49 = ((char)v47->AbEntrySummary | (char)v47->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v21 = !_BitScanReverse((unsigned int *)&v50, v49);
      v63[1] = v50;
      if ( v21 )
        break;
      v51 = (__int64)&v47->LockEntries[v50];
      v49 &= ~(1 << v50);
      if ( (*(_BYTE *)(v51 + 26) & 1) != 0
        && (*(_DWORD *)(v51 + 32) & 1) == 0
        && (*(_QWORD *)(v51 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v51 + 40) == v5 )
      {
        *(_BYTE *)(v51 + 26) &= ~1u;
        if ( *(_QWORD *)(v51 + 32) )
        {
          if ( v51 )
          {
            *(_BYTE *)(v51 + 32) |= 2u;
            if ( *(__int64 *)(v51 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v51);
            v52 = *(_DWORD *)(v51 + 88) & 0x1FFFF;
            v53 = *(_DWORD *)(v51 + 88) & 0xFFFE0000;
            *(_BYTE *)(v51 + 25) &= ~1u;
            v64 = v52;
            *(_DWORD *)(v51 + 88) = v53;
            *(_QWORD *)(v51 + 32) = 0LL;
            v54 = (signed __int64)(v51 - (unsigned __int64)v47->LockEntries) / 96;
            if ( v48 == 1 )
              v47->AbEntrySummary |= 1 << v54;
            else
              _InterlockedOr8((volatile signed __int8 *)&v47->AbOrphanedEntrySummary, 1 << v54);
            goto LABEL_93;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v47->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v47, v2, v5, 0LL);
LABEL_93:
    --v47->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v47, v2, &v64);
    v21 = v47->SpecialApcDisable++ == -1;
    if ( v21 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
      KiCheckForKernelApcDelivery(v56);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v55, v57, v58);
  }
  return v6;
}
