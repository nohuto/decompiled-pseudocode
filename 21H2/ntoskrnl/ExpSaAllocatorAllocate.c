/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14029FDC4
 * Callers:
 *     ExSaAllocate @ 0x1402A012C (ExSaAllocate.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14029FB3C (ExpSaPageGroupAllocateMemory.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpSaAllocatorOptimizeList @ 0x1403A0398 (ExpSaAllocatorOptimizeList.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Memory; // rdi
  unsigned int v5; // r13d
  char v7; // r12
  __int64 v8; // r14
  unsigned int AbEntrySummary; // eax
  __int64 v10; // rdx
  int SessionId; // eax
  __int64 *v12; // r15
  __int64 v13; // r14
  struct _KTHREAD *v15; // rbp
  __int64 v16; // r8
  char *p_Process; // rbx
  unsigned int v18; // ecx
  ULONG_PTR v19; // rdx
  int v20; // r8d
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 v26; // rax
  struct _KTHREAD *v27; // rbp
  __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 *v32; // rcx

  CurrentThread = KeGetCurrentThread();
  Memory = -1LL;
  v5 = a2;
  v7 = 0;
  v8 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v10, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    _enable();
    v8 = (__int64)(&CurrentThread[1].Process + 12 * v10);
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v8 + 8) = SessionId;
    *(_QWORD *)v8 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v8, BugCheckParameter2);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v12 = (__int64 *)(BugCheckParameter2 + 8);
  v13 = *(_QWORD *)(BugCheckParameter2 + 8);
  while ( 1 )
  {
    if ( (__int64 *)v13 != v12 )
    {
      while ( 1 )
      {
        Memory = ExpSaPageGroupAllocateMemory(v13, v5, a3);
        if ( Memory != -1 )
          break;
        v13 = *(_QWORD *)v13;
        if ( (__int64 *)v13 == v12 )
          goto LABEL_35;
      }
      if ( !*(_DWORD *)(v13 + 36) )
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
      goto LABEL_14;
    }
LABEL_35:
    v21 = *v12;
    if ( !v7 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v27 = KeGetCurrentThread();
      v28 = 0LL;
      _disable();
      v29 = v27->AbEntrySummary;
      if ( v27->AbEntrySummary || (v29 = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)v27)) != 0 )
      {
        _BitScanForward((unsigned int *)&v30, v29);
        v27->AbEntrySummary = v29 & ~(1 << v30);
        _enable();
        v28 = (__int64)(&v27[1].Process + 12 * v30);
        if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
          v31 = -1;
        else
          v31 = MmGetSessionIdEx((__int64)v27->ApcState.Process);
        *(_DWORD *)(v28 + 8) = v31;
        *(_QWORD *)v28 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v28, BugCheckParameter2);
      if ( v28 )
        *(_BYTE *)(v28 + 18) = 1;
    }
    v13 = *v12;
    v7 = 1;
    if ( v21 == *v12 )
      break;
    v5 = a2;
  }
  v22 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v22) = v22 & 1;
  v23 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v22);
  v25 = v23;
  if ( v23 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v23, a2, v24);
    if ( *(_DWORD *)(v25 + 36) )
    {
      *(_DWORD *)(v25 + 40) = 0;
      v26 = *v12;
      if ( *(__int64 **)(*v12 + 8) == v12 )
      {
        *(_QWORD *)(v25 + 8) = v12;
        *(_QWORD *)v25 = v26;
        *(_QWORD *)(v26 + 8) = v25;
        *v12 = v25;
        goto LABEL_14;
      }
LABEL_65:
      __fastfail(3u);
    }
    *(_DWORD *)(v25 + 40) = 1;
    v32 = *(__int64 **)(BugCheckParameter2 + 32);
    if ( *v32 != BugCheckParameter2 + 24 )
      goto LABEL_65;
    *(_QWORD *)v25 = BugCheckParameter2 + 24;
    *(_QWORD *)(v25 + 8) = v32;
    *v32 = v25;
    *(_QWORD *)(BugCheckParameter2 + 32) = v25;
LABEL_14:
    if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
    {
      if ( !v7 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
        goto LABEL_16;
      ExpSaAllocatorOptimizeList(BugCheckParameter2);
    }
    else if ( !v7 )
    {
LABEL_16:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      return Memory;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v15 = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
    v16 = (unsigned int)MmGetSessionIdEx((__int64)v15->ApcState.Process);
  else
    v16 = 0xFFFFFFFFLL;
  _disable();
  p_Process = (char *)&v15[1].Process;
  v18 = 0;
  v19 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v19
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != (_DWORD)v16 )
  {
    ++v18;
    p_Process += 96;
    if ( v18 >= 6 )
      goto LABEL_43;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v19, v16);
      _disable();
    }
    v20 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v15->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v20 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v15, BugCheckParameter2, v20);
    return Memory;
  }
LABEL_43:
  if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, BugCheckParameter2, (unsigned int)v16, 0LL);
  _enable();
  return Memory;
}
