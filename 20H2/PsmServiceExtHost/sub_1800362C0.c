/*
 * XREFs of sub_1800362C0 @ 0x1800362C0
 * Callers:
 *     sub_180036234 @ 0x180036234 (sub_180036234.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800362C0(__int64 a1)
{
  RtlAcquireSRWLockExclusive(&unk_1800B3E98);
  dword_1800B3EA0 = GetCurrentThreadId();
  RtlRbRemoveNode(&xmmword_1800B3EA8, a1 + 32);
  *(_QWORD *)(a1 + 48) = -1LL;
  dword_1800B3EA0 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800B3E98);
}
