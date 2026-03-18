/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x1405CD840
 * Callers:
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1405E8840 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405E89F0 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpPopulateKcbStack @ 0x1405EF1A0 (CmpPopulateKcbStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetKcbAtLayerHeight(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 >= 2 )
  {
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(result + 8LL * a2 - 16) = a3;
  }
  else
  {
    *(_QWORD *)(a1 + 8LL * a2 + 8) = a3;
  }
  return result;
}
