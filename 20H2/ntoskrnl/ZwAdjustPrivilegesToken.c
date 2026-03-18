/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1403F8990
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406D329C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406DB348 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140781F30 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
