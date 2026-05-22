/*
 * XREFs of ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B85B0
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800B9200 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B38 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x180018620 (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180021460 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800214E4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x1800282B4 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180044934 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180078C84 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7338 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Try_emplace@_K$$V@?$unordered_map@_KPEAUIMPCTarget@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K@Z @ 0x1800B7964 (--$_Try_emplace@_K$$V@-$unordered_map@_KPEAUIMPCTarget@@U-$hash@_K@std@@U-$equal_to@_K@3@V-$allo.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x1800B7C00 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?Attach@?$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800B7CF0 (-Attach@-$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPE.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800B9738 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800BA0CC (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCInputRouter::Initialize3DComponents(MPCInputRouter *this, __int64 a2, __int64 a3, const char *a4)
{
  struct IMPCFocusTarget **v5; // r14
  MPCHolographicInputManager *Instance; // rax
  __int64 v7; // r8
  const char *v8; // r9
  int *v9; // r15
  int v10; // eax
  const char *v11; // r9
  struct IInputTarget *v12; // rbx
  struct IInputTarget *InputHostTargetForProcessId; // rax
  const char *v14; // r9
  int v15; // eax
  int v16; // eax
  void *v17; // rsi
  int v18; // ebx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v20; // rax
  char v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct IMPCFocusTarget *v24; // rbx
  RTL_SRWLOCK *v25; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v27; // eax
  int v28; // [rsp+30h] [rbp-38h]
  __int64 v29; // [rsp+40h] [rbp-28h] BYREF
  void *v30; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v31[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  struct IInputTarget *v33; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+48h] BYREF
  struct IInputTarget *v35; // [rsp+B8h] [rbp+50h] BYREF

  if ( !*((_BYTE *)this + 864) )
  {
    *((_BYTE *)this + 864) = 1;
    if ( !*((_QWORD *)this + 102) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        432LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        a4);
      __debugbreak();
    }
    v5 = (struct IMPCFocusTarget **)((char *)this + 808);
    if ( *((_QWORD *)this + 101) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        433LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        a4);
      __debugbreak();
    }
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::SetMPCInputRouter(Instance, this, v7, v8);
    v9 = (int *)((char *)this + 824);
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 102) + 24LL))(
            *((_QWORD *)this + 102),
            (char *)this + 824);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        440LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v12 = 0LL;
    v35 = 0LL;
    if ( !ISMTestMode::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        33LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
        v11);
      __debugbreak();
    }
    if ( !*(_BYTE *)ISMTestMode::s_instance )
    {
      InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(this, *v9);
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)&v35, (__int64)InputHostTargetForProcessId);
      v12 = v35;
      if ( !v35 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          446LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          v14);
        __debugbreak();
      }
    }
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
    v15 = DWMFocusedInputTarget::Create(v12, *((_DWORD *)this + 207), 0, 0, 0LL, 0, 0, &v33);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        459LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v34 = 0LL;
    v16 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v33,
            &v34);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        462LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    v17 = RefCountedObject::operator new(0x60uLL);
    v30 = v17;
    if ( v17 )
    {
      v18 = *v9;
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v20 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v29, 1, 0LL, *v9);
      v21 = 1;
      LOBYTE(v28) = 1;
      v22 = MPCFocusTarget::MPCFocusTarget(v17, v34, *v20, 0LL, 5, v18, v28);
    }
    else
    {
      v22 = 0LL;
      v21 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::SpatialGraphDriverClient>::Attach(
      (__int64 *)this + 101,
      (v22 + 64) & -(__int64)(v22 != 0));
    if ( (v21 & 1) != 0 )
    {
      v23 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    MPCInputRouter::Set3DFocusTarget(this, *v5);
    v24 = *v5;
    v30 = 0LL;
    std::unordered_map<unsigned __int64,IMPCTarget *>::_Try_emplace<unsigned __int64,>(
      (__int64)this + 904,
      (__int64)v31,
      (const unsigned __int8 *)&v30);
    *(_QWORD *)(v31[0] + 24LL) = v24;
    v25 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v25);
    v27 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, char *))(*(_QWORD *)PostProcessor + 96LL))(
            PostProcessor,
            (char *)this + 776);
    if ( v27 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        481LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v27);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
  }
}
