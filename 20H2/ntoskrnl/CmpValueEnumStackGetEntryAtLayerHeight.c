/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x140726470
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BAA8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1404EB76C (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackAdvance @ 0x140726134 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140726410 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14087E154 (CmpValueEnumStackMatchingValueInUpperLayer.c)
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
