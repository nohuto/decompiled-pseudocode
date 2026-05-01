/*
 * XREFs of sub_180034DD0 @ 0x180034DD0
 * Callers:
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180034DD0(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  RtlRbRemoveNode(a1, a2);
  --*(_DWORD *)(a1 + 40);
  RtlReleaseSRWLockExclusive(a1 + 16);
  return RtlWakeAllConditionVariable(a1 + 32);
}
