/*
 * XREFs of HalpHpetQueryCounter @ 0x1403651E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpHpetQueryCounter()
{
  return *(unsigned int *)(HalpHpetBaseAddress + 240);
}
