/*
 * XREFs of PsIsSystemWideMitigationOptionSet @ 0x1406ECAAC
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsSystemWideMitigationOptionSet()
{
  return (((unsigned __int64)PspSystemMitigationOptions >> 36) & 0xF) == 6;
}
