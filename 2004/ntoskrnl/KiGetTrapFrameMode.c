/*
 * XREFs of KiGetTrapFrameMode @ 0x140392230
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403D9620 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
