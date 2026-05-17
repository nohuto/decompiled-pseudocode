/*
 * XREFs of _RtlLookupElementGenericTable@8 @ 0x4B2A7EE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLookupElementGenericTableFull@16 @ 0x4B2A7F10 (_RtlLookupElementGenericTableFull@16.c)
 */

int __stdcall RtlLookupElementGenericTable(int a1, int a2)
{
  _BYTE v3[4]; // [esp+0h] [ebp-8h] BYREF
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  return RtlLookupElementGenericTableFull(a1, a2, v3, v4);
}
