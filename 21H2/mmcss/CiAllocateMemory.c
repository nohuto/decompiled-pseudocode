/*
 * XREFs of CiAllocateMemory @ 0x1C0002C80
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000B4E0 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiAllocateMemory(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1953658433LL);
}
