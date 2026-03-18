/*
 * XREFs of HalpHpetQueryCounter @ 0x140362830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpHpetQueryCounter()
{
  return *(unsigned int *)(HalpHpetBaseAddress + 240);
}
