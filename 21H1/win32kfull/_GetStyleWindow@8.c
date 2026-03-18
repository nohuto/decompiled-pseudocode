/*
 * XREFs of _GetStyleWindow@8 @ 0x387E8
 * Callers:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _UnredirectDCEs@4 @ 0x1BEB2 (_UnredirectDCEs@4.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _SpbCheckDce@4 @ 0x3272A (_SpbCheckDce@4.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 *     _UserGetRedirectedWindowOrigin@8 @ 0x38754 (_UserGetRedirectedWindowOrigin@8.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8 (-xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z.c)
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 *     _UpdateRedirectedDCE@8 @ 0x83AE6 (_UpdateRedirectedDCE@8.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 *     _NtUserHwndQueryRedirectionInfo@16 @ 0xB96F4 (_NtUserHwndQueryRedirectionInfo@16.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     _xxxDesktopPaintCallback@16 @ 0xE9858 (_xxxDesktopPaintCallback@16.c)
 *     _xxxPrintWindow@12 @ 0x153AF9 (_xxxPrintWindow@12.c)
 *     _NtUserHwndSetRedirectionInfo@16 @ 0x1651A3 (_NtUserHwndSetRedirectionInfo@16.c)
 * Callees:
 *     <none>
 */

int __stdcall GetStyleWindow(int a1, int a2)
{
  int v2; // ecx

  v2 = a1;
  if ( !a1 )
    return v2;
  do
  {
    if ( ((unsigned __int8)a2 & *(_BYTE *)(*(_DWORD *)(v2 + 20) + BYTE1(a2) + 8)) != 0 )
      break;
    v2 = *(_DWORD *)(v2 + 56);
  }
  while ( v2 );
  if ( v2 && (*(_WORD *)(*(_DWORD *)(v2 + 20) + 30) & 0x3FFF) == 0x29D && v2 != a1 && (a2 == 2848 || a2 == 2568) )
    return 0;
  else
    return v2;
}
