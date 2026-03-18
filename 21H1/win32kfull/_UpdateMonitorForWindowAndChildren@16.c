/*
 * XREFs of _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E
 * Callers:
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _xxxEnableChildWindowDpiMessageX@8 @ 0xA9806 (_xxxEnableChildWindowDpiMessageX@8.c)
 *     _NtUserUpdateLayeredWindow@40 @ 0xBA93E (_NtUserUpdateLayeredWindow@40.c)
 * Callees:
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _BuildWindowListWithDpiBoundaryInfo@16 @ 0x2AC94 (_BuildWindowListWithDpiBoundaryInfo@16.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _UpdateWindowPositionsForDpiBoundaryChange@4 @ 0x9B526 (_UpdateWindowPositionsForDpiBoundaryChange@4.c)
 *     _FreeWindowListWithDpiBoundaryInfo@4 @ 0xA9700 (_FreeWindowListWithDpiBoundaryInfo@4.c)
 */

int __fastcall UpdateMonitorForWindowAndChildren(int a1, int a2, int *a3, int a4)
{
  int v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // esi
  int v13; // eax
  int v15; // [esp+18h] [ebp-8h]

  v4 = BuildHwndList(a1, 1, 0);
  v5 = v4;
  v15 = v4;
  if ( !v4 )
    return 0;
  v7 = BuildWindowListWithDpiBoundaryInfo(v4, 0);
  v8 = *(_DWORD *)(v5 + 16);
  if ( v8 != 1 )
  {
    v9 = (_DWORD *)(v5 + 16);
    do
    {
      LOBYTE(v6) = 1;
      v10 = HMValidateHandleNoSecure(v8, v6);
      v11 = v10;
      if ( v10 )
      {
        UpdateWindowMonitor(v10, a2);
        if ( a4 )
        {
          if ( !_IsTopLevelWindow(v11)
            || (v13 = *(_DWORD *)(v11 + 20), (*(_DWORD *)(v13 + 144) & 0x8000000) != 0)
            && (*(_BYTE *)(v13 + 8) & 0xF) != 0 )
          {
            *(_DWORD *)(*(_DWORD *)(v11 + 20) + 144) |= 0x4000000u;
          }
        }
      }
      v8 = *++v9;
    }
    while ( *v9 != 1 );
    v5 = v15;
  }
  if ( v7 )
  {
    UpdateWindowPositionsForDpiBoundaryChange(v7);
    FreeWindowListWithDpiBoundaryInfo(v7);
  }
  if ( a3 )
    *a3 = v5;
  else
    FreeHwndList(v5);
  return 1;
}
