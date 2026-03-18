/*
 * XREFs of PsGetProcessImageFileName @ 0x14031BB90
 * Callers:
 *     ObCheckRefTraceProcess @ 0x14063051C (ObCheckRefTraceProcess.c)
 *     PnpLogVetoInformation @ 0x14072E524 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14076A438 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
