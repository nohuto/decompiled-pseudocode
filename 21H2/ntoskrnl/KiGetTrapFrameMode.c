/*
 * XREFs of KiGetTrapFrameMode @ 0x1403A0A90
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403EBF10 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
