/*
 * XREFs of ExRaiseAccessViolation @ 0x1409562C0
 * Callers:
 *     NtAlpcQueryInformation @ 0x1405DCFD0 (NtAlpcQueryInformation.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     IopValidateQueryInformationParameters @ 0x1406EAF70 (IopValidateQueryInformationParameters.c)
 *     NtQuerySecurityAttributesToken @ 0x1406F0920 (NtQuerySecurityAttributesToken.c)
 *     KeUserModeCallback @ 0x140707410 (KeUserModeCallback.c)
 *     PfpPfnPrioRequest @ 0x140709F90 (PfpPfnPrioRequest.c)
 *     NtQueryKey @ 0x14070F950 (NtQueryKey.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
