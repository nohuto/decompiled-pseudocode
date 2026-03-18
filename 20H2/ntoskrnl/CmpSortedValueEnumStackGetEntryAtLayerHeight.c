/*
 * XREFs of CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x14087DF20
 * Callers:
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x14087DBF0 (CmpSortedValueEnumStackAdvanceInternal.c)
 *     CmpSortedValueEnumStackCleanup @ 0x14087DCF8 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087DF88 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSortedValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 16;
  else
    return *(_QWORD *)(a1 + 80) + 32LL * (__int16)(a2 - 2);
}
