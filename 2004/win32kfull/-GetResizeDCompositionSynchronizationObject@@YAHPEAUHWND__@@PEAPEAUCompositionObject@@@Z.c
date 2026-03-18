/*
 * XREFs of ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C010D91C
 * Callers:
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C010D860 (NtUserGetResizeDCompositionSynchronizationObject.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C010DA4C (GreGetWindowResizeDCompositionSynchronizationObject.c)
 */

__int64 __fastcall GetResizeDCompositionSynchronizationObject(HWND a1, struct CompositionObject **a2)
{
  unsigned int WindowResizeDCompositionSynchronizationObject; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 TopLevelWindow; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  WindowResizeDCompositionSynchronizationObject = 1;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v9 = v5;
  if ( v5 && (v7 = *(_QWORD *)(v5 + 40), v6 = (*(_WORD *)(v7 + 42) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    *((_QWORD *)&v15 + 1) = v5;
    HMLockObject(v5);
    TopLevelWindow = GetTopLevelWindow(v9);
    if ( !TopLevelWindow
      || (v12 = *(_QWORD *)(TopLevelWindow + 40), v11 = *(_WORD *)(v12 + 42) & 0x3FFF, (_DWORD)v11 == 669)
      || (WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(*(HWND *)TopLevelWindow)) != 0 )
    {
      *a2 = 0LL;
    }
    ThreadUnlock1(v12, v11, v13);
  }
  else
  {
    WindowResizeDCompositionSynchronizationObject = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return WindowResizeDCompositionSynchronizationObject;
}
