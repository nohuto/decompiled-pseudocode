/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14038E09C
 * Callers:
 *     ExSaAllocate @ 0x14038E024 (ExSaAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14038E50C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038E8B8 (ExpSaPageGroupDescriptorAllocate.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x1405B4700 (ExpSaAllocatorOptimizeList.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // r9
  bool v16; // zf
  __int64 *v17; // r14
  __int64 *v18; // rsi
  struct _KTHREAD *v20; // rsi
  unsigned __int8 v21; // r15
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // r9
  __int64 *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 *v34; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v36; // r15
  struct _KTHREAD *v37; // rsi
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 v39; // al
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _DWORD *v45; // r9
  __int64 *v46; // rcx
  int v47; // [rsp+34h] [rbp-1Ch] BYREF
  int v48; // [rsp+38h] [rbp-18h]
  int v49[5]; // [rsp+3Ch] [rbp-14h] BYREF
  int v51; // [rsp+A8h] [rbp+58h] BYREF

  v3 = a2;
  v47 = 0;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v47);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12, v14, v15);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v17 = (__int64 *)(BugCheckParameter2 + 8);
  v18 = *(__int64 **)(BugCheckParameter2 + 8);
  while ( 1 )
  {
    if ( v18 != v17 )
    {
      while ( 1 )
      {
        Memory = ExpSaPageGroupAllocateMemory(v18, v3);
        if ( Memory != -1 )
          break;
        v18 = (__int64 *)*v18;
        if ( v18 == v17 )
          goto LABEL_48;
      }
      if ( !*((_DWORD *)v18 + 9) )
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
      goto LABEL_20;
    }
LABEL_48:
    v30 = (__int64 *)*v17;
    if ( !v4 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      v36 = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v49[0] = 0;
      v37 = KeGetCurrentThread();
      --v37->SpecialApcDisable;
      if ( ++v37->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v37, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
      AbEntrySummary = v37->AbEntrySummary;
      v48 = 0;
      if ( !AbEntrySummary )
      {
        if ( !v37->AbOrphanedEntrySummary )
        {
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(v37, BugCheckParameter2);
          goto LABEL_75;
        }
        v39 = v37->AbOrphanedEntrySummary;
        v37->AbOrphanedEntrySummary = 0;
        AbEntrySummary = v39 | v37->AbEntrySummary;
      }
      _BitScanForward((unsigned int *)&v40, AbEntrySummary);
      v48 = v40;
      v37->AbEntrySummary = AbEntrySummary & ~(1 << v40);
      v36 = (__int64)&v37->LockEntries[v40];
      if ( v36 )
      {
        if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
        {
          v41 = MmGetSessionIdEx((__int64)v37->ApcState.Process);
        }
        else
        {
          v41 = -1;
        }
        *(_DWORD *)(v36 + 40) = v41;
        *(_QWORD *)(v36 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_78;
      }
LABEL_75:
      _interlockedbittestandset((volatile signed __int32 *)&v37->116 + 1, 0x10u);
LABEL_78:
      --v37->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v37, BugCheckParameter2, v49);
      v16 = v37->SpecialApcDisable++ == -1;
      if ( v16 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
        KiCheckForKernelApcDelivery(v43, v42, v44, v45);
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v36, BugCheckParameter2);
      if ( v36 )
        *(_BYTE *)(v36 + 26) |= 1u;
    }
    v18 = (__int64 *)*v17;
    v4 = 1;
    if ( v30 == (__int64 *)*v17 )
      break;
    v3 = a2;
  }
  v31 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v31) = v31 & 1;
  v32 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v31);
  v33 = v32;
  if ( v32 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v32, a2);
    if ( *(_DWORD *)(v33 + 36) )
    {
      *(_DWORD *)(v33 + 40) = 0;
      v34 = (__int64 *)*v17;
      if ( *(__int64 **)(*v17 + 8) == v17 )
      {
        *(_QWORD *)v33 = v34;
        *(_QWORD *)(v33 + 8) = v17;
        v34[1] = v33;
        *v17 = v33;
        goto LABEL_20;
      }
LABEL_89:
      __fastfail(3u);
    }
    *(_DWORD *)(v33 + 40) = 1;
    v46 = *(__int64 **)(BugCheckParameter2 + 32);
    if ( *v46 != BugCheckParameter2 + 24 )
      goto LABEL_89;
    *(_QWORD *)v33 = BugCheckParameter2 + 24;
    *(_QWORD *)(v33 + 8) = v46;
    *v46 = v33;
    *(_QWORD *)(BugCheckParameter2 + 32) = v33;
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
    ExfTryToWakePushLock(BugCheckParameter2);
  v51 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v8 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  --v20->SpecialApcDisable;
  v21 = ++v20->AbAllocationRegionCount;
  v22 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v23, v22);
    if ( v16 )
      break;
    v24 = (__int64)&v20->LockEntries[v23];
    v22 &= ~(1 << v23);
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v24 + 40) == v8 )
    {
      *(_BYTE *)(v24 + 26) &= ~1u;
      if ( *(_QWORD *)(v24 + 32) )
      {
        if ( v24 )
        {
          *(_BYTE *)(v24 + 32) |= 2u;
          if ( *(__int64 *)(v24 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
          v51 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
          *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v24 + 25) &= ~1u;
          *(_QWORD *)(v24 + 32) = 0LL;
          v25 = (signed __int64)(v24 - (unsigned __int64)v20->LockEntries) / 96;
          if ( v21 == 1 )
            v20->AbEntrySummary |= 1 << v25;
          else
            _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v25);
          goto LABEL_43;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, BugCheckParameter2, v8, 0LL);
LABEL_43:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, BugCheckParameter2, &v51);
  v16 = v20->SpecialApcDisable++ == -1;
  if ( v16 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v27, v26, v28, v29);
  return Memory;
}
