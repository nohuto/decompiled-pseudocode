/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x1407184B0
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140369AC8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1404E7EDC (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackAdvance @ 0x140718174 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140718450 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x1408785E4 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 80) + 32LL * (__int16)(a2 - 2);
  else
    return a1 + 32LL * a2 + 16;
}
