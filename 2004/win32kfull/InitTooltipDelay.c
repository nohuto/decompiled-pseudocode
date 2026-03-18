/*
 * XREFs of InitTooltipDelay @ 0x1C0057094
 * Callers:
 *     _SetDoubleClickTime @ 0x1C0056FE0 (_SetDoubleClickTime.c)
 *     xxxTooltipWndProc @ 0x1C00BB110 (xxxTooltipWndProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitTooltipDelay(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) = 3 * gdtDblClk;
    result = gdtDblClk;
    *(_DWORD *)(a1 + 12) = 8 * gdtDblClk;
  }
  return result;
}
