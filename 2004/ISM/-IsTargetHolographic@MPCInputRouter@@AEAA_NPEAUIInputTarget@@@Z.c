/*
 * XREFs of ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800B8440
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800B9628 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180041EA0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180041F70 (-GetPresentationModeFromViewId@ViewHelper@@SA-AW4AppModelHolographicPresentationMode@WindowManag.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x1800B87CC (-MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x1800BCE70 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCInputRouter::IsTargetHolographic(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  __int64 (__fastcall *v3)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  unsigned int ViewIdFromWindowId; // eax
  int v9; // eax
  unsigned __int64 v10; // rbx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  char v12; // bl
  unsigned int v13; // ebx
  struct ViewHierarchyWithWindowManager *v14; // rax
  __int64 v15; // rdx
  HWND Ancestor; // rax
  __int64 v17; // rcx
  ISMTracing *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  MPCInputRouter *v21; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp+28h] BYREF
  __int64 v23; // [rsp+60h] [rbp+30h] BYREF

  v21 = this;
  v23 = 0LL;
  v3 = **a2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
  v4 = v3((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v23);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      600LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  LODWORD(v21) = 0;
  v22 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v23 + 64LL))(v23, &v22);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      606LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64, MPCInputRouter **))(*(_QWORD *)v23 + 56LL))(v23, &v21);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      609LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  ViewIdFromWindowId = (unsigned int)v21;
  if ( !(_DWORD)v21 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, MPCInputRouter **))(*(_QWORD *)v23 + 48LL))(v23, &v21);
    v7 = retaddr;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        614LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    ViewIdFromWindowId = (unsigned int)v21;
    if ( !(_DWORD)v21 )
    {
      v10 = v22;
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v10);
      LODWORD(v21) = ViewIdFromWindowId;
    }
  }
  v12 = 0;
  if ( ViewIdFromWindowId )
  {
    v12 = IsEdition(1024LL);
    if ( !v12 )
    {
      v13 = (unsigned int)v21;
      v14 = ISMStatics::GetViewHierarchy();
      v12 = (unsigned int)ViewHelper::GetPresentationModeFromViewId((__int64)v14, v13) == 1;
    }
  }
  else if ( v22 )
  {
    if ( !IsEdition(1024LL)
      && (GetPropW((HWND)(int)v22, L"Windows.Graphics.Holographic.HolographicSpace")
       || GetPropW((HWND)(int)v22, L"Windows.Internal.Shell.Holographic.Win32PortedView")
       || IsHolographicWin32SlatesFeatureEnabled((__int64)v7, v15)
       && (Ancestor = GetAncestor((HWND)(int)v22, 3u)) != 0LL
       && GetPropW(Ancestor, L"Windows.Internal.Shell.Holographic.Win32PortedView")) )
    {
      v12 = 1;
    }
  }
  if ( ISMTracing::IsEnabled((__int64)v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v17, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputRouter_IsTargetHolographic_(v18, (struct IInputTarget *)a2, (unsigned int)v21, v22, v12);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
  return v12;
}
