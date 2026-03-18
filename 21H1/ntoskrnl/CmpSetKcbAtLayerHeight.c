/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x1405CC470
 * Callers:
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x14061E010 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpPopulateKcbStack @ 0x1406247C0 (CmpPopulateKcbStack.c)
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
