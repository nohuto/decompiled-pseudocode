/*
 * XREFs of ReleaseGL @ 0x1C0065AAC
 * Callers:
 *     ParseRelease @ 0x1C00033A0 (ParseRelease.c)
 *     ParseAcquire @ 0x1C000A300 (ParseAcquire.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))ghGlobalLock)(5LL, 1LL, qword_1C00831B0);
  return result;
}
