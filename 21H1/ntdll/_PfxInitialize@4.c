/*
 * XREFs of _PfxInitialize@4 @ 0x4B345200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl PfxInitialize(PPREFIX_TABLE PrefixTable)
{
  *(_DWORD *)&PrefixTable->NodeTypeCode = 512;
  PrefixTable->NextPrefixTree = (PPREFIX_TABLE_ENTRY)PrefixTable;
}
