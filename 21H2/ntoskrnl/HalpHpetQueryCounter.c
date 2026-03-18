/*
 * XREFs of HalpHpetQueryCounter @ 0x140372C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpHpetQueryCounter()
{
  return *(unsigned int *)(HalpHpetBaseAddress + 240);
}
