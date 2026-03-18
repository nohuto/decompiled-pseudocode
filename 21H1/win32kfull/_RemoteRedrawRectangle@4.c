/*
 * XREFs of _RemoteRedrawRectangle@4 @ 0x1814F1
 * Callers:
 *     _NtUserRemoteRedrawRectangle@16 @ 0x168257 (_NtUserRemoteRedrawRectangle@16.c)
 *     _CtxDisplayIOCtl@12 @ 0x1879E1 (_CtxDisplayIOCtl@12.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _vDrvInvalidateRect@8 @ 0x22690F (_vDrvInvalidateRect@8.c)
 */

int __thiscall RemoteRedrawRectangle(_DWORD *this)
{
  int result; // eax
  ULONG_PTR v3; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 18, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
  result = _gspdeskShouldBeForeground;
  if ( !_gspdeskShouldBeForeground )
  {
    v3 = gspwndFullScreen;
    if ( gspwndFullScreen )
    {
      v6[2] = 0;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v6[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v6;
      v6[1] = v3;
      HMLockObject(v3);
      vDrvInvalidateRect(*(_DWORD *)(_gpDispInfo + 20), this);
      xxxRedrawWindow(gspwndFullScreen, this, 0, 645);
      return ThreadUnlock1();
    }
  }
  return result;
}
