/*
 * XREFs of _GetCursorSizesIndexFromDpi@4 @ 0xA296A
 * Callers:
 *     ?GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z @ 0x750D8 (-GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QBEII@Z @ 0x752E8 (-GetSizeForDpi@CCursorSizes@@QBEII@Z.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC (-RefreshSizes@CCursorSizes@@QAEXXZ.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 * Callees:
 *     <none>
 */

int __fastcall GetCursorSizesIndexFromDpi(unsigned int a1)
{
  if ( a1 < 0x90 )
    return 0;
  if ( a1 < 0xC0 )
    return 1;
  if ( a1 >= 0x120 )
    return 4 - (a1 < 0x180);
  return 2;
}
