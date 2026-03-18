/*
 * XREFs of _IsChild @ 0x1C0122214
 * Callers:
 *     xxxDoPaint @ 0x1C004DFE8 (xxxDoPaint.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     CheckPwndFilter @ 0x1C00D786C (CheckPwndFilter.c)
 *     _SelectPalette @ 0x1C00F7F64 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  while ( a2 && (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    a2 = *(_QWORD *)(a2 + 104);
    if ( a1 == a2 )
      return 1LL;
  }
  return 0LL;
}
