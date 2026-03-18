/*
 * XREFs of MiTryLockVad @ 0x140259A00
 * Callers:
 *     MiDeprioritizeVad @ 0x1402598CC (MiDeprioritizeVad.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v7; // rcx
  int SessionId; // eax
  __int64 result; // rax

  if ( *(char *)(a1 + 1384) < 0 )
    return 0LL;
  v3 = a2 + 40;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v3, CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    _enable();
    v5 = (__int64)(&CurrentThread[1].Process + 12 * v7);
    if ( v3 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
  {
    if ( v5 )
      KeAbPostReleaseEx(v3);
    return 0LL;
  }
  result = 1LL;
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 0x80u;
  return result;
}
