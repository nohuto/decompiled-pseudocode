/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x14072A440
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BF08 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1404ED29C (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackAdvance @ 0x14072A104 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14072A3E0 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14087BC34 (CmpValueEnumStackMatchingValueInUpperLayer.c)
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
