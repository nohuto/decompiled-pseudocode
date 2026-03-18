/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1403A0424
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1403A0398 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpSaBinaryArrayRemove @ 0x1403A0690 (ExpSaBinaryArrayRemove.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaPageGroupDescriptorFree(ULONG_PTR BugCheckParameter3)
{
  ULONG MaximumProcessorCount; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  int SessionId; // eax
  __int64 v11; // rdi
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  ULONG_PTR v14; // rbx
  struct _KTHREAD *v15; // rdi
  __int64 p_Process; // rbx
  unsigned int v17; // ecx
  int v19; // r9d

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = MaximumProcessorCount;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v7 = -1;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(
                           (__int64)&ExSaPageGroupDescriptorArrayLock,
                           (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v8, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    _enable();
    v4 = (__int64)(&CurrentThread[1].Process + 12 * v8);
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v4, (__int64)&ExSaPageGroupDescriptorArrayLock);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  if ( (_DWORD)v5 )
  {
    v11 = 0LL;
    do
    {
      v12 = *(_DWORD *)(BugCheckParameter3 + 32);
      _BitScanReverse(&v13, v12);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + ExSaPageArrays) + 8LL * (v13 - 2)) + 8LL * (v12 ^ (1 << v13)) + 8);
      ExpSaBinaryArrayRemove(*(_QWORD *)(v11 + ExSaPageArrays), v12);
      ExFreeHeapPool(v14);
      v11 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *(unsigned int *)(BugCheckParameter3 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExSaPageGroupDescriptorArrayLock);
  v15 = KeGetCurrentThread();
  if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock - qword_140C50630 < 0x8000000000LL )
    v7 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  _disable();
  p_Process = (__int64)&v15[1].Process;
  v17 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v7 )
  {
    ++v17;
    p_Process += 96LL;
    if ( v17 >= 6 )
      goto LABEL_23;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_23:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v7, 0LL);
    _enable();
    return ExFreeHeapPool(BugCheckParameter3);
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v19 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v15->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v19 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v15, (__int64)&ExSaPageGroupDescriptorArrayLock, v19);
  return ExFreeHeapPool(BugCheckParameter3);
}
