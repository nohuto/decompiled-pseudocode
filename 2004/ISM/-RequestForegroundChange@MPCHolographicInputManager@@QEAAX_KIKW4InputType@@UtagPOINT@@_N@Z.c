/*
 * XREFs of ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800785A0
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x180075FA0 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800B7D90 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180075A34 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x180076EDC (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCC9C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCD84 (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x1800BCE70 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 */

char __fastcall MPCHolographicInputManager::RequestForegroundChange(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned int a5,
        __int64 a6,
        bool a7)
{
  unsigned int v7; // r12d
  unsigned int ViewIdFromWindowId; // edi
  __int64 v11; // rbp
  struct IMPCFocusTarget *FocusedTarget; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  int v16; // r15d
  struct IMPCFocusTarget *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  ISMTracing *v20; // rcx
  unsigned int Ancestor; // eax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ThreadIdFromViewId; // ebx
  struct ViewHierarchyWithWindowManager *v24; // rax
  unsigned int ProcessIdFromViewId; // eax
  struct ViewHierarchyWithWindowManager *v26; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = (unsigned int)a4;
  ViewIdFromWindowId = a3;
  if ( !*(_BYTE *)(a1 + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1323LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v11 = 0LL;
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, a2, a3, a4);
  if ( FocusedTarget )
    v11 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 56LL))(FocusedTarget);
  v16 = 0;
  v17 = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, v13, v14, v15);
  if ( v17 )
    v16 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)v17 + 80LL))(v17);
  if ( ISMTracing::IsEnabled(v18) )
  {
    wil::details::static_lazy<ISMTracing>::get(v19, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(v20, a2, v11, ViewIdFromWindowId, v7, a7);
  }
  LOBYTE(Ancestor) = IsEdition(8778LL);
  if ( (_BYTE)Ancestor )
  {
    if ( a2 )
    {
      Ancestor = (unsigned int)GetAncestor((HWND)(int)v11, 2u);
      if ( v11 != a2 && (!ViewIdFromWindowId || v16 != ViewIdFromWindowId) && Ancestor != a2 )
      {
        LOBYTE(Ancestor) = SetForegroundWindow((HWND)(int)a2);
        if ( a7 )
        {
          if ( ViewIdFromWindowId )
          {
            ViewHierarchy = ISMStatics::GetViewHierarchy();
            ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
            v24 = ISMStatics::GetViewHierarchy();
            ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v24, ViewIdFromWindowId);
            LOBYTE(Ancestor) = SetInputFocus(ProcessIdFromViewId, ThreadIdFromViewId, ViewIdFromWindowId, a2, 0, 0, 0);
          }
        }
      }
    }
  }
  else
  {
    if ( !ViewIdFromWindowId )
    {
      v26 = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(v26, a2);
    }
    LOBYTE(Ancestor) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 2288)
                                                                                          + 80LL))(
                         *(_QWORD *)(a1 + 2288),
                         ViewIdFromWindowId,
                         v7,
                         a5,
                         a6);
  }
  return Ancestor;
}
