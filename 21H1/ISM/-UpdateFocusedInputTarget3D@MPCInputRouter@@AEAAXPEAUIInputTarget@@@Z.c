/*
 * XREFs of ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800B9AE8
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180019D80 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B38 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180044934 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAEA_N$$QEAPEAUIMPCFocusTarget@@$$QEA_NAEA_K@Z @ 0x1800B740C (--$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAE.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800B7DA8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800B8900 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800B9738 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800BA0CC (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD15C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD41C (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCInputRouter::UpdateFocusedInputTarget3D(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  int v4; // edi
  __int64 v5; // r13
  __int64 (__fastcall *v6)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // esi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int v13; // ebx
  struct ViewHierarchyWithWindowManager *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  struct IMPCTarget *v20; // rbx
  int v21; // r15d
  int FrameworkViewTypeFromFocusTarget; // r12d
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v24; // rax
  __int64 v25; // rsi
  struct InputSiteManager *v26; // rax
  __int64 *v27; // rax
  struct IMPCTarget *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int ProcessIdFromViewId; // [rsp+40h] [rbp-40h] BYREF
  int v32; // [rsp+44h] [rbp-3Ch]
  struct IInputTarget *v33; // [rsp+48h] [rbp-38h] BYREF
  __int64 WindowIdFromViewId; // [rsp+50h] [rbp-30h] BYREF
  __int64 v35; // [rsp+58h] [rbp-28h] BYREF
  __int64 v36; // [rsp+60h] [rbp-20h] BYREF
  struct IMPCTarget *v37[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  int v39; // [rsp+C8h] [rbp+48h] BYREF
  int v40; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v41; // [rsp+D8h] [rbp+58h] BYREF

  if ( a2 )
  {
    v4 = 0;
    v32 = 0;
    if ( MPCInputRouter::IsTargetHolographic(this, a2) )
    {
      WindowIdFromViewId = 0LL;
      ProcessIdFromViewId = 0;
      v5 = 0LL;
      v39 = 0;
      v41 = 0;
      v33 = 0LL;
      v6 = **a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v33);
      if ( (int)v6((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, (__int64 *)&v33) < 0 )
        goto LABEL_12;
      v7 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)v33 + 64LL))(
             v33,
             &WindowIdFromViewId);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          277LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v7);
      v8 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)v33 + 32LL))(
             v33,
             &ProcessIdFromViewId);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          278LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)v33 + 56LL))(v33, &v41);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          279LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v9);
      v10 = v41;
      if ( v41 )
      {
        v5 = WindowIdFromViewId;
        v11 = ProcessIdFromViewId;
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v10);
        v13 = v41;
        v14 = ISMStatics::GetViewHierarchy();
        ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v14, v13);
      }
      else
      {
LABEL_12:
        v11 = v39;
      }
      LOBYTE(v39) = 0;
      v15 = *((_QWORD *)this + 99);
      if ( v15
        && (v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15), WindowIdFromViewId == v16)
        && (v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 88LL))(*((_QWORD *)this + 99)),
            v41 == v17) )
      {
        LOBYTE(v39) = 1;
      }
      else if ( v33 )
      {
        v40 = 0;
        v18 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v33 + 32LL))(v33, &v40);
        if ( v18 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            300LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v18);
          __debugbreak();
        }
        v37[0] = 0LL;
        v20 = (struct IMPCTarget *)RefCountedObject::operator new(0x60uLL);
        v37[1] = v20;
        if ( v20 )
        {
          v21 = v40;
          FrameworkViewTypeFromFocusTarget = MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v19, v33);
          if ( v41 )
          {
            InputSiteManager = ISMStatics::GetInputSiteManager();
            v24 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v36, 1, v5, v11);
            v4 = 1;
            v32 = 1;
            v25 = *v24;
          }
          else
          {
            v25 = 0LL;
          }
          v26 = ISMStatics::GetInputSiteManager();
          v27 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)v26, &v35, 1, WindowIdFromViewId, v40);
          v4 |= 2u;
          v32 = v4;
          v28 = (struct IMPCTarget *)MPCFocusTarget::MPCFocusTarget(
                                       v20,
                                       v33,
                                       *v27,
                                       v25,
                                       FrameworkViewTypeFromFocusTarget,
                                       v21,
                                       0);
        }
        else
        {
          v28 = 0LL;
        }
        v37[0] = v28;
        if ( (v4 & 2) != 0 )
        {
          v4 &= ~2u;
          v32 = v4;
          v29 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
        }
        if ( (v4 & 1) != 0 )
        {
          v30 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
        }
        MPCInputRouter::Set3DFocusTarget(
          this,
          (struct IMPCFocusTarget *)(((unsigned __int64)v28 + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)v28 >> 64)));
        if ( v28 )
          (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v28 + 16LL))(v28);
      }
      LOBYTE(v40) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 32LL))(*((_QWORD *)this + 99));
      v37[0] = *((struct IMPCTarget **)this + 99);
      ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D<bool &,IMPCFocusTarget *,bool,unsigned __int64 &>(
        (bool *)&v39,
        v37,
        (bool *)&v40,
        (unsigned __int64 *)&WindowIdFromViewId);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v33);
    }
  }
}
