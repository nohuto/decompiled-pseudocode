/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C0234CF0
 * Callers:
 *     xxxRealizePalette @ 0x1C0113460 (xxxRealizePalette.c)
 *     xxxFlushPalette @ 0x1C0234DA0 (xxxFlushPalette.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxRealizeDesktop @ 0x1C01E93B8 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxBroadcastPaletteChanged(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 DesktopWindow; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  int v5; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v4 = DesktopWindow;
  if ( v5 || v3 != DesktopWindow )
  {
    v11[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v11;
    v11[1] = v4;
    HMLockObject(v4);
    xxxRealizeDesktop(v4);
    ThreadUnlock1(v8, v7, v9);
  }
  return xxxSendNotifyMessage(-1LL, 0x311u, v1, 0LL, 1);
}
