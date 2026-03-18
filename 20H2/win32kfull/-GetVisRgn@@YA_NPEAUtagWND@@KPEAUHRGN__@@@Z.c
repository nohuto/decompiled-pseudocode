/*
 * XREFs of ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C00E43A4
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00E4598 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C0038DE0 (_GhostWindowFromHungWindow.c)
 *     _GetClientRect @ 0x1C003C56C (_GetClientRect.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C00E49E4 (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

char __fastcall GetVisRgn(struct tagWND *a1, unsigned int a2, HRGN a3)
{
  char v5; // bl
  __int64 TopLevelWindow; // rax
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h]
  int v11; // [rsp+3Ch] [rbp-24h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF

  v5 = 0;
  if ( !(unsigned int)GetWindowRgn(a1, a3, a2) )
  {
    v8 = 0LL;
    GetClientRect((__int64)a1, (__int64)&v8);
    v10 = DWORD2(v8) - v8;
    v11 = HIDWORD(v8) - DWORD1(v8);
    v9 = 0LL;
    SetRectRgnIndirect(a3, &v9);
  }
  v12 = 0LL;
  if ( (unsigned int)GreGetRgnBox(a3, &v12) == 1 )
  {
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
      return GhostWindowFromHungWindow(TopLevelWindow) != 0;
  }
  return v5;
}
