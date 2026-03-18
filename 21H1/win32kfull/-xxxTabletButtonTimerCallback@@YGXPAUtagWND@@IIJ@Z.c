/*
 * XREFs of ?xxxTabletButtonTimerCallback@@YGXPAUtagWND@@IIJ@Z @ 0x14757D
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _SetRITTimer@16 @ 0xA4BF6 (_SetRITTimer@16.c)
 *     ?xxxTabletButtonExecuteAction@@YGXPAUtagTABLET_BUTTON_ACTION@@HPAU_devicemodeW@@@Z @ 0x147505 (-xxxTabletButtonExecuteAction@@YGXPAUtagTABLET_BUTTON_ACTION@@HPAU_devicemodeW@@@Z.c)
 */

void __stdcall xxxTabletButtonTimerCallback(struct tagWND *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // esi
  int v8; // [esp+0h] [ebp-18h]
  struct _devicemodeW *v9; // [esp+4h] [ebp-14h]
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( gpTabBtnAction )
  {
    v10[2] = 0;
    v4 = *(_DWORD *)(a4 + 28);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v10[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v10;
    v10[1] = a4;
    HMLockObject(a4);
    v7 = v4 & 0x10;
    xxxTabletButtonExecuteAction(v7 != 0, (int *)gpTabBtnAction, 0, v8, v9);
    if ( v7 )
    {
      gpTabBtnAction = 0;
    }
    else if ( *(_DWORD *)(a4 + 32) != 500 )
    {
      gtmridTabletButtonTimer = SetRITTimer(
                                  (char *)gtmridTabletButtonTimer,
                                  0x1F4u,
                                  (int)xxxTabletButtonTimerCallback,
                                  0);
    }
    ThreadUnlock1();
  }
}
