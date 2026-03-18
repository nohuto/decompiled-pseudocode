/*
 * XREFs of sub_1C0001AE0 @ 0x1C0001AE0
 * Callers:
 *     sub_1C000AE00 @ 0x1C000AE00 (sub_1C000AE00.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1C0001AE0(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag((POOL_TYPE)512, NumberOfBytes, 0x74727641u);
}
