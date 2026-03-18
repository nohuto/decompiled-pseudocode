/*
 * XREFs of ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274
 * Callers:
 *     ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C01A6AE0 (-UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01A77A0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A7B04 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C01AA9F0 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01DF790 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C01E8020 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C01E9210 (-UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C039B524 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C039D9F8 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C039DE58 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C039EE30 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C03A3090 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // r13d
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  KIRQL CurrentIrql; // al
  __int64 v19; // r12
  struct DXGTHREAD *v20; // rdi
  int v21; // r14d
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGTHREAD *Current; // rax
  int v31; // r9d
  KIRQL v32; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-49h] BYREF
  int v34; // [rsp+58h] [rbp-41h] BYREF
  __int64 v35; // [rsp+60h] [rbp-39h]
  char v36; // [rsp+68h] [rbp-31h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *v37; // [rsp+70h] [rbp-29h]
  char v38[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  v37 = a2;
  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 23, 1u);
  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 5026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 5026);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 5026);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v13 = *((_QWORD *)Current + 3)) == 0 )
  {
    v13 = v12;
  }
  v14 = 0;
  v15 = (v13 + 152) & -(__int64)(v13 != 0);
  if ( v15 && *(struct _KTHREAD **)(((v13 + 152) & -(__int64)(v13 != 0)) + 8) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v13 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((v13 + 152) & -(__int64)(v13 != 0), 0LL) )
    {
      if ( bTracingEnabled )
      {
        v31 = *(_DWORD *)(((v13 + 152) & -(__int64)(v13 != 0)) + 0x18);
        if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (const EVENT_DESCRIPTOR *)"g", v17, v31);
      }
      ExAcquirePushLockExclusiveEx((v13 + 152) & -(__int64)(v13 != 0), 0LL);
    }
    v14 = 2;
    *(_QWORD *)(((v13 + 152) & -(__int64)(v13 != 0)) + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql;
  v20 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v20 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v20 = DxgThread) != 0LL)) )
  {
    v21 = *((_DWORD *)v20 + 12);
  }
  else
  {
    v21 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v38,
    *((struct DXGADAPTER **)this + 2));
  v22 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *))(*((_QWORD *)this + 2) + 624LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v38[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v19 != KeGetCurrentIrql() )
  {
    v32 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v19, v32);
  }
  if ( v20 )
  {
    v24 = *((int *)v20 + 12);
    if ( (_DWORD)v24 != v21 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v20 + 12), v21, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
  v25[3] = v22;
  v26 = v37;
  v25[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 280LL);
  v25[5] = v26->hConstrainingVidPn;
  if ( (_DWORD)v22 != -1073741801 && (_DWORD)v22 )
  {
    WdLogSingleEntry1(2LL, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v14 == 2 )
  {
    *(_QWORD *)(v15 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v34);
  return (unsigned int)v22;
}
