/*
 * XREFs of KiGetInterruptObjectAddress @ 0x140378F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall KiGetInterruptObjectAddress(int a1)
{
  return &KeGetCurrentPrcb()->InterruptObject[a1];
}
