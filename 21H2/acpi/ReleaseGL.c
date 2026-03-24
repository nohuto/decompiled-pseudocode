/*
 * XREFs of ReleaseGL @ 0x1C0065C3C
 * Callers:
 *     ParseRelease @ 0x1C0003760 (ParseRelease.c)
 *     ParseAcquire @ 0x1C000A6C0 (ParseAcquire.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))ghGlobalLock)(5LL, 1LL, qword_1C00831A8);
  return result;
}
