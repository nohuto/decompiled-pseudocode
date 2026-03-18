/*
 * XREFs of SmmGetOrderBlockSizeInBytes @ 0x1C006FE5C
 * Callers:
 *     SmmAllocateLogicalAddressAt @ 0x1C03C0F84 (SmmAllocateLogicalAddressAt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetOrderBlockSizeInBytes(char a1)
{
  return 4096LL << a1;
}
