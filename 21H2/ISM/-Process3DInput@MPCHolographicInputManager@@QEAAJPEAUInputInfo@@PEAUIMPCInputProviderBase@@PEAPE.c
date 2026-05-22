/*
 * XREFs of ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18007792C
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18007EE90 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018A390 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018E530 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193B50 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195638 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180197A70 (-Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180197F80 (-Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180198BF0 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??4?$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z @ 0x18003AAC0 (--4-$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x180075BDC (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x1800768C4 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x180076914 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x180077044 (-MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@.c)
 *     ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x180077378 (-MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z.c)
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x1800777EC (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProvi.c)
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800780A0 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180078244 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007888C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor@@@details@wil@@QE.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180078AF4 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180078FD0 (-UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180079090 (-UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x180079164 (-UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::Process3DInput(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  __int64 v8; // rax
  struct ISystemInputRouter *v9; // rax
  __int64 v10; // rax
  struct IMPCTarget *v11; // rbx
  const char *v12; // r9
  wil::details::in1diag3 *v13; // rcx
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // r8
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int64 v19; // r8
  const char *v20; // r9
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // r8
  struct IMPCTarget *v24; // rbx
  __int64 v25; // rdi
  void (__fastcall *v26)(__int64, struct InputInfo *, __int64, struct IMPCTarget **); // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  ISMTracing *v30; // rcx
  char *v31; // r13
  MPCHolographicInputManager *v32; // rcx
  unsigned int v33; // edi
  char v34; // bl
  MPCHolographicInputManager *v35; // rcx
  char *v36; // r15
  char *v37; // r8
  struct IMPCInputProviderBase *v38; // rdx
  const char *v39; // r9
  int v40; // eax
  int v41; // edi
  __int64 v42; // kr00_8
  __int64 v43; // rcx
  ISMTracing *v44; // rcx
  __int64 (__fastcall **v46)(); // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v47; // [rsp+38h] [rbp-C8h]
  __int64 (__fastcall ***v48)(); // [rsp+68h] [rbp-98h]
  _BYTE v49[384]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]
  struct IMPCTarget *v51; // [rsp+200h] [rbp+100h] BYREF

  if ( !*((_BYTE *)this + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      349LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !*((_QWORD *)this + 288) )
  {
    v8 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 256LL))(a3);
    Microsoft::WRL::ComPtr<IInputProcessorHost>::operator=((__int64 *)this + 288, v8);
    v9 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 288) + 64LL))(*((_QWORD *)this + 288));
    MPCHolographicInputManager::SetMPCInputRouter(this, v9);
  }
  if ( !*((_QWORD *)this + 286) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      358LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
LABEL_50:
    wil::details::in1diag3::_FailFast_Unexpected(
      v13,
      369LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v12);
    goto LABEL_51;
  }
  MPCHolographicInputManager::UpdateGazeSensorData(this, a2);
  MPCHolographicInputManager::UpdatePrimary(this);
  v10 = *(_QWORD *)a3;
  if ( *((_BYTE *)a2 + 2025) )
  {
    v11 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v10 + 232))(a3);
    v51 = v11;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v51);
    v13 = retaddr;
    if ( v11 )
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v51);
      *a4 = v11;
      v14 = (_OWORD *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 240LL))(a3);
      v15 = v49;
      v16 = 2LL;
      do
      {
        *v15 = *v14;
        v15[1] = v14[1];
        v15[2] = v14[2];
        v15[3] = v14[3];
        v15[4] = v14[4];
        v15[5] = v14[5];
        v15[6] = v14[6];
        v15 += 8;
        *(v15 - 1) = v14[7];
        v14 += 8;
        --v16;
      }
      while ( v16 );
      *v15 = *v14;
      v15[1] = v14[1];
      v15[2] = v14[2];
      v15[3] = v14[3];
      *((_QWORD *)v15 + 8) = *((_QWORD *)v14 + 8);
      v17 = (_OWORD *)((char *)a2 + 152);
      v18 = v49;
      v19 = 2LL;
      do
      {
        *v17 = *v18;
        v17[1] = v18[1];
        v17[2] = v18[2];
        v17[3] = v18[3];
        v17[4] = v18[4];
        v17[5] = v18[5];
        v17[6] = v18[6];
        v17 += 8;
        *(v17 - 1) = v18[7];
        v18 += 8;
        --v19;
      }
      while ( v19 );
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      *((_QWORD *)v17 + 8) = *((_QWORD *)v18 + 8);
LABEL_17:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v51);
      goto LABEL_20;
    }
    goto LABEL_50;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(v10 + 72))(a3) )
  {
    if ( *((_QWORD *)this + 293) )
    {
      v21 = (_OWORD *)((char *)a2 + 152);
      v22 = (_OWORD *)((char *)this + 400);
      v23 = 2LL;
      do
      {
        *v21 = *v22;
        v21[1] = v22[1];
        v21[2] = v22[2];
        v21[3] = v22[3];
        v21[4] = v22[4];
        v21[5] = v22[5];
        v21[6] = v22[6];
        v21 += 8;
        *(v21 - 1) = v22[7];
        v22 += 8;
        --v23;
      }
      while ( v23 );
      *v21 = *v22;
      v21[1] = v22[1];
      v21[2] = v22[2];
      v21[3] = v22[3];
      *((_QWORD *)v21 + 8) = *((_QWORD *)v22 + 8);
      v24 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 293) + 224LL))(
                                   *((_QWORD *)this + 293),
                                   128LL);
      v51 = v24;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v51);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v51);
      *a4 = v24;
      goto LABEL_17;
    }
LABEL_51:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      378LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v20);
    __debugbreak();
  }
  MPCHolographicInputManager::PrepAndStabilizeTargetingRay(this, a2, a3);
  v25 = *((_QWORD *)this + 287);
  v26 = *(void (__fastcall **)(__int64, struct InputInfo *, __int64, struct IMPCTarget **))(*(_QWORD *)v25 + 64LL);
  v27 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 224LL))(a3);
  v26(v25, a2, v27, a4);
  if ( ISMTracing::IsEnabled(v28) )
  {
    wil::details::static_lazy<ISMTracing>::get(v29, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_Process3DInput_HitTestResult_(v30, a2);
  }
LABEL_20:
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 200LL))(a3, *a4);
  v31 = (char *)a2 + 152;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, char *))(*(_QWORD *)a3 + 216LL))(a3, (char *)a2 + 152);
  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor>::GetImpl'::`2'::impl,
      0LL);
    MPCHolographicInputManager::ProcessCursorData(
      this,
      *((_QWORD *)this + 293),
      (char *)a2 + 152,
      0LL,
      (char *)this + 2400);
    memcpy_0((char *)this + 248, a2, 0x7F0uLL);
  }
  MPCHolographicInputManager::UpdateGazeDrivenProviders(this, a2);
  MPCHolographicInputManager::ProcessCapture(v32, a2, a3, a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 208LL))(a3, *a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a3 + 128LL))(
    a3,
    this,
    a2);
  v33 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 322) + 264LL))(**((_QWORD **)this + 322))
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 322) + 72LL))(**((_QWORD **)this + 322))
    || (v34 = 1, a3 != *((struct IMPCInputProviderBase **)this + 293)) )
  {
    v34 = 0;
  }
  if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) || v34 )
  {
    if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) )
      *((_BYTE *)this + 2280) = *((_BYTE *)a2 + 456) != 0;
    LOBYTE(v51) = 0;
    v46 = off_1801B0CB0;
    v47 = (__int64 *)&v51;
    v48 = &v46;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v46);
    if ( !*((_BYTE *)a2 + 2024) )
    {
      v36 = (char *)a2 + 480;
      if ( !MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v35, a3) )
        v33 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 320LL))(a3);
      v37 = (char *)this + 400;
      if ( v34 )
      {
        v38 = (struct IMPCInputProviderBase *)**((_QWORD **)this + 322);
      }
      else
      {
        v37 = v31;
        v38 = a3;
      }
      MPCHolographicInputManager::ProcessCursorData(this, v38, v37, v33, v36);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 352LL))(a3)
      && (((*((_QWORD *)this + 323) - *((_QWORD *)this + 322)) & 0xFFFFFFFFFFFFFFF8uLL) == 8
       || (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 320LL))(a3) != 2) )
    {
      if ( *((_QWORD *)this + 334) != *((_QWORD *)this + 335) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          458LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v39);
        __debugbreak();
      }
      if ( *((_QWORD *)this + 337) != *((_QWORD *)this + 338) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          459LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v39);
        __debugbreak();
      }
      v46 = off_1801B0D10;
      v47 = (__int64 *)this;
      v48 = &v46;
      MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v46);
      v40 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 297) + 80LL))(
              *((_QWORD *)this + 297),
              (*((_QWORD *)this + 335) - *((_QWORD *)this + 334)) / 184LL);
      if ( v40 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          473LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v40);
        __debugbreak();
      }
      v41 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 48LL))(a3);
      v42 = *((_QWORD *)this + 335) - *((_QWORD *)this + 334);
      if ( ISMTracing::IsEnabled((unsigned __int64)(v42
                                                  + ((unsigned __int128)(v42 * (__int128)(__int64)0xB21642C8590B2165uLL) >> 64)) >> 63) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v43,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHolographicInputManager_SendPoints_(v44, (unsigned int)(v42 / 184), v41);
      }
      *((_QWORD *)this + 335) = *((_QWORD *)this + 334);
    }
  }
  return 0LL;
}
