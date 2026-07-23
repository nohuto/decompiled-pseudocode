/*
 * XREFs of KiGetTrapFrameMode @ 0x140394CB0
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403DCD90 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
