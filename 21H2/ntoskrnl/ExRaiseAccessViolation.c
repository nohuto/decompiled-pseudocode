/*
 * XREFs of ExRaiseAccessViolation @ 0x1409560F0
 * Callers:
 *     IopValidateQueryInformationParameters @ 0x1405FB810 (IopValidateQueryInformationParameters.c)
 *     NtQuerySecurityAttributesToken @ 0x1406011C0 (NtQuerySecurityAttributesToken.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     NtAlpcQueryInformation @ 0x140681F90 (NtAlpcQueryInformation.c)
 *     KeUserModeCallback @ 0x1406F0030 (KeUserModeCallback.c)
 *     PfpPfnPrioRequest @ 0x1406F2BB0 (PfpPfnPrioRequest.c)
 *     NtQueryKey @ 0x1406F8570 (NtQueryKey.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(0xC0000005);
}
