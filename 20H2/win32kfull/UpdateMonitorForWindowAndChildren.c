/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C00F9A00
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C00C7E50 (NtUserUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00F9644 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F9728 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     UpdateWindowMonitor @ 0x1C0046CD0 (UpdateWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0047020 (BuildWindowListWithDpiBoundaryInfo.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00F9B10 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F9B44 (UpdateWindowPositionsForDpiBoundaryChange.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(__int64 a1, _QWORD *a2, struct tagBWL **a3, int a4)
{
  __int64 result; // rax
  struct tagBWL *v9; // rdi
  struct tagFREELIST *v10; // rsi
  unsigned __int64 *i; // r14
  struct tagWND *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx

  result = (__int64)BuildHwndList((struct tagWND *)a1, 1, 0LL);
  v9 = (struct tagBWL *)result;
  if ( result )
  {
    v10 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(
                                  (struct tagWND *)a1,
                                  *(_QWORD *)(a1 + 104),
                                  result,
                                  0LL);
    for ( i = (unsigned __int64 *)((char *)v9 + 32); *i != 1; ++i )
    {
      v12 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
      v13 = (__int64)v12;
      if ( v12 )
      {
        UpdateWindowMonitor(v12, a2);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v13)
            || (v14 = *(_QWORD *)(v13 + 40), (*(_DWORD *)(v14 + 232) & 0x8000000) != 0)
            && (*(_BYTE *)(v14 + 16) & 0xF) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v13 + 40) + 232LL) |= 0x4000000u;
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
      *a3 = v9;
    else
      FreeHwndList(v9);
    return 1LL;
  }
  return result;
}
