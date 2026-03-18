/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1403F2B50
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406DD35C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406E4FD0 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140771520 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
