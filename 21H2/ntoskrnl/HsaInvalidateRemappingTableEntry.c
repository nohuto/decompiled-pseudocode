/*
 * XREFs of HsaInvalidateRemappingTableEntry @ 0x140532A10
 * Callers:
 *     <none>
 * Callees:
 *     HsaInvalidateRemappingTableEntries @ 0x140532998 (HsaInvalidateRemappingTableEntries.c)
 */

__int64 __fastcall HsaInvalidateRemappingTableEntry(__int64 a1, __int64 a2)
{
  return HsaInvalidateRemappingTableEntries(a1, a2, 0LL);
}
