/*
 * XREFs of _RtlLookupElementGenericTableAvl@8 @ 0x4B2A7020
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLookupElementGenericTableFullAvl@16 @ 0x4B2A7050 (_RtlLookupElementGenericTableFullAvl@16.c)
 */

int __stdcall RtlLookupElementGenericTableAvl(int a1, int a2)
{
  _BYTE v3[4]; // [esp+0h] [ebp-8h] BYREF
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  return RtlLookupElementGenericTableFullAvl(a1, a2, v3, v4);
}
