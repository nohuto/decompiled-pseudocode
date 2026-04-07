/*
 * XREFs of ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1800107E0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000D8C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z @ 0x180010794 (-IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800103D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x180010448 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800106FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabCategoryBC@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180010A34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowList::GetUnmetTabRequirements(
        CWindowList *this,
        HWND a2,
        enum DWM_TAB_WINDOW_REQUIREMENTS *a3)
{
  LONG WindowLongW; // edi
  char v6; // si
  const struct CWindowData *WindowDataByHwnd; // rax
  __int64 v8; // r8
  unsigned int PropW; // eax
  unsigned int v10; // eax
  char v12; // [rsp+20h] [rbp-49h] BYREF
  enum DWM_TAB_WINDOW_REQUIREMENTS *v13; // [rsp+28h] [rbp-41h] BYREF
  int v14; // [rsp+30h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+38h] [rbp-31h] BYREF
  int v16; // [rsp+40h] [rbp-29h] BYREF
  int *v17; // [rsp+48h] [rbp-21h]
  int v18; // [rsp+50h] [rbp-19h]
  enum DWM_TAB_WINDOW_REQUIREMENTS **v19; // [rsp+58h] [rbp-11h]
  char *v20; // [rsp+60h] [rbp-9h]
  void *v21; // [rsp+68h] [rbp-1h]
  const char *v22; // [rsp+70h] [rbp+7h]
  __int64 v23; // [rsp+78h] [rbp+Fh]
  __int16 v24; // [rsp+80h] [rbp+17h]
  struct tagRECT rc; // [rsp+88h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v13 = a3;
  *(_DWORD *)a3 = 0;
  LOBYTE(a3) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0LL,
    a3);
  *(_DWORD *)v13 |= 1u;
  if ( a2 )
  {
    WindowLongW = GetWindowLongW(a2, -16);
    v6 = GetWindowLongW(a2, -20);
    if ( (WindowLongW & 0x20000000) == 0 )
    {
      v15 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
      if ( WindowDataByHwnd && !IsWindowSetToDefaultMargins(WindowDataByHwnd) )
        *(_DWORD *)v13 |= 0x20u;
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
    }
    if ( (WindowLongW & 0xCF0000) != 0xCF0000 || (WindowLongW & 0xC0000000) != 0 || (v6 & 0x88) != 0 )
      *(_DWORD *)v13 |= 4u;
    if ( GetParent(a2) || GetWindow(a2, 4u) )
      *(_DWORD *)v13 |= 2u;
    if ( GetWindowRgnBox(a2, &rc) )
      *(_DWORD *)v13 |= 8u;
    v14 = 0;
    v17 = &v14;
    v16 = 1;
    v18 = 4;
    if ( (unsigned int)GetWindowCompositionAttribute(a2, &v16) && !v14 )
      *(_DWORD *)v13 |= 0x10u;
    v12 = 0;
    v19 = &v13;
    v20 = &v12;
    v23 = 0LL;
    v21 = retaddr;
    v22 = "clientcore\\windows\\dwm\\udwm\\windowlist.cpp";
    v24 = 1470;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetImpl'::`2'::impl,
      0,
      v8);
    PropW = (unsigned int)GetPropW(a2, L"TabbingAppCompatPolicy");
    if ( PropW )
    {
      if ( PropW == 1 )
      {
        *(_DWORD *)v13 &= 0xFFFFFFC7;
        v12 = 1;
      }
      else if ( PropW == 2 )
      {
        *(_DWORD *)v13 |= 0x200u;
      }
    }
    v10 = (unsigned int)GetPropW(a2, L"TabbingDisabled");
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        *(_DWORD *)v13 &= ~0x200u;
      }
      else if ( v10 == 2 )
      {
        *(_DWORD *)v13 |= 0x40u;
      }
    }
  }
  return 0LL;
}
