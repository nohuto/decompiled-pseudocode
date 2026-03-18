/*
 * XREFs of ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D8FB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     SetRITTimer @ 0x1C00C9BD0 (SetRITTimer.c)
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01D8F0C (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletButtonTimerCallback(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( gpTabBtnAction )
  {
    v11[2] = 0LL;
    v5 = *(_DWORD *)(a4 + 48);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v11;
    v11[1] = a4;
    HMLockObject(a4);
    v7 = v5 & 0x10;
    xxxTabletButtonExecuteAction(gpTabBtnAction, v7 != 0, 0LL);
    if ( v7 )
    {
      gpTabBtnAction = 0LL;
    }
    else
    {
      v8 = 500LL;
      if ( *(_DWORD *)(a4 + 52) != 500 )
        gtmridTabletButtonTimer = SetRITTimer(gtmridTabletButtonTimer, 500, (int)xxxTabletButtonTimerCallback, 0);
    }
    ThreadUnlock1(v9, v8, v10);
  }
}
