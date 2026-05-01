/*
 * XREFs of ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x1801A7B70
 * Callers:
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x1801AA128 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18012BF14 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x1801A765C (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::GetFlyoutRectForLocationAndBorderFlag(
        __int64 a1,
        __int64 a2,
        RECT *a3,
        _DWORD *a4)
{
  LONG v6; // r15d
  LONG v7; // r12d
  HMONITOR v8; // r14
  unsigned int LastError; // ebx
  HRESULT Instance; // eax
  __int64 v11; // rdx
  POINT v12; // rbx
  __int64 (__fastcall *v13)(POINT, SID *, GUID *, SIZE *); // rdi
  SIZE v14; // rbx
  __int64 (__fastcall *v15)(SIZE, HMONITOR, SID *, GUID *, int *); // rdi
  signed int Error; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  UINT v21; // ebx
  const char *v22; // r9
  LONG top; // eax
  SIZE windowSize; // [rsp+30h] [rbp-59h] BYREF
  POINT anchorPoint; // [rsp+38h] [rbp-51h] BYREF
  int v27[2]; // [rsp+40h] [rbp-49h] BYREF
  CPeopleBarFlyoutExperienceManager *v28; // [rsp+48h] [rbp-41h] BYREF
  RECT popupWindowPosition; // [rsp+50h] [rbp-39h] BYREF
  RECT rc; // [rsp+60h] [rbp-29h] BYREF
  struct tagMONITORINFO mi; // [rsp+70h] [rbp-19h] BYREF
  RECT excludeRect; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *(_QWORD *)v27 = a2;
  *a3 = 0LL;
  v6 = (int)*(float *)&a2;
  v7 = (int)*((float *)&a2 + 1);
  rc.left = (int)*(float *)&a2;
  rc.top = (int)*((float *)&a2 + 1);
  rc.right = (int)*(float *)&a2;
  rc.bottom = (int)*((float *)&a2 + 1);
  v8 = MonitorFromRect(&rc, 0);
  if ( v8 )
  {
    *(_QWORD *)v27 = 0LL;
    windowSize = 0LL;
    anchorPoint = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&anchorPoint);
    Instance = CoCreateInstance(
                 &CLSID_ImmersiveShell,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)&anchorPoint);
    LastError = Instance;
    if ( Instance < 0 )
    {
      v11 = 605LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&anchorPoint);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&windowSize);
      goto LABEL_38;
    }
    v12 = anchorPoint;
    v13 = *(__int64 (__fastcall **)(POINT, SID *, GUID *, SIZE *))(**(_QWORD **)&anchorPoint + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&windowSize);
    Instance = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v13)(
                 v12,
                 &SID_IImmersiveMonitorService,
                 &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                 &windowSize);
    LastError = Instance;
    if ( Instance < 0 )
    {
      v11 = 606LL;
      goto LABEL_9;
    }
    v14 = windowSize;
    v15 = *(__int64 (__fastcall **)(SIZE, HMONITOR, SID *, GUID *, int *))(**(_QWORD **)&windowSize + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
    Instance = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v15)(
                 v14,
                 v8,
                 &SID_EdgeUi,
                 &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                 v27);
    LastError = Instance;
    if ( Instance < 0 )
    {
      v11 = 609LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&anchorPoint);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&windowSize);
    Error = (*(__int64 (__fastcall **)(_QWORD, CPeopleBarFlyoutExperienceManager **))(**(_QWORD **)v27 + 80LL))(
              *(_QWORD *)v27,
              &v28);
    LastError = Error;
    if ( Error >= 0 )
    {
      Error = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)v27 + 168LL))(*(_QWORD *)v27, &excludeRect);
      LastError = Error;
      if ( Error >= 0 )
      {
        *a4 = 0;
        v19 = (unsigned int)v28;
        if ( (_DWORD)v28 )
        {
          v19 = (unsigned int)((_DWORD)v28 - 1);
          if ( (_DWORD)v28 == 1 )
          {
            v21 = 65540;
            *a4 = 13;
          }
          else
          {
            v19 = (unsigned int)((_DWORD)v28 - 2);
            if ( (_DWORD)v28 == 2 )
            {
              v21 = 65560;
              *a4 = 11;
            }
            else
            {
              if ( (_DWORD)v28 != 3 )
              {
                LastError = -2147467263;
                v20 = 2147500033LL;
                v17 = 664LL;
LABEL_27:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v17,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
                  (const char *)v20);
                goto LABEL_38;
              }
              v21 = 65572;
              *a4 = 7;
            }
          }
        }
        else
        {
          v21 = 65552;
          *a4 = 14;
        }
        anchorPoint.x = v6;
        anchorPoint.y = v7;
        windowSize.cx = 320;
        windowSize.cy = 616;
        CPeopleBarFlyoutExperienceManager::AdjustSizeForScale(
          (CPeopleBarFlyoutExperienceManager *)v19,
          &windowSize,
          v18);
        if ( CalculatePopupWindowPosition(&anchorPoint, &windowSize, v21, &excludeRect, &popupWindowPosition) )
        {
          mi.cbSize = 40;
          memset(&mi.rcMonitor, 0, 36);
          if ( GetMonitorInfoW(v8, &mi) )
          {
            rc = mi.rcWork;
            if ( popupWindowPosition.top >= mi.rcWork.top )
            {
              if ( popupWindowPosition.bottom > mi.rcWork.bottom )
              {
                OffsetRect(&popupWindowPosition, 0, mi.rcWork.bottom - popupWindowPosition.bottom);
                top = popupWindowPosition.top;
                if ( popupWindowPosition.top < rc.top )
                  top = rc.top;
                popupWindowPosition.top = top;
              }
            }
            else
            {
              OffsetRect(&popupWindowPosition, 0, mi.rcWork.top - popupWindowPosition.top);
              if ( popupWindowPosition.bottom > rc.bottom )
                popupWindowPosition.bottom = rc.bottom;
            }
            *a3 = popupWindowPosition;
            LastError = 0;
          }
          else
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x2A7,
                          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
                          v22);
          }
          goto LABEL_38;
        }
        Error = ResultFromKnownLastError();
        LastError = Error;
        if ( Error >= 0 )
        {
LABEL_38:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
          return LastError;
        }
        v17 = 674LL;
      }
      else
      {
        v17 = 617LL;
      }
    }
    else
    {
      v17 = 616LL;
    }
    v20 = (unsigned int)Error;
    goto LABEL_27;
  }
  LastError = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x254,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)0x8000FFFFLL);
  return LastError;
}
