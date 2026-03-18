/*
 * XREFs of KiGetTrapFrameMode @ 0x1403946F0
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403DC2B0 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
