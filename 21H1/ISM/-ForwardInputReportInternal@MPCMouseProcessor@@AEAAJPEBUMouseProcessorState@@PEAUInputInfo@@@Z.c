/*
 * XREFs of ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195668
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195470 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MRHitTestUpdate_29136479@@@details@wil@@QEAA_NXZ @ 0x180040510 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MRHitTestUpdate_2913647.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064630 (--1-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x1800735C0 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180075F44 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800764B0 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x180076A3C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180077ACC (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CC88 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800839A0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180084EE8 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x18019514C (-ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputMa.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x180195184 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801994D4 (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180199514 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCMouseProcessor::ForwardInputReportInternal(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  int v6; // eax
  unsigned __int64 v7; // r14
  const char *v8; // r9
  unsigned int v9; // ebx
  bool v10; // zf
  MPCHolographicInputManager *Instance; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  const char *v15; // r9
  char v16; // r12
  int v17; // r15d
  struct MPCHolographicInputManager *v18; // rax
  bool v20; // al
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // r8d
  MPCHolographicInputManager *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  const char *v27; // r9
  MPCHolographicInputManager *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  const char *v31; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  _DWORD v33[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct IMPCTarget *v34[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v35[24]; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+68h] [rbp-98h]
  _BYTE v37[4]; // [rsp+E8h] [rbp-18h] BYREF
  float v38; // [rsp+ECh] [rbp-14h]
  float v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+108h] [rbp+8h]
  __int64 v41; // [rsp+110h] [rbp+10h]
  char v42; // [rsp+130h] [rbp+30h]
  char v43; // [rsp+218h] [rbp+118h]
  bool v44; // [rsp+839h] [rbp+739h]
  wil::details::in1diag3 *retaddr; // [rsp+888h] [rbp+788h]

  if ( (*((_WORD *)a3 + 46) & 0xC00) != 0 )
    v6 = *((__int16 *)a3 + 47);
  else
    v6 = 0;
  *((_DWORD *)this + 1565) = v6;
  v7 = (unsigned __int64)this + 40;
  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this + 40) )
  {
    memset_0(v35, 0, 0x7F0uLL);
    v36 = 2032;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_MRHitTestUpdate_29136479>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_MRHitTestUpdate_29136479>::GetImpl'::`2'::impl) )
      v10 = *((_QWORD *)this + 577) == 0LL;
    else
      v10 = *((_QWORD *)this + 578) == 0LL;
    v44 = !v10 && (*((_BYTE *)this + 6360) || !*((_DWORD *)a3 + 25) && !*((_DWORD *)a3 + 26));
    v34[0] = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v34);
    v12 = MPCHolographicInputManager::Process3DInput(
            Instance,
            (struct InputInfo *)v35,
            (struct IMPCInputProviderBase *)(v7 & -(__int64)(this != 0LL)),
            v34);
    v13 = v12;
    if ( v12 >= 0 )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_MRHitTestUpdate_29136479>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_MRHitTestUpdate_29136479>::GetImpl'::`2'::impl)
        && !v34[0] )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          254LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          v15);
        goto LABEL_53;
      }
      if ( v42 )
      {
        v16 = 1;
        *((_QWORD *)a3 + 8) = v41;
        *((_DWORD *)a3 + 18) = 1;
      }
      else
      {
        v16 = 0;
      }
      if ( (*((_BYTE *)this + 6268) & 0x10) != 0 )
        MPCGestureCancelTracker::TrackPosition(
          (MPCMouseProcessor *)((char *)this + 6376),
          (MPCMouseProcessor *)((char *)this + 6284));
      if ( !MPCMouseProcessor::ButtonToInteractionState(
              this,
              *((_DWORD *)a2 + 4),
              16,
              (enum MPCHolographicInputManager::InteractionState *)v33) )
        goto LABEL_36;
      v17 = v33[0];
      if ( v33[0] == 1 )
        MPCGestureCancelTracker::StartTracking(
          (MPCMouseProcessor *)((char *)this + 6376),
          (MPCMouseProcessor *)((char *)this + 6284),
          0.0125);
      if ( *((_BYTE *)this + 6393) && *((_BYTE *)this + 6392) )
      {
        v17 = 2;
        *((_WORD *)this + 3196) = 0;
        *((_DWORD *)this + 1599) = 0;
      }
      v18 = MPCHolographicInputManager::GetInstance();
      v12 = MPCHolographicInputManager::InjectInteractionState(
              (__int64)v18,
              v17,
              **((_DWORD **)this + 8),
              (__int64)v37,
              (__int64)v34[0]);
      v13 = v12;
      if ( v12 >= 0 )
      {
LABEL_36:
        v20 = v37[0] != 0;
        *((_BYTE *)this + 6320) = v37[0] != 0;
        if ( v20 )
        {
          v21 = (int)v38;
          *((_DWORD *)a3 + 25) = (int)v38;
          v22 = (int)v39;
          *((_DWORD *)a3 + 26) = (int)v39;
          *((_DWORD *)a3 + 10) = v40;
          *((_BYTE *)a3 + 122) = 1;
          MPCMouseProcessor::DownLevelInput(this, a2, a3, v21, v22, v43 != 0);
        }
        else if ( *((_BYTE *)this + 6321) && !*((_QWORD *)this + 576) )
        {
          *((_DWORD *)a3 + 10) = *((_DWORD *)this + 1581);
          *((_BYTE *)a3 + 122) = 1;
          MPCMouseProcessor::DownLevelInput(
            this,
            a2,
            a3,
            *((_DWORD *)this + 1582),
            *((_DWORD *)this + 1583),
            *((_DWORD *)this + 1584) != 0);
        }
        if ( MPCMouseProcessor::ButtonToInteractionState(
               this,
               *((_DWORD *)a2 + 4),
               32,
               (enum MPCHolographicInputManager::InteractionState *)v33)
          && !v33[0] )
        {
          MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, v23 - 29, v23 - 30);
        }
        Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>((__int64 *)v34);
        if ( v16 )
          goto LABEL_51;
        goto LABEL_45;
      }
      v14 = 291LL;
    }
    else
    {
      v14 = 250LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>((__int64 *)v34);
    return v13;
  }
  if ( (*((_BYTE *)this + 6268) & 0x70) != 0 )
  {
LABEL_8:
    MPCInputProviderBase::SetRequestingPrimary((MPCMouseProcessor *)((char *)this + 16));
    *((_BYTE *)this + 6320) = 0;
    *((_DWORD *)this + 1585) = 1;
    goto LABEL_45;
  }
  v9 = *((_DWORD *)this + 1564);
  if ( !MPCConstantManager::s_instance )
  {
LABEL_53:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v8);
    __debugbreak();
  }
  v34[0] = (struct IMPCTarget *)L"ActivationDelta";
  v34[1] = (struct IMPCTarget *)15;
  if ( v9 > (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                            (__int64)MPCConstantManager::s_instance,
                            (__int64 *)(v7 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                            (__int128 *)v34) )
    goto LABEL_8;
LABEL_45:
  v24 = MPCHolographicInputManager::GetInstance();
  if ( (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(v24, v25, v26, v27)
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365) )
  {
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2366) )
    {
      *((_DWORD *)a3 + 29) = 1;
    }
    else
    {
      v28 = MPCHolographicInputManager::GetInstance();
      FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(v28, v29, v30, v31);
      *((_DWORD *)a3 + 10) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 56LL))(FocusedTarget);
      MPCMouseProcessor::DownLevelInput(this, a2, a3, *((_DWORD *)a3 + 25), *((_DWORD *)a3 + 26), 0);
    }
    *((_BYTE *)this + 6320) = 0;
  }
LABEL_51:
  *((_DWORD *)this + 1566) = *((_DWORD *)a2 + 4);
  return 0LL;
}
