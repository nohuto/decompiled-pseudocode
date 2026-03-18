/*
 * XREFs of KiGetTrapFrameMode @ 0x1403917C0
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403D87E0 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
