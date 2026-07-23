/*
 * XREFs of CmpPopulateKcbStack @ 0x1407128D0
 * Callers:
 *     CmpIsKeyDeleted @ 0x140667410 (CmpIsKeyDeleted.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140729E3C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140880220 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
 * Callees:
 *     CmpSetKcbAtLayerHeight @ 0x1405D6C8C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpPopulateKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v3; // r10
  __int64 i; // r11
  __int64 v5; // r11
  __int16 v6; // r10

  result = *(unsigned __int16 *)(a2 + 66);
  *(_WORD *)(a1 + 2) = result;
  v3 = *(_WORD *)(a2 + 66);
  if ( v3 )
  {
    for ( i = *(_QWORD *)(a2 + 192); i; v3 = v6 - 1 )
    {
      result = CmpSetKcbAtLayerHeight(a1, v3, *(_QWORD *)(i + 16));
      i = *(_QWORD *)(v5 + 24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  return result;
}
