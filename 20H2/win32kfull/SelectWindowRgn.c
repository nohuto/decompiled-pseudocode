/*
 * XREFs of SelectWindowRgn @ 0x1C00C7B7C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0106440 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     NtUserSetWindowRgnEx @ 0x1C0202D70 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C003DC54 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     GreUpdateSpriteClipRgn @ 0x1C008F964 (GreUpdateSpriteClipRgn.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025D364 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

char __fastcall SelectWindowRgn(struct tagWND *a1, HRGN a2, int a3)
{
  struct tagMONITOR *v3; // rax
  int v5; // esi
  HRGN MonitorRegionForDpi; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v13; // r9

  v3 = (struct tagMONITOR *)*((_QWORD *)a1 + 5);
  v5 = 0;
  MonitorRegionForDpi = a2;
  v8 = *((_QWORD *)v3 + 21);
  if ( v8 )
  {
    LOBYTE(v3) = *((_BYTE *)v3 + 21);
    if ( ((unsigned __int8)v3 & 8) != 0 )
    {
      SetOrClrWF(0LL, a1, 1288LL, 1LL);
    }
    else
    {
      if ( a2 == (HRGN)2 )
        return (char)v3;
      GreDeleteObject(v8);
      v5 = 1;
    }
    v3 = (struct tagMONITOR *)*((_QWORD *)a1 + 5);
    *((_QWORD *)v3 + 21) = 0LL;
  }
  if ( (unsigned __int64)MonitorRegionForDpi > 1 )
  {
    if ( MonitorRegionForDpi == (HRGN)2 )
    {
      v11 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v11 + 31) & 1) == 0 )
        return (char)v3;
      if ( (*(_BYTE *)(v11 + 19) & 0x40) == 0 )
        return (char)v3;
      v3 = _MonitorFromWindowInternal(a1, 0, 0);
      if ( !v3 )
        return (char)v3;
      WindowCompositedDpi = GetWindowCompositedDpi(a1);
      MonitorRegionForDpi = GetMonitorRegionForDpi(v13, WindowCompositedDpi);
      SetOrClrWF(1LL, a1, 1288LL, 1LL);
    }
    else
    {
      if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
        GreOffsetRgn(
          MonitorRegionForDpi,
          *(unsigned int *)(*((_QWORD *)a1 + 5) + 88LL),
          *(unsigned int *)(*((_QWORD *)a1 + 5) + 92LL));
      GreSetRegionOwner(MonitorRegionForDpi, 0LL);
      v5 = 1;
    }
    v3 = (struct tagMONITOR *)*((_QWORD *)a1 + 5);
    *((_QWORD *)v3 + 21) = MonitorRegionForDpi;
  }
  if ( v5 )
  {
    LODWORD(v3) = IsWindowDesktopComposed(a1);
    if ( (_DWORD)v3 )
    {
      if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
      {
        v10 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v10 + 26) & 8) != 0 )
          GreUpdateSpriteClipRgn(v9, *(struct PDEVOBJ **)a1, *(HRGN *)(v10 + 168), a3);
      }
      LOBYTE(v3) = DirtyVisRgnTrackers(a1);
    }
  }
  return (char)v3;
}
