/*
 * XREFs of ?OnEventQueued@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A1E40
 * Callers:
 *     <none>
 * Callees:
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x1800274F8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x1800A36B8 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnEventQueued(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v5; // rax
  HMONITOR v6; // rax
  const char *v7; // r9
  LONG right; // ecx
  LONG bottom; // edx
  int v11; // eax
  unsigned int v12; // ebx
  _BYTE v13[12]; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+2Ch] [rbp-34h]
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *(_QWORD *)v13 = a3;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (HSTRING_HEADER *)&mi,
         (const WCHAR **)&MeetNowExperienceEvents::ShowExperienceFromUri,
         (unsigned int)a3);
  if ( !Microsoft::WRL::Wrappers::operator==((HSTRING *)v13, (__int64)v5) )
    return 0LL;
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  v6 = MonitorFromWindow(0LL, 1u);
  if ( !GetMonitorInfoW(v6, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xE6,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
             v7);
  right = mi.rcWork.right;
  bottom = mi.rcWork.bottom;
  if ( mi.rcWork.top <= mi.rcMonitor.top )
  {
    if ( mi.rcWork.left > mi.rcMonitor.left )
      right = mi.rcWork.left;
  }
  else
  {
    bottom = mi.rcWork.top;
  }
  v14 = 0;
  *(float *)v13 = (float)right;
  *(_QWORD *)&v13[4] = COERCE_UNSIGNED_INT((float)bottom);
  v11 = MeetNowExperienceManager::ShowFlyout((char *)this - 48, (const struct Windows::Foundation::Rect *)v13, 0LL, 1);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFE,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
