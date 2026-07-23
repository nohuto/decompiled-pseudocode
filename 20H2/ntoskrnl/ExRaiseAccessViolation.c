/*
 * XREFs of ExRaiseAccessViolation @ 0x140958920
 * Callers:
 *     IopValidateQueryInformationParameters @ 0x1405FBB50 (IopValidateQueryInformationParameters.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     PfpPfnPrioRequest @ 0x1406138B0 (PfpPfnPrioRequest.c)
 *     NtQueryKey @ 0x140618FF0 (NtQueryKey.c)
 *     NtQuerySecurityAttributesToken @ 0x14061FC20 (NtQuerySecurityAttributesToken.c)
 *     KeUserModeCallback @ 0x1406814B0 (KeUserModeCallback.c)
 *     NtAlpcQueryInformation @ 0x1406A6BB0 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
