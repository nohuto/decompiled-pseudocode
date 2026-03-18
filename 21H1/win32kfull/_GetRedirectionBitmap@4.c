/*
 * XREFs of _GetRedirectionBitmap@4 @ 0x30300
 * Callers:
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     __SetLayeredWindowAttributes@16 @ 0x1FB1E (__SetLayeredWindowAttributes@16.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     ?SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z @ 0x2D4D2 (-SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _UpdateRedirectedDCE@8 @ 0x83AE6 (_UpdateRedirectedDCE@8.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     _ChangeRedirectionBitmapOwner@8 @ 0x153681 (_ChangeRedirectionBitmapOwner@8.c)
 *     _UserRecreateRedirectionBitmap@4 @ 0x1539FA (_UserRecreateRedirectionBitmap@4.c)
 * Callees:
 *     <none>
 */

int __stdcall GetRedirectionBitmap(int a1)
{
  int v1; // esi
  int Prop; // eax

  v1 = 0;
  Prop = RealGetProp(*(_DWORD *)(a1 + 80), (unsigned __int16)atomLayer, 1);
  if ( Prop )
    return *(_DWORD *)Prop;
  return v1;
}
