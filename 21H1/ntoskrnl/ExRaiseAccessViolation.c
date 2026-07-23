/*
 * XREFs of ExRaiseAccessViolation @ 0x1409517C0
 * Callers:
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     NtQueryKey @ 0x1405EBF30 (NtQueryKey.c)
 *     IopValidateQueryInformationParameters @ 0x140600760 (IopValidateQueryInformationParameters.c)
 *     NtQuerySecurityAttributesToken @ 0x140609AE0 (NtQuerySecurityAttributesToken.c)
 *     PfpPfnPrioRequest @ 0x1406262A0 (PfpPfnPrioRequest.c)
 *     NtAlpcQueryInformation @ 0x1406B6E40 (NtAlpcQueryInformation.c)
 *     KeUserModeCallback @ 0x140705310 (KeUserModeCallback.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
