/*
 * XREFs of _ZwOpenProcessToken@12 @ 0x4B2F3C00
 * Callers:
 *     _RtlpGetDefaultsSubjectContext@36 @ 0x4B2D8FCB (_RtlpGetDefaultsSubjectContext@36.c)
 *     _RtlpValidOwnerSubjectContext@16 @ 0x4B2D94CA (_RtlpValidOwnerSubjectContext@16.c)
 *     _RtlAdjustPrivilege@16 @ 0x4B2E6D40 (_RtlAdjustPrivilege@16.c)
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return Wow64SystemServiceCall();
}
