/*
 * XREFs of HsaInvalidateRemappingTableEntry @ 0x1404E2270
 * Callers:
 *     <none>
 * Callees:
 *     HsaInvalidateRemappingTableEntries @ 0x1404E21F8 (HsaInvalidateRemappingTableEntries.c)
 */

__int64 __fastcall HsaInvalidateRemappingTableEntry(__int64 a1, __int64 a2)
{
  return HsaInvalidateRemappingTableEntries(a1, a2, 0LL);
}
