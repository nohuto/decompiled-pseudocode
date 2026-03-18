/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1403F3DE0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406FFFBC (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140708BAC (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140773930 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
