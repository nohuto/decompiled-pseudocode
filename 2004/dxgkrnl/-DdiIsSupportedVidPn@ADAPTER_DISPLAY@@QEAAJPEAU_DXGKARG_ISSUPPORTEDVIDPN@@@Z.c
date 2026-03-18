/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C010FC8C
 * Callers:
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C010F5D0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C010F944 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C0138EE0 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02DF254 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02DF7D8 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  D3DKMDT_HVIDPN hDesiredVidPn; // rbx
  D3DKMDT_HVIDPN v8; // rcx
  _QWORD *v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int8 CurrentIrql; // r13
  struct DXGTHREAD *v22; // rdi
  struct DXGTHREAD *v23; // rax
  int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 IsVidPnSupported; // rcx
  __int64 v33; // rdx
  unsigned int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v44; // rax
  int v45; // r9d
  _QWORD *v46; // rax
  unsigned __int8 v47; // cl
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // [rsp+24h] [rbp-5Ch]
  int v52; // [rsp+28h] [rbp-58h] BYREF
  __int64 v53; // [rsp+30h] [rbp-50h]
  char v54; // [rsp+38h] [rbp-48h]
  char v55[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 8);
  v52 = -1;
  v53 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 5025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 5025);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 5025LL);
  hDesiredVidPn = a2->hDesiredVidPn;
  if ( a2->hDesiredVidPn && *((_DWORD *)hDesiredVidPn + 16) == 1833172997 )
    v8 = a2->hDesiredVidPn;
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = v8 + 30;
    if ( (_QWORD *)*v9 == v9 )
    {
      v42 = WdLogNewEntry5_WdError(v9, v6);
      *(_QWORD *)(v42 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
      *(_QWORD *)(v42 + 32) = a2->hDesiredVidPn;
      WdLogEvent5_WdError(v42);
      v34 = 0;
      a2->IsVidPnSupported = 1;
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(v9, v6);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v14 = ProcessDxgProcess;
      if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
        || (Current = DXGTHREAD::GetCurrent(v13, v12)) == 0LL
        || (v15 = *((_QWORD *)Current + 1)) == 0 )
      {
        v15 = v14;
      }
      v51 = 0;
      v16 = (v15 + 112) & -(__int64)(v15 != 0);
      if ( v16 && *(struct _KTHREAD **)(((v15 + 112) & -(__int64)(v15 != 0)) + 8) == KeGetCurrentThread() )
      {
        v44 = WdLogNewEntry5_WdAssertion(v15 + 112, v12);
        *(_QWORD *)(v44 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v44);
      }
      if ( v15 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((v15 + 112) & -(__int64)(v15 != 0), 0LL) )
        {
          if ( bTracingEnabled )
          {
            v45 = *(_DWORD *)(((v15 + 112) & -(__int64)(v15 != 0)) + 0x18);
            if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v17, &EventBlockThread, v18, v45);
          }
          ExAcquirePushLockExclusiveEx((v15 + 112) & -(__int64)(v15 != 0), 0LL);
        }
        *(_QWORD *)(((v15 + 112) & -(__int64)(v15 != 0)) + 8) = KeGetCurrentThread();
        v51 = 2;
      }
      DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
      CurrentIrql = KeGetCurrentIrql();
      v22 = 0LL;
      if ( CurrentIrql < 2u && (v23 = DXGTHREAD::GetCurrent(v20, v19), (v22 = v23) != 0LL) )
        v24 = *((_DWORD *)v23 + 8);
      else
        v24 = 0;
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v55,
        *((struct DXGADAPTER **)this + 2));
      v28 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 520LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
              a2);
      if ( v55[0] )
        KeUnstackDetachProcess(&ApcState);
      v29 = KeGetCurrentIrql();
      if ( CurrentIrql != (_BYTE)v29 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v25);
        v46[3] = 275LL;
        v46[4] = 16LL;
        v46[5] = this;
        v46[6] = CurrentIrql;
        v47 = KeGetCurrentIrql();
        v46[7] = v47;
        WdLogEvent5_WdCriticalError(v46);
      }
      if ( v22 && *((_DWORD *)v22 + 8) != v24 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v25);
        v48[3] = 275LL;
        v48[4] = 38LL;
        v49 = *((int *)v22 + 8);
        v48[7] = 0LL;
        v48[5] = v49;
        v48[6] = v24;
        WdLogEvent5_WdCriticalError(v48);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v25, v26, v27);
      v30[3] = v28;
      v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
      v30[4] = v31;
      v30[5] = a2->hDesiredVidPn;
      IsVidPnSupported = a2->IsVidPnSupported;
      v30[6] = IsVidPnSupported;
      if ( (_DWORD)v28 != -1073741801 && (_DWORD)v28 )
      {
        v50 = WdLogNewEntry5_WdError(IsVidPnSupported, v31);
        *(_QWORD *)(v50 + 24) = v28;
        WdLogEvent5_WdError(v50);
      }
      DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
      v34 = v28;
      if ( v51 == 2 )
      {
        *(_QWORD *)(v16 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v16, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v38 + 24) = hDesiredVidPn;
    WdLogEvent5_WdError(v38);
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
    v34 = -1071774973;
    v41[3] = -1071774973LL;
    v41[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
    v41[5] = a2->hDesiredVidPn;
    WdLogEvent5_WdError(v41);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v33);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v52);
  return v34;
}
