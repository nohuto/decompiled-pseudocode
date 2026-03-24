/*
 * XREFs of ExpSaAllocatorAllocate @ 0x1403915CC
 * Callers:
 *     ExSaAllocate @ 0x140391554 (ExSaAllocate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402F2EC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140391A3C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x1405BA3C4 (ExpSaAllocatorOptimizeList.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v3; // r12d
  char v4; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Memory; // rbx
  __int64 v7; // rax
  __int64 *v8; // r9
  unsigned int v9; // r13d
  char v10; // cl
  __int64 v11; // r14
  int SessionId; // eax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 *v15; // r14
  __int64 *v16; // rsi
  struct _KTHREAD *v18; // rsi
  unsigned __int8 v19; // r15
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 *v29; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v31; // r15
  _DWORD *v32; // r9
  struct _KTHREAD *v33; // rsi
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 v35; // al
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 *v39; // rcx
  int v40; // [rsp+34h] [rbp-1Ch] BYREF
  int v41; // [rsp+38h] [rbp-18h]
  int v42[5]; // [rsp+3Ch] [rbp-14h] BYREF
  int v44; // [rsp+A8h] [rbp+58h] BYREF

  v3 = a2;
  v40 = 0;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  Memory = -1LL;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  LOBYTE(v7) = CurrentThread->AbEntrySummary;
  v8 = MiState;
  v9 = -1;
  if ( !(_BYTE)v7 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
      goto LABEL_46;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v7) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  v10 = v7;
  _BitScanForward((unsigned int *)&v7, (unsigned __int8)v7);
  CurrentThread->AbEntrySummary = v10 & ~(1 << v7);
  v11 = (__int64)&CurrentThread->LockEntries[v7];
  if ( v11 )
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
    *(_DWORD *)(v11 + 40) = SessionId;
    *(_QWORD *)(v11 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
LABEL_46:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (__int64)&v40, v8);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v11, BugCheckParameter2);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v15 = (__int64 *)(BugCheckParameter2 + 8);
  v16 = *(__int64 **)(BugCheckParameter2 + 8);
  while ( 1 )
  {
    if ( v16 != v15 )
    {
      while ( 1 )
      {
        Memory = ExpSaPageGroupAllocateMemory(v16, v3);
        if ( Memory != -1 )
          break;
        v16 = (__int64 *)*v16;
        if ( v16 == v15 )
          goto LABEL_48;
      }
      if ( !*((_DWORD *)v16 + 9) )
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
      goto LABEL_20;
    }
LABEL_48:
    v25 = (__int64 *)*v15;
    if ( !v4 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      v31 = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v42[0] = 0;
      v33 = KeGetCurrentThread();
      --v33->SpecialApcDisable;
      if ( ++v33->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v33, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
      AbEntrySummary = v33->AbEntrySummary;
      v41 = 0;
      if ( !AbEntrySummary )
      {
        if ( !v33->AbOrphanedEntrySummary )
        {
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(v33, BugCheckParameter2);
          goto LABEL_75;
        }
        v35 = v33->AbOrphanedEntrySummary;
        v33->AbOrphanedEntrySummary = 0;
        AbEntrySummary = v35 | v33->AbEntrySummary;
      }
      _BitScanForward((unsigned int *)&v36, AbEntrySummary);
      v41 = v36;
      v33->AbEntrySummary = AbEntrySummary & ~(1 << v36);
      v31 = (__int64)&v33->LockEntries[v36];
      if ( v31 )
      {
        if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
        {
          v37 = MmGetSessionIdEx((__int64)v33->ApcState.Process);
        }
        else
        {
          v37 = -1;
        }
        *(_DWORD *)(v31 + 40) = v37;
        *(_QWORD *)(v31 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_78;
      }
LABEL_75:
      _interlockedbittestandset((volatile signed __int32 *)&v33->116 + 1, 0x10u);
LABEL_78:
      --v33->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v33, BugCheckParameter2, (__int64)v42, v32);
      v14 = v33->SpecialApcDisable++ == -1;
      if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
        KiCheckForKernelApcDelivery(v38);
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v31, BugCheckParameter2);
      if ( v31 )
        *(_BYTE *)(v31 + 26) |= 1u;
    }
    v16 = (__int64 *)*v15;
    v4 = 1;
    if ( v25 == (__int64 *)*v15 )
      break;
    v3 = a2;
  }
  v26 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v26) = v26 & 1;
  v27 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v26);
  v28 = v27;
  if ( v27 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v27, a2);
    if ( *(_DWORD *)(v28 + 36) )
    {
      *(_DWORD *)(v28 + 40) = 0;
      v29 = (__int64 *)*v15;
      if ( *(__int64 **)(*v15 + 8) == v15 )
      {
        *(_QWORD *)v28 = v29;
        *(_QWORD *)(v28 + 8) = v15;
        v29[1] = v28;
        *v15 = v28;
        goto LABEL_20;
      }
LABEL_89:
      __fastfail(3u);
    }
    *(_DWORD *)(v28 + 40) = 1;
    v39 = *(__int64 **)(BugCheckParameter2 + 32);
    if ( *v39 != BugCheckParameter2 + 24 )
      goto LABEL_89;
    *(_QWORD *)v28 = BugCheckParameter2 + 24;
    *(_QWORD *)(v28 + 8) = v39;
    *v39 = v28;
    *(_QWORD *)(BugCheckParameter2 + 32) = v28;
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
  v44 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v9 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  --v18->SpecialApcDisable;
  v19 = ++v18->AbAllocationRegionCount;
  v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v21, v20);
    if ( v14 )
      break;
    v22 = (__int64)&v18->LockEntries[v21];
    v20 &= ~(1 << v21);
    if ( (*(_BYTE *)(v22 + 26) & 1) != 0
      && (*(_DWORD *)(v22 + 32) & 1) == 0
      && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v22 + 40) == v9 )
    {
      *(_BYTE *)(v22 + 26) &= ~1u;
      if ( *(_QWORD *)(v22 + 32) )
      {
        if ( v22 )
        {
          *(_BYTE *)(v22 + 32) |= 2u;
          if ( *(__int64 *)(v22 + 32) < 0 )
            KiAbEntryRemoveFromTree(v22);
          v44 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
          *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v22 + 25) &= ~1u;
          *(_QWORD *)(v22 + 32) = 0LL;
          v23 = (signed __int64)(v22 - (unsigned __int64)v18->LockEntries) / 96;
          if ( v19 == 1 )
            v18->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v23);
          goto LABEL_43;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v18, BugCheckParameter2, v9, 0LL);
LABEL_43:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, BugCheckParameter2, (__int64)&v44, (_DWORD *)1);
  v14 = v18->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v24);
  return Memory;
}
