/*
 * XREFs of ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800B93B0
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B8D50 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800B91D8 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B654 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028070 (-IsEdition@@YA_N_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B3CC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z @ 0x1800B6E28 (--$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x1800BCDD0 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCEBC (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1800BD6FC (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::Update3DFocusWNF(MPCInputRouter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  struct ViewHierarchyWithWindowManager *v4; // rax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rbx
  struct ViewHierarchyWithWindowManager *v7; // rax
  unsigned int v8; // ebx
  struct ViewHierarchyWithWindowManager *v9; // rax
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h]
  unsigned __int64 v13; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 Ancestor; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned int ViewIdFromWindowId; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+64h] [rbp-Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *((_QWORD *)this + 99);
  if ( v2 )
  {
    v13 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 72LL))(*((_QWORD *)this + 99));
    ViewIdFromWindowId = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 80LL))(*((_QWORD *)this + 99));
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 56LL))(*((_QWORD *)this + 99));
    Ancestor = v13;
    if ( *((_BYTE *)this + 888) )
      v3 = *((_DWORD *)this + 223);
    else
      v3 = v15;
    v18 = v3;
    if ( ViewIdFromWindowId
      || (v4 = ISMStatics::GetViewHierarchy(), (ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(v4, v13)) != 0) )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
      v7 = ISMStatics::GetViewHierarchy();
      ViewHierarchyWithWindowManager::GetAllAncestors(v7, &v11, ViewIdFromWindowId);
      if ( v11 != v12 )
      {
        v8 = *(_DWORD *)(v12 - 4);
        v9 = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v9, v8);
      }
      Ancestor = WindowIdFromViewId;
      std::vector<Windows::UI::Color>::_Tidy((__int64)&v11);
    }
    if ( IsEdition(8778LL) )
      Ancestor = (unsigned __int64)GetAncestor((HWND)(int)Ancestor, 3u);
    v10 = RtlPublishWnfStateData(WNF_HOLO_INPUT_FOCUS_CHANGE, 0LL, &v13, 32LL) | 0x10000000;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        893LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    ISMTracing::MPCInputRouter_Update3DFocusWNF<unsigned __int64 &,unsigned __int64 &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
      &v13,
      &Ancestor,
      &v15,
      &v16,
      &ViewIdFromWindowId,
      &v18);
  }
}
