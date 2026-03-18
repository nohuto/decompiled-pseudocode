/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x1405D3CAC
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpPopulateKcbStack @ 0x14061B600 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x140675D10 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x140675EC0 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
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
