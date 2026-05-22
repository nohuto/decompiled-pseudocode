/*
 * XREFs of ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18007A2E8
 * Callers:
 *     ??$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@$$QEAPEAUIInputProcessorHost@@@Z @ 0x180069C60 (--$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VMPCG.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180028070 (-IsEdition@@YA_N_K@Z.c)
 *     ??4?$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z @ 0x18003AE00 (--4-$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800791E8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18007A270 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@M.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007A8C0 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??0MPCThrottleableInputHelper@@QEAA@IPEBG@Z @ 0x18007F69C (--0MPCThrottleableInputHelper@@QEAA@IPEBG@Z.c)
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x18007FCD4 (--0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800C19A4 (--0ManipulationInjector@@QEAA@XZ.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800C2244 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x1800C3750 (-SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z.c)
 *     ?SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z @ 0x1800C37C8 (-SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z.c)
 *     ?SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x1800C3804 (-SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z.c)
 */

// Hidden C++ exception states: #wind=25
MPCGestureHandler *__fastcall MPCGestureHandler::MPCGestureHandler(
        MPCGestureHandler *this,
        struct IInputProcessorHost *a2)
{
  _QWORD *v4; // r14
  const unsigned __int16 *v5; // r8
  const char *v6; // r9
  const char *v7; // r9
  void *v8; // rcx
  int v9; // edx
  int v10; // r8d
  HMONITOR v11; // rdx
  int v12; // eax
  const char *v13; // r9
  MPCSpatialGestureRecognizerHandler *v14; // rax
  const char *v15; // r9
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _DWORD *v19; // [rsp+70h] [rbp+18h]
  MPCSpatialGestureRecognizerHandler *v20; // [rsp+70h] [rbp+18h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>(this);
  *(_QWORD *)this = &MPCGestureHandler::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = &MPCGestureHandler::`vftable';
  ManipulationInjector::ManipulationInjector((MPCGestureHandler *)((char *)this + 80));
  *((_QWORD *)this + 111) = 0LL;
  v4 = (_QWORD *)((char *)this + 896);
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 228) = 0;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_DWORD *)this + 242) = 0;
  *((_BYTE *)this + 972) = 0;
  *((_DWORD *)this + 244) = 100;
  MPCThrottleableInputHelper::MPCThrottleableInputHelper((MPCGestureHandler *)((char *)this + 984), 0x64u, v5);
  Microsoft::WRL::ComPtr<IInputProcessorHost>::operator=((__int64 *)this + 112, (__int64)a2);
  if ( !*((_QWORD *)this + 112) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      24LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v6);
    __debugbreak();
  }
  v19 = operator new(0x60CuLL);
  memset_0(v19, 0, 0x60CuLL);
  v19[2] = 1548;
  v8 = (void *)*((_QWORD *)this + 111);
  *((_QWORD *)this + 111) = v19;
  if ( v8 )
    operator delete(v8, (const struct std::nothrow_t *)0x60C);
  if ( !*((_QWORD *)this + 111) )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      28LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v7);
    __debugbreak();
  }
  if ( IsEdition(8778LL) )
    ManipulationInjector::SetPanOverlapType((char *)this + 80, 0LL);
  ManipulationInjector::SetInjectionMechanism((char *)this + 80);
  *((_QWORD *)this + 109) = (char *)this + 72;
  ManipulationInjector::SetZoomDecreasingThresholds((MPCGestureHandler *)((char *)this + 80), v9, v10);
  ManipulationInjector::Initialize((MPCGestureHandler *)((char *)this + 80), v11, 0LL);
  **((_DWORD **)this + 111) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 32LL))(*v4);
  *(_DWORD *)(*((_QWORD *)this + 111) + 4LL) = 8;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v4 + 40LL))(
          *v4,
          *((_QWORD *)this + 111),
          (char *)this + 8);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      44LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v13);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v20 = (MPCSpatialGestureRecognizerHandler *)operator new(0xD8uLL);
    v14 = MPCSpatialGestureRecognizerHandler::MPCSpatialGestureRecognizerHandler(
            v20,
            **((_DWORD **)this + 111),
            (MPCGestureHandler *)((char *)this + 80));
    v16 = *((_QWORD *)this + 113);
    *((_QWORD *)this + 113) = v14;
    if ( v16 )
      std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()();
    if ( !*((_QWORD *)this + 113) )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        49LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
        v15);
  }
  return this;
}
