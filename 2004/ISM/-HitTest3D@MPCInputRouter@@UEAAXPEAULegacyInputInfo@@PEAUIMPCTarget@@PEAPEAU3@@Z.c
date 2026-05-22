/*
 * XREFs of ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800B7D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800785A0 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z @ 0x1800B786C (-FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z.c)
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800B7B00 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCF5C (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 */

void __fastcall MPCInputRouter::HitTest3D(
        MPCInputRouter *this,
        struct LegacyInputInfo *a2,
        struct IMPCTarget *a3,
        struct IMPCTarget **a4)
{
  int v7; // eax
  bool v8; // bp
  bool v9; // r12
  __int64 v10; // rcx
  bool v11; // r13
  char v12; // r14
  MPCInputRouter *v13; // rcx
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IMPCTarget **); // rcx
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct IMPCTarget **); // r9
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IMPCTarget **); // rcx
  int v19; // eax
  int v20; // eax
  _BYTE *v21; // r13
  int v22; // eax
  struct MPCHolographicInputManager *Instance; // rax
  unsigned int v24; // r12d
  __int64 v25; // r15
  unsigned int v26; // r13d
  unsigned int v27; // esi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      326LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      0LL);
    __debugbreak();
  }
  if ( !*((_BYTE *)this + 96) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      329LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)a4);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 6) + 40LL))(
         *((_QWORD *)this + 6),
         (char *)a2 + 80,
         (char *)a2 + 152);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      335LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = 1;
  v9 = !*((_BYTE *)a2 + 153)
    && (*(_DWORD *)a2 & 0x2600) != 0
    && ((unsigned int)(*((_DWORD *)a2 + 16) - 1) <= 1 || *((_DWORD *)a2 + 17) == 2);
  v10 = *((_QWORD *)this + 3);
  v11 = 0;
  v12 = 0;
  if ( v10 )
    v11 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10) != 0;
  if ( IsEdition(8778LL) )
  {
    if ( *((_BYTE *)a2 + 224) )
      goto LABEL_36;
    if ( v9 && *((_BYTE *)a2 + 458) && !v11 && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365) )
      v12 = 1;
  }
  if ( *((_BYTE *)a2 + 224) )
  {
LABEL_36:
    v21 = (char *)a2 + 152;
    if ( *((_BYTE *)a2 + 152) )
    {
      v22 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMPCTarget **))this + 5))(
              *((_QWORD *)this + 5),
              &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5,
              a4);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          394LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v22);
        __debugbreak();
      }
    }
    else
    {
      MPCInputRouter::FixViewIdForHitTestResult(v13, (struct LegacyInputInfo *)((char *)a2 + 152));
      MPCInputRouter::GetMPCTarget(
        (MPCInputRouter *)((char *)this - 768),
        *((_QWORD *)a2 + 24),
        *((_DWORD *)a2 + 50),
        a4);
    }
    goto LABEL_41;
  }
  if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365) )
  {
    v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMPCTarget **))this + 5))(
            *((_QWORD *)this + 5),
            &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5,
            a4);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        368LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
  }
  else
  {
    v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 2);
    if ( v15 )
    {
      v16 = (**v15)(v15, &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          372LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
    }
    else
    {
      v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 3);
      if ( v17 )
      {
        if ( *((_BYTE *)a2 + 458)
          || (v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IMPCTarget **))*((_QWORD *)this + 5)) == 0LL )
        {
          v20 = (**v17)(*((_QWORD *)this + 3), &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
          if ( v20 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              378LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
              (const char *)(unsigned int)v20);
            __debugbreak();
          }
        }
        else
        {
          v19 = (**v18)(v18, &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a4);
          if ( v19 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              384LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
              (const char *)(unsigned int)v19);
            __debugbreak();
          }
        }
      }
    }
  }
  v21 = (char *)a2 + 152;
LABEL_41:
  if ( !v9 )
    return;
  if ( v12 )
    goto LABEL_46;
  if ( !*((_BYTE *)a2 + 224) )
    return;
  if ( !*v21 || *((_DWORD *)a2 + 46) )
LABEL_46:
    v8 = 0;
  Instance = MPCHolographicInputManager::GetInstance();
  v24 = *(_DWORD *)a2;
  v25 = (__int64)Instance;
  v26 = *((_DWORD *)a2 + 1);
  v27 = 0;
  if ( v12 )
  {
    WindowIdFromViewId = *((_QWORD *)a2 + 58);
  }
  else
  {
    v27 = *((_DWORD *)a2 + 109);
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v27);
  }
  MPCHolographicInputManager::RequestForegroundChange(v25, WindowIdFromViewId, v27, (const char *)v26, v24, 0LL, v8);
}
