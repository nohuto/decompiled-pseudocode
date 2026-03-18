/*
 * XREFs of _IsThreadDesktopComposed@4 @ 0x303CC
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _UserIsCurrentThreadDesktopComposed@0 @ 0xA540E (_UserIsCurrentThreadDesktopComposed@0.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?NotifyDWMOfWallpaperChange@@YGHXZ @ 0xE64A0 (-NotifyDWMOfWallpaperChange@@YGHXZ.c)
 *     _EditionMouseSpeedHitTest@48 @ 0xF14D0 (_EditionMouseSpeedHitTest@48.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YGPAUHWND__@@PAUtagTHREADINFO@@PAUtagWND@@IIJUtagPOINT@@PAHKPBUtagPOINTEREVENTINT@@PAU4@@Z @ 0x17B79F (-xxxWindowHitTestWithoutTargeting@@YGPAUHWND__@@PAUtagTHREADINFO@@PAUtagWND@@IIJUtagPOINT@@PAHKP.c)
 *     _xxxPointerWindowHitTest@48 @ 0x17C5CD (_xxxPointerWindowHitTest@48.c)
 * Callees:
 *     <none>
 */

int __thiscall IsThreadDesktopComposed(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = this[62];
  result = 0;
  if ( v1 )
    return *(_DWORD *)(**(_DWORD **)(v1 + 4) + 32) & 1;
  return result;
}
