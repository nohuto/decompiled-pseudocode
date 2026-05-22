/*
 * XREFs of ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B92B0
 * Callers:
 *     _lambda_ec705bf725d52d27b1686ede0253a48a_::_lambda_invoker_cdecl_ @ 0x1800B7320 (_lambda_ec705bf725d52d27b1686ede0253a48a_--_lambda_invoker_cdecl_.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B9828 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B38 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180018400 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180044934 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7338 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B7C50 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Attach@?$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800B7CF0 (-Attach@-$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPE.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800B7DA8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x1800B8DAC (-MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800B9910 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800BA0CC (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x1800BD330 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall MPCInputRouter::OnExclusiveModeStateChangedInputThread(MPCInputRouter *this)
{
  __int64 *v2; // r14
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  void *v15; // r15
  char v16; // r12
  int v17; // edi
  int FrameworkViewTypeFromFocusTarget; // ebx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  ISMTracing *v24; // rcx
  int v25; // [rsp+30h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IInputTarget *v27; // [rsp+A8h] [rbp+48h] BYREF
  struct IInputTarget *v28; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+58h] BYREF

  if ( *((_BYTE *)this + 888) != (*((_BYTE *)this + 872) != 0)
    || *((_DWORD *)this + 223) != *((_DWORD *)this + 219)
    || *((_QWORD *)this + 112) != *((_QWORD *)this + 110) )
  {
    *((_BYTE *)this + 888) = *((_BYTE *)this + 872) != 0;
    *((_DWORD *)this + 223) = *((_DWORD *)this + 219);
    *((_QWORD *)this + 112) = *((_QWORD *)this + 110);
    v2 = (__int64 *)((char *)this + 784);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 98);
    if ( *((_BYTE *)this + 888) )
    {
      v3 = (__int64 *)((char *)this + 792);
      v4 = *((_QWORD *)this + 99);
      if ( v4 && (v5 = *((_QWORD *)this + 110), v5 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4))
        || (v3 = (__int64 *)((char *)this + 800), (v6 = *((_QWORD *)this + 100)) != 0)
        && (v7 = *((_QWORD *)this + 110), v7 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6)) )
      {
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v2, v3);
      }
      else
      {
        v28 = 0LL;
        v27 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
        v9 = *((_QWORD *)this + 112);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v9);
        v12 = DWMInputRouter::CreateAndRegisterTarget(
                this,
                *((_DWORD *)this + 223),
                0,
                ViewIdFromWindowId,
                0,
                v9,
                0,
                0,
                &v28);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            820LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v12);
          __debugbreak();
        }
        v13 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v28,
                (__int64 *)&v27);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            821LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        v15 = RefCountedObject::operator new(0x60uLL);
        v16 = 1;
        if ( v15 )
        {
          v17 = *((_DWORD *)this + 223);
          FrameworkViewTypeFromFocusTarget = MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v14, v27);
          InputSiteManager = ISMStatics::GetInputSiteManager();
          v20 = InputSiteManager::GetOrCreateInputSiteFromId(
                  (__int64)InputSiteManager,
                  &v29,
                  1,
                  *((_QWORD *)this + 112),
                  *((_DWORD *)this + 223));
          LOBYTE(v25) = 0;
          v21 = MPCFocusTarget::MPCFocusTarget(v15, v27, *v20, 0LL, FrameworkViewTypeFromFocusTarget, v17, v25);
        }
        else
        {
          v21 = 0LL;
          v16 = 0;
        }
        Microsoft::WRL::ComPtr<Windows::Internal::Holographic::SpatialGraphDriverClient>::Attach(
          v2,
          (v21 + 64) & -(__int64)(v21 != 0));
        if ( (v16 & 1) != 0 )
        {
          v22 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v27);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      }
      if ( ISMTracing::IsEnabled(v8) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v23,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
          v24,
          *((_BYTE *)this + 888),
          *((_DWORD *)this + 223),
          *((_QWORD *)this + 112));
      }
    }
    MPCInputRouter::Update3DFocusWNF(this);
  }
}
