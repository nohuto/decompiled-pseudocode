/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8
 * Callers:
 *     GreGetNearestColor @ 0x1C001BF60 (GreGetNearestColor.c)
 *     GreGetDeviceCaps @ 0x1C001EC40 (GreGetDeviceCaps.c)
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 *     GreCleanDC @ 0x1C009B4F0 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C00A0420 (GreSetLayout.c)
 *     NtGdiCreateMetafileDC @ 0x1C00A32F0 (NtGdiCreateMetafileDC.c)
 *     GreIntersectClipRect @ 0x1C00C29C0 (GreIntersectClipRect.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0143990 (NtGdiGetDeviceCapsAll.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0145A2C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSelectPalette @ 0x1C014ACB0 (GreSelectPalette.c)
 *     GreSetMagicColors @ 0x1C014AD44 (GreSetMagicColors.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
