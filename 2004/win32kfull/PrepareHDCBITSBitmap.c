/*
 * XREFs of PrepareHDCBITSBitmap @ 0x1C0101FBC
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0101DB0 (NtUserBitBltSysBmp.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02482E8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C024847C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024CA20 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0062134 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiCacheSlot @ 0x1C00A0088 (GetDpiCacheSlot.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     GreGetDCDpiScaleValue @ 0x1C0102144 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall PrepareHDCBITSBitmap(HDC a1)
{
  int DpiForSystem; // eax
  unsigned int DpiCacheSlot; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  int DCDpiScaleValue; // eax

  DpiForSystem = GetDpiForSystem((__int64)a1);
  DpiCacheSlot = GetDpiCacheSlot(DpiForSystem);
  v4 = 0LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v5) & 0xF) == 0 )
  {
    if ( a1 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
        DpiCacheSlot = GetDpiCacheSlot(96 * DCDpiScaleValue);
    }
  }
  v6 = 760LL * DpiCacheSlot;
  v7 = *(_QWORD *)((char *)&gOemBitmapSet + v6);
  if ( v7 || (CreateDPIBitmapStrip(DpiCacheSlot), (v7 = *(_QWORD *)((char *)&gOemBitmapSet + v6)) != 0) )
  {
    v4 = *(_QWORD *)(gpDispInfo + 64LL);
    GreSelectBitmap(v4, v7);
  }
  return v4;
}
