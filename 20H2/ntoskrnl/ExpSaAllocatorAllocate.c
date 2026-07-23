/*
 * XREFs of ExpSaAllocatorAllocate @ 0x1403910FC
 * Callers:
 *     ExSaAllocate @ 0x140391084 (ExSaAllocate.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14039156C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x1405B8980 (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v3; // r12d
  char v4; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Memory; // rbx
  __int64 v7; // rax
  unsigned int v8; // r13d
  char v9; // cl
  __int64 v10; // r14
  int SessionId; // eax
  __int64 v12; // rcx
  bool v13; // zf
  __int64 *v14; // r14
  __int64 *v15; // rsi
  struct _KTHREAD *v17; // rsi
  unsigned __int8 v18; // r15
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 *v28; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v30; // r15
  struct _KTHREAD *v31; // rsi
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 v33; // al
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 *v37; // rcx
  int v38; // [rsp+34h] [rbp-1Ch] BYREF
  int v39; // [rsp+38h] [rbp-18h]
  int v40[5]; // [rsp+3Ch] [rbp-14h] BYREF
  int v42; // [rsp+A8h] [rbp+58h] BYREF

  v3 = a2;
  v38 = 0;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  Memory = -1LL;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  LOBYTE(v7) = CurrentThread->AbEntrySummary;
  v8 = -1;
  if ( !(_BYTE)v7 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v10 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
      goto LABEL_46;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v7) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  v9 = v7;
  _BitScanForward((unsigned int *)&v7, (unsigned __int8)v7);
  CurrentThread->AbEntrySummary = v9 & ~(1 << v7);
  v10 = (__int64)&CurrentThread->LockEntries[v7];
  if ( v10 )
  {
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
LABEL_46:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v38);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v14 = (__int64 *)(BugCheckParameter2 + 8);
  v15 = *(__int64 **)(BugCheckParameter2 + 8);
  while ( 1 )
  {
    if ( v15 != v14 )
    {
      while ( 1 )
      {
        Memory = ExpSaPageGroupAllocateMemory(v15, v3);
        if ( Memory != -1 )
          break;
        v15 = (__int64 *)*v15;
        if ( v15 == v14 )
          goto LABEL_48;
      }
      if ( !*((_DWORD *)v15 + 9) )
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
      goto LABEL_20;
    }
LABEL_48:
    v24 = (__int64 *)*v14;
    if ( !v4 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      v30 = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v40[0] = 0;
      v31 = KeGetCurrentThread();
      --v31->SpecialApcDisable;
      if ( ++v31->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v31, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
      AbEntrySummary = v31->AbEntrySummary;
      v39 = 0;
      if ( !AbEntrySummary )
      {
        if ( !v31->AbOrphanedEntrySummary )
        {
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(v31, BugCheckParameter2);
          goto LABEL_75;
        }
        v33 = v31->AbOrphanedEntrySummary;
        v31->AbOrphanedEntrySummary = 0;
        AbEntrySummary = v33 | v31->AbEntrySummary;
      }
      _BitScanForward((unsigned int *)&v34, AbEntrySummary);
      v39 = v34;
      v31->AbEntrySummary = AbEntrySummary & ~(1 << v34);
      v30 = (__int64)&v31->LockEntries[v34];
      if ( v30 )
      {
        if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
        {
          v35 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
        }
        else
        {
          v35 = -1;
        }
        *(_DWORD *)(v30 + 40) = v35;
        *(_QWORD *)(v30 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_78;
      }
LABEL_75:
      _interlockedbittestandset((volatile signed __int32 *)&v31->116 + 1, 0x10u);
LABEL_78:
      --v31->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v31, BugCheckParameter2, v40);
      v13 = v31->SpecialApcDisable++ == -1;
      if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
        KiCheckForKernelApcDelivery(v36);
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v30, BugCheckParameter2);
      if ( v30 )
        *(_BYTE *)(v30 + 26) |= 1u;
    }
    v15 = (__int64 *)*v14;
    v4 = 1;
    if ( v24 == (__int64 *)*v14 )
      break;
    v3 = a2;
  }
  v25 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v25) = v25 & 1;
  v26 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v25);
  v27 = v26;
  if ( v26 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v26, a2);
    if ( *(_DWORD *)(v27 + 36) )
    {
      *(_DWORD *)(v27 + 40) = 0;
      v28 = (__int64 *)*v14;
      if ( *(__int64 **)(*v14 + 8) == v14 )
      {
        *(_QWORD *)v27 = v28;
        *(_QWORD *)(v27 + 8) = v14;
        v28[1] = v27;
        *v14 = v27;
        goto LABEL_20;
      }
LABEL_89:
      __fastfail(3u);
    }
    *(_DWORD *)(v27 + 40) = 1;
    v37 = *(__int64 **)(BugCheckParameter2 + 32);
    if ( *v37 != BugCheckParameter2 + 24 )
      goto LABEL_89;
    *(_QWORD *)v27 = BugCheckParameter2 + 24;
    *(_QWORD *)(v27 + 8) = v37;
    *v37 = v27;
    *(_QWORD *)(BugCheckParameter2 + 32) = v27;
LABEL_20:
    if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
    {
      if ( v4 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      {
        v4 = 1;
        ExpSaAllocatorOptimizeList(BugCheckParameter2);
        goto LABEL_21;
      }
LABEL_22:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      return Memory;
    }
LABEL_21:
    if ( !v4 )
      goto LABEL_22;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v42 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v8 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  v18 = ++v17->AbAllocationRegionCount;
  v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v20, v19);
    if ( v13 )
      break;
    v21 = (__int64)&v17->LockEntries[v20];
    v19 &= ~(1 << v20);
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v21 + 40) == v8 )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
      {
        if ( v21 )
        {
          *(_BYTE *)(v21 + 32) |= 2u;
          if ( *(__int64 *)(v21 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
          v42 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
          *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v21 + 25) &= ~1u;
          *(_QWORD *)(v21 + 32) = 0LL;
          v22 = (signed __int64)(v21 - (unsigned __int64)v17->LockEntries) / 96;
          if ( v18 == 1 )
            v17->AbEntrySummary |= 1 << v22;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v22);
          goto LABEL_43;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, BugCheckParameter2, v8, 0LL);
LABEL_43:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, BugCheckParameter2, &v42);
  v13 = v17->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(v23);
  return Memory;
}
