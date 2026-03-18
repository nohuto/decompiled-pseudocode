/*
 * XREFs of ?xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z @ 0x1A0F63
 * Callers:
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 * Callees:
 *     _xxxResetTooltip@4 @ 0x12D36 (_xxxResetTooltip@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     ?SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z @ 0x1A08F8 (-SetTooltipTimer@@YGXPAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YGHPAUtagTOOLTIPWND@@@Z @ 0x1A0923 (-TooltipAnimate@@YGHPAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z @ 0x1A0CFB (-xxxShowTooltip@@YGHPAUtagTOOLTIPWND@@@Z.c)
 */

int __fastcall xxxTooltipHandleTimer(unsigned int *a1, int a2)
{
  int v2; // ebx
  int v4; // edx
  int v5; // edx
  int DesktopWindow; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagWND *v10; // [esp+0h] [ebp-18h]
  unsigned int v11; // [esp+4h] [ebp-14h]
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = 1;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 && TooltipAnimate(a1) )
        SetTooltipTimer((char *)2, a1, (struct tagTOOLTIPWND *)a1[2], (unsigned int)v10, v11);
    }
    else
    {
      xxxResetTooltip(a1);
    }
  }
  else
  {
    v2 = 0;
    DesktopWindow = _GetDesktopWindow((_DWORD *)*a1);
    v12[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v12[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v12;
    v12[1] = DesktopWindow;
    HMLockObject(DesktopWindow);
    if ( xxxSetParentWorker(DesktopWindow, (struct tagWND *)*a1, 0, 0, v10, v11) )
      v2 = xxxShowTooltip(a1);
    ThreadUnlock1();
  }
  return v2;
}
