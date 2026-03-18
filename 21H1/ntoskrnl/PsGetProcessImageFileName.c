/*
 * XREFs of PsGetProcessImageFileName @ 0x14030D6F0
 * Callers:
 *     ObCheckRefTraceProcess @ 0x14066FA20 (ObCheckRefTraceProcess.c)
 *     PnpLogVetoInformation @ 0x14071E794 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x140759F40 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
