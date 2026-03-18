/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C0051470
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C00252C0 (NtUserUpdateLayeredWindow.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00510B4 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0051198 (zzzUpdateWindowsAfterModeChange.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0051580 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00515B4 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006E75C (BuildWindowListWithDpiBoundaryInfo.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UpdateWindowMonitor @ 0x1C006F040 (UpdateWindowMonitor.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct tagFREELIST *v10; // rsi
  _QWORD *i; // r14
  struct tagWND *v12; // rax
  struct tagWND *v13; // rbx
  __int64 v14; // rcx

  result = BuildHwndList((struct tagWND *)a1);
  v8 = result;
  if ( result )
  {
    v10 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, *(_QWORD *)(a1 + 104), result, 0LL);
    for ( i = (_QWORD *)(v8 + 32); *i != 1LL; ++i )
    {
      LOBYTE(v9) = 1;
      v12 = (struct tagWND *)HMValidateHandleNoSecure(*i, v9);
      v13 = v12;
      if ( v12 )
      {
        UpdateWindowMonitor(v12);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v13)
            || (v14 = *((_QWORD *)v13 + 5), (*(_DWORD *)(v14 + 232) & 0x8000000) != 0)
            && (*(_BYTE *)(v14 + 16) & 0xF) != 0 )
          {
            *(_DWORD *)(*((_QWORD *)v13 + 5) + 232LL) |= 0x4000000u;
          }
        }
      }
    }
    if ( v10 )
    {
      UpdateWindowPositionsForDpiBoundaryChange(v10);
      FreeListFree(v10);
    }
    if ( a3 )
      *a3 = v8;
    else
      FreeHwndList(v8);
    return 1LL;
  }
  return result;
}
