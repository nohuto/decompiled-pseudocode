/*
 * XREFs of ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001C25C
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001A660 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002F280 (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 * Callees:
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001B6B0 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18001B964 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x18008858C (-GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetBorderFlagFromStuckEdge@SearchAppDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x180088D54 (-GetBorderFlagFromStuckEdge@SearchAppDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdg.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ShowBorder(SearchAppDesktopExperienceView *this, struct tagRECT *a2)
{
  unsigned int v2; // eax
  int v5; // ecx
  char v6; // di
  int MonitorInformation; // edi
  HMONITOR v9; // rax
  HWND Hwnd; // rax
  int y; // r8d
  int x; // edx
  __int64 v13; // r8
  __int64 BorderFlagFromStuckEdge; // rdx
  __int64 v15; // rcx
  void (__fastcall *v16)(__int64, __int64, __int64, __int64, struct tagRECT *); // rax
  __int64 v17; // rdx
  LONG left; // ecx
  int v19; // [rsp+20h] [rbp-59h]
  bool v20; // [rsp+44h] [rbp-35h] BYREF
  struct tagPOINT Point; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v22[4]; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT v23; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v24; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v25; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v26; // [rsp+90h] [rbp+17h] BYREF
  RECT rc; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_DWORD *)this + 32);
  if ( v2 > 9 || (v5 = 582, !_bittest(&v5, v2)) || *((_BYTE *)this + 212) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 19) + 128LL))(
      *((_QWORD *)this + 19),
      0LL,
      0LL);
    v6 = 0;
LABEL_4:
    *((_BYTE *)this + 207) = v6;
    return 0LL;
  }
  MonitorInformation = SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &rc);
  if ( MonitorInformation < 0 )
  {
    v17 = 2029LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v19);
    return (unsigned int)MonitorInformation;
  }
  v9 = MonitorFromRect(&rc, 0);
  if ( v9 )
  {
    MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                           this,
                           v9,
                           &v25,
                           &v24,
                           &v23,
                           (enum EDGEUI_TRAYSTUCKPLACE *)v22,
                           &v20);
    if ( MonitorInformation >= 0 )
    {
      v26 = v24;
      if ( v22[0] )
      {
        if ( v22[0] == 1 )
        {
          if ( v23.bottom > v24.top )
            v26.top = v23.bottom;
        }
        else if ( v22[0] == 2 )
        {
          if ( v23.left < v24.right )
            v26.right = v23.left;
        }
        else if ( v22[0] == 3 && v23.top < v24.bottom )
        {
          v26.bottom = v23.top;
        }
      }
      else
      {
        left = v26.left;
        if ( v23.right > v24.left )
          left = v23.right;
        v26.left = left;
      }
      Point.x = v26.left;
      Point.y = v26.top;
      if ( a2 )
      {
        x = v26.left - a2->left;
        y = v26.top - a2->top;
        Point.y = y;
        Point.x = x;
      }
      else
      {
        Hwnd = SearchAppDesktopExperienceView::GetHwnd(this);
        ScreenToClient(Hwnd, &Point);
        y = Point.y;
        x = Point.x;
      }
      OffsetRect(&v26, x - v26.left, y - v26.top);
      LOBYTE(v13) = *((_BYTE *)this + 206);
      BorderFlagFromStuckEdge = (unsigned int)SearchAppDesktopExperienceView::GetBorderFlagFromStuckEdge(
                                                this,
                                                v22[0],
                                                v13);
      v6 = 1;
      *(float *)&v23.left = (float)v26.left;
      v15 = *((_QWORD *)this + 19);
      *(float *)&v23.top = (float)v26.top;
      *(float *)&v23.right = (float)(v26.right - v26.left);
      v16 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, struct tagRECT *))(*(_QWORD *)v15 + 136LL);
      *(float *)&v23.bottom = (float)(v26.bottom - v26.top);
      v16(v15, BorderFlagFromStuckEdge, 1LL, 0x1000000LL, &v23);
      goto LABEL_4;
    }
    v17 = 2039LL;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7F0,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL,
    v19);
  return 2147549183LL;
}
