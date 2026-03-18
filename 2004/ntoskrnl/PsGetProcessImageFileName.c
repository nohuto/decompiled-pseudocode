/*
 * XREFs of PsGetProcessImageFileName @ 0x14034ABD0
 * Callers:
 *     ObCheckRefTraceProcess @ 0x140618300 (ObCheckRefTraceProcess.c)
 *     PnpLogVetoInformation @ 0x140720534 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14075BB48 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
