/*
 * XREFs of CmpPopulateKcbStack @ 0x1407C063C
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 * Callees:
 *     CmpSetKcbAtLayerHeight @ 0x1406B98FC (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpPopulateKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v3; // r11
  __int64 v4; // r10
  __int64 v5; // r10
  __int16 v6; // r11

  result = *(unsigned __int16 *)(a2 + 66);
  *(_WORD *)(a1 + 2) = result;
  v3 = *(_WORD *)(a2 + 66);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 192);
    while ( v4 )
    {
      result = CmpSetKcbAtLayerHeight(a1, v3, *(_QWORD *)(v4 + 16));
      v4 = *(_QWORD *)(v5 + 24);
      v3 = v6 - 1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  return result;
}
