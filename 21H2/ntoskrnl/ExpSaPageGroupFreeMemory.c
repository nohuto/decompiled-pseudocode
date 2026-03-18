/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x140361290
 * Callers:
 *     ExpSaAllocatorFree @ 0x140360FD4 (ExpSaAllocatorFree.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  unsigned int AbEntrySummary; // eax
  unsigned int v10; // r14d
  __int64 v11; // rdx
  int SessionId; // eax
  bool v13; // bp
  struct _KTHREAD *v14; // rsi
  __int64 p_Process; // rbx
  unsigned int v16; // ecx
  int v17; // r9d

  v3 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = a3;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v10 = -1;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v3, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v11, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v11);
    _enable();
    v5 = (__int64)(&CurrentThread[1].Process + 12 * v11);
    if ( v3 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v5, v3);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v6);
  *(_DWORD *)(a1 + 36) += v6;
  v13 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v14 = KeGetCurrentThread();
  if ( v3 - qword_140C50630 < 0x8000000000LL )
    v10 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  _disable();
  p_Process = (__int64)&v14[1].Process;
  v16 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v10 )
  {
    ++v16;
    p_Process += 96LL;
    if ( v16 >= 6 )
      goto LABEL_25;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v17 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v14->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v17 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v14, v3, v17);
    return v13;
  }
LABEL_25:
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, v3, v10, 0LL);
  _enable();
  return v13;
}
