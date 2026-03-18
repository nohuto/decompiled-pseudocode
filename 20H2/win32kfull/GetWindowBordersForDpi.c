/*
 * XREFs of GetWindowBordersForDpi @ 0x1C00C7CA0
 * Callers:
 *     GetWindowBorders @ 0x1C0079A1C (GetWindowBorders.c)
 *     xxxGetMenuBarInfo @ 0x1C00B2E88 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0119040 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C014AD98 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238210 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C02471A8 (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024E7D4 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00C7CE4 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetAppCompatFlags2 @ 0x1C00C7E10 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int AppCompatFlags2; // eax
  int v8; // r8d

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, AppCompatFlags2);
}
