/*
 * XREFs of _xxxBroadcastPaletteChanged@8 @ 0x196256
 * Callers:
 *     _xxxRealizePalette@4 @ 0xBF854 (_xxxRealizePalette@4.c)
 *     _xxxFlushPalette@4 @ 0x1962C9 (_xxxFlushPalette@4.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _xxxRealizeDesktop@4 @ 0x154B87 (_xxxRealizeDesktop@4.c)
 */

size_t __fastcall xxxBroadcastPaletteChanged(struct tagWND **a1, int a2)
{
  struct tagWND *v2; // ebx
  int DesktopWindow; // eax
  int v5; // ecx
  void *v6; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *a1;
  DesktopWindow = _GetDesktopWindow(a1);
  v6 = (void *)DesktopWindow;
  if ( a2 || v5 != DesktopWindow )
  {
    v10[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v10[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v10;
    v10[1] = v6;
    HMLockObject(v6);
    xxxRealizeDesktop(v6);
    ThreadUnlock1();
  }
  return xxxSendNotifyMessage(-1, 0x311u, v2, 0, 1u);
}
