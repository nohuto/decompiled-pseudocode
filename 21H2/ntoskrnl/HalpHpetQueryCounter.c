/*
 * XREFs of HalpHpetQueryCounter @ 0x140365310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpHpetQueryCounter()
{
  return *(unsigned int *)(HalpHpetBaseAddress + 240);
}
