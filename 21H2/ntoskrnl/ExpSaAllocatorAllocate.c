/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14039171C
 * Callers:
 *     ExSaAllocate @ 0x1403916A4 (ExSaAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140391B8C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x1405BA5F4 (ExpSaAllocatorOptimizeList.c)
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
  bool v12; // zf
  __int64 *v13; // r14
  __int64 *v14; // rsi
  struct _KTHREAD *v16; // rsi
  unsigned __int8 v17; // r15
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 *v26; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v28; // r15
  struct _KTHREAD *v29; // rsi
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 v31; // al
  __int64 v32; // rax
  int v33; // eax
  __int64 *v34; // rcx
  unsigned int v35; // [rsp+34h] [rbp-1Ch] BYREF
  int v36; // [rsp+38h] [rbp-18h]
  unsigned int v37[5]; // [rsp+3Ch] [rbp-14h] BYREF
  int v39; // [rsp+A8h] [rbp+58h] BYREF

  v3 = a2;
  v35 = 0;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v35);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, (_RTL_BALANCED_NODE *)v10, BugCheckParameter2);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v13 = (__int64 *)(BugCheckParameter2 + 8);
  v14 = *(__int64 **)(BugCheckParameter2 + 8);
  while ( 1 )
  {
    if ( v14 != v13 )
    {
      while ( 1 )
      {
        Memory = ExpSaPageGroupAllocateMemory(v14, v3);
        if ( Memory != -1 )
          break;
        v14 = (__int64 *)*v14;
        if ( v14 == v13 )
          goto LABEL_48;
      }
      if ( !*((_DWORD *)v14 + 9) )
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
      goto LABEL_20;
    }
LABEL_48:
    v22 = (__int64 *)*v13;
    if ( !v4 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      v28 = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v37[0] = 0;
      v29 = KeGetCurrentThread();
      --v29->SpecialApcDisable;
      if ( ++v29->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v29, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
      AbEntrySummary = v29->AbEntrySummary;
      v36 = 0;
      if ( !AbEntrySummary )
      {
        if ( !v29->AbOrphanedEntrySummary )
        {
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(v29, BugCheckParameter2);
          goto LABEL_75;
        }
        v31 = v29->AbOrphanedEntrySummary;
        v29->AbOrphanedEntrySummary = 0;
        AbEntrySummary = v31 | v29->AbEntrySummary;
      }
      _BitScanForward((unsigned int *)&v32, AbEntrySummary);
      v36 = v32;
      v29->AbEntrySummary = AbEntrySummary & ~(1 << v32);
      v28 = (__int64)&v29->LockEntries[v32];
      if ( v28 )
      {
        if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
        {
          v33 = MmGetSessionIdEx((__int64)v29->ApcState.Process);
        }
        else
        {
          v33 = -1;
        }
        *(_DWORD *)(v28 + 40) = v33;
        *(_QWORD *)(v28 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_78;
      }
LABEL_75:
      _interlockedbittestandset((volatile signed __int32 *)&v29->116 + 1, 0x10u);
LABEL_78:
      --v29->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v29, BugCheckParameter2, v37);
      v12 = v29->SpecialApcDisable++ == -1;
      if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
        KiCheckForKernelApcDelivery();
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)BugCheckParameter2,
          (_RTL_BALANCED_NODE *)v28,
          BugCheckParameter2);
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
    }
    v14 = (__int64 *)*v13;
    v4 = 1;
    if ( v22 == (__int64 *)*v13 )
      break;
    v3 = a2;
  }
  v23 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v23) = v23 & 1;
  v24 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v23);
  v25 = v24;
  if ( v24 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v24, a2);
    if ( *(_DWORD *)(v25 + 36) )
    {
      *(_DWORD *)(v25 + 40) = 0;
      v26 = (__int64 *)*v13;
      if ( *(__int64 **)(*v13 + 8) == v13 )
      {
        *(_QWORD *)v25 = v26;
        *(_QWORD *)(v25 + 8) = v13;
        v26[1] = v25;
        *v13 = v25;
        goto LABEL_20;
      }
LABEL_89:
      __fastfail(3u);
    }
    *(_DWORD *)(v25 + 40) = 1;
    v34 = *(__int64 **)(BugCheckParameter2 + 32);
    if ( *v34 != BugCheckParameter2 + 24 )
      goto LABEL_89;
    *(_QWORD *)v25 = BugCheckParameter2 + 24;
    *(_QWORD *)(v25 + 8) = v34;
    *v34 = v25;
    *(_QWORD *)(BugCheckParameter2 + 32) = v25;
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
  v39 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v8 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v17 = ++v16->AbAllocationRegionCount;
  v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v19, v18);
    if ( v12 )
      break;
    v20 = (__int64)&v16->LockEntries[v19];
    v18 &= ~(1 << v19);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == v8 )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
      {
        if ( v20 )
        {
          *(_BYTE *)(v20 + 32) |= 2u;
          if ( *(__int64 *)(v20 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
          v39 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
          *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v20 + 25) &= ~1u;
          *(_QWORD *)(v20 + 32) = 0LL;
          v21 = (signed __int64)(v20 - (unsigned __int64)v16->LockEntries) / 96;
          if ( v17 == 1 )
            v16->AbEntrySummary |= 1 << v21;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v21);
          goto LABEL_43;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v16, BugCheckParameter2, v8, 0LL);
LABEL_43:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, BugCheckParameter2, (unsigned int *)&v39);
  v12 = v16->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  return Memory;
}
