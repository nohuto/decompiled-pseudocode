/*
 * XREFs of KiGetInterruptObjectAddress @ 0x1403772B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall KiGetInterruptObjectAddress(int a1)
{
  return &KeGetCurrentPrcb()->InterruptObject[a1];
}
