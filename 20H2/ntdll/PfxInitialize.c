/*
 * XREFs of PfxInitialize @ 0x1800E6340
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
