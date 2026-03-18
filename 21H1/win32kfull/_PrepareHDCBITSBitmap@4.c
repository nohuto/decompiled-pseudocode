/*
 * XREFs of _PrepareHDCBITSBitmap@4 @ 0xC37BA
 * Callers:
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     _NtUserBitBltSysBmp@20 @ 0x15FB34 (_NtUserBitBltSysBmp@20.c)
 *     ?BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z @ 0x1A4FE9 (-BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z @ 0x1A5106 (-DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A (-DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ?CreateDPIBitmapStrip@@YGHI@Z @ 0x90002 (-CreateDPIBitmapStrip@@YGHI@Z.c)
 *     _GreGetDCDpiScaleValue@4 @ 0x91320 (_GreGetDCDpiScaleValue@4.c)
 */

int __thiscall PrepareHDCBITSBitmap(HDC this)
{
  int DpiForSystem; // eax
  int DpiCacheSlot; // edi
  int v4; // esi
  int v5; // ecx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem();
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem);
  v4 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    if ( this )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(this);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot(96 * DCDpiScaleValue);
    }
  }
  v5 = (int)*(&gOemBitmapSet + 189 * DpiCacheSlot);
  if ( v5 || (CreateDPIBitmapStrip(DpiCacheSlot), (v5 = (int)*(&gOemBitmapSet + 189 * DpiCacheSlot)) != 0) )
  {
    v4 = *(_DWORD *)(_gpDispInfo + 32);
    GreSelectBitmap(v4, v5);
  }
  return v4;
}
