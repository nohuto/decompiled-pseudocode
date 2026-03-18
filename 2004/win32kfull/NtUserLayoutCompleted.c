/*
 * XREFs of NtUserLayoutCompleted @ 0x1C0112FE0
 * Callers:
 *     <none>
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     EtwTraceLayoutChangeStop @ 0x1C0113130 (EtwTraceLayoutChangeStop.c)
 *     GreWindowLayoutComplete @ 0x1C0113198 (GreWindowLayoutComplete.c)
 *     HandleAsyncResizeComplete @ 0x1C0211AD8 (HandleAsyncResizeComplete.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C0275088 (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 TopLevelWindow; // rax
  void *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    *((_QWORD *)&v15 + 1) = v2;
    HMLockObject(v2);
    EtwTraceLayoutChangeStop(gptiCurrent, a1, v7);
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 24) + 304LL) == v7 )
    {
      v14 = (void *)ReferenceDwmApiPort(v8);
      DwmAsyncCancelRotationDelay(v14);
    }
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x26u, a1);
    if ( *(char *)(*(_QWORD *)(v7 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v7);
      if ( TopLevelWindow )
      {
        v10 = *(_QWORD *)(TopLevelWindow + 40);
        v9 = *(_WORD *)(v10 + 42) & 0x3FFF;
        if ( (_DWORD)v9 != 669 )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v10, v9, v11);
    v6 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
