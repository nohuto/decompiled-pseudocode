/*
 * XREFs of ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800B78E8
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B8DF0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800B9628 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18002E390 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x1800B8690 (-MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCB38 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x1800BCE70 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCF5C (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(__int64 a1, struct IInputTarget *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  wil::details::in1diag3 *v7; // rcx
  unsigned int FrameworkViewTypeFromViewId; // esi
  __int64 v9; // rcx
  ISMTracing *v10; // rcx
  unsigned __int64 v12; // rbx
  struct ViewHierarchyWithWindowManager *v13; // rax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int v15; // ebx
  struct ViewHierarchyWithWindowManager *v16; // rax
  struct ViewHierarchyWithWindowManager *v17; // rax
  int v18; // eax
  const char *v19; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v21; // [rsp+60h] [rbp+28h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+30h] BYREF
  unsigned __int64 WindowIdFromViewId; // [rsp+70h] [rbp+38h] BYREF
  struct IInputTarget *v24; // [rsp+78h] [rbp+40h] BYREF

  v21 = a1;
  v24 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v22 = 0;
  LODWORD(v21) = 0;
  WindowIdFromViewId = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v22);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      557LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v21);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      558LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = v22;
  if ( !v22 )
  {
    v6 = v21;
    if ( (_DWORD)v21 )
    {
LABEL_19:
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(ViewHierarchy, v6);
      v15 = v21;
      v16 = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v16, v15);
      goto LABEL_13;
    }
    if ( (*(int (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &WindowIdFromViewId) >= 0
      && !IsEdition(1024LL)
      && GetPropW((HWND)(int)WindowIdFromViewId, L"Windows.Graphics.Holographic.HolographicSpace") )
    {
      FrameworkViewTypeFromViewId = v6 + 1;
      goto LABEL_13;
    }
    v5 = v22;
    if ( !v22 )
    {
      v6 = v21;
      if ( !(_DWORD)v21 )
      {
        v12 = WindowIdFromViewId;
        v13 = ISMStatics::GetViewHierarchy();
        LODWORD(v21) = ViewHelper::GetViewIdFromWindowId(v13, v12);
        wil::details::in1diag3::Log_HrIfMsg(
          retaddr,
          (void *)0x240,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)0x80004005LL,
          (_DWORD)v21 == 0,
          (bool)"View id not found",
          v19);
        v6 = v21;
      }
      goto LABEL_19;
    }
  }
  v17 = ISMStatics::GetViewHierarchy();
  FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(v17, v5);
  v18 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(
          a2,
          &WindowIdFromViewId);
  v7 = retaddr;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      587LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
LABEL_13:
  if ( ISMTracing::IsEnabled((__int64)v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v9, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
      v10,
      a2,
      v21,
      FrameworkViewTypeFromViewId,
      WindowIdFromViewId);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v24);
  return FrameworkViewTypeFromViewId;
}
