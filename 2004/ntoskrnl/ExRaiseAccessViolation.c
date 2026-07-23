/*
 * XREFs of ExRaiseAccessViolation @ 0x140952B60
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405F0C80 (PfpPfnPrioRequest.c)
 *     IopValidateQueryInformationParameters @ 0x140678840 (IopValidateQueryInformationParameters.c)
 *     NtQuerySecurityAttributesToken @ 0x140681C30 (NtQuerySecurityAttributesToken.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     NtQueryKey @ 0x140695470 (NtQueryKey.c)
 *     KeUserModeCallback @ 0x1406AF450 (KeUserModeCallback.c)
 *     NtAlpcQueryInformation @ 0x1406D51D0 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
