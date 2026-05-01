/*
 * XREFs of CempRcTableRemoveObject @ 0x1800349C0
 * Callers:
 *     CemRcObjectCleanup @ 0x180034980 (CemRcObjectCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempRcTableRemoveObject(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  RtlRbRemoveNode(a1, a2);
  --*(_DWORD *)(a1 + 40);
  RtlReleaseSRWLockExclusive(a1 + 16);
  return RtlWakeAllConditionVariable(a1 + 32);
}
