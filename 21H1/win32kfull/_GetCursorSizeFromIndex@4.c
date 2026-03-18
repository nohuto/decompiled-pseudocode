/*
 * XREFs of _GetCursorSizeFromIndex@4 @ 0xA2940
 * Callers:
 *     ?GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z @ 0x750D8 (-GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z.c)
 *     ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC (-RefreshSizes@CCursorSizes@@QAEXXZ.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 * Callees:
 *     <none>
 */

int __thiscall GetCursorSizeFromIndex(char *this)
{
  char *v2; // ecx
  char *v3; // ecx

  if ( !this )
    return 32;
  v2 = this - 1;
  if ( !v2 )
    return 48;
  v3 = v2 - 1;
  if ( !v3 )
    return 64;
  if ( v3 == (char *)1 )
    return 96;
  return 128;
}
