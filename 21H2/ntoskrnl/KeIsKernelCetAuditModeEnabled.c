/*
 * XREFs of KeIsKernelCetAuditModeEnabled @ 0x14025E5F4
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetAuditModeEnabled()
{
  return (_BYTE)KiKernelCetAuditModeEnabled != 0;
}
