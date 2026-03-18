/*
 * XREFs of EngGetCurrentCodePage @ 0x1C027CE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngGetCurrentCodePage(PUSHORT OemCodePage, PUSHORT AnsiCodePage)
{
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
}
