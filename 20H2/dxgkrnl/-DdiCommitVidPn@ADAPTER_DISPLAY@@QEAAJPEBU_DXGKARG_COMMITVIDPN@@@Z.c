/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C0145A54
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0145900 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCommitVidPn(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_COMMITVIDPN *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v9; // rdi
  struct DXGTHREAD *Current; // rax
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  ULONG TimeIncrement; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  _QWORD *v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-99h] BYREF
  __int64 v33; // [rsp+28h] [rbp-91h]
  char v34; // [rsp+30h] [rbp-89h]
  __int64 v35; // [rsp+38h] [rbp-81h]
  __int64 v36; // [rsp+40h] [rbp-79h]
  _DWORD v37[2]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v38[24]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v39; // [rsp+70h] [rbp-49h]
  int v40; // [rsp+78h] [rbp-41h]
  int v41; // [rsp+7Ch] [rbp-3Dh]
  int v42; // [rsp+80h] [rbp-39h]
  DXGKARG_COMMITVIDPN_FLAGS Flags; // [rsp+84h] [rbp-35h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID AffectedVidPnSourceId; // [rsp+88h] [rbp-31h]
  int v45; // [rsp+8Ch] [rbp-2Dh]
  __int64 v46; // [rsp+90h] [rbp-29h]
  _BYTE v47[8]; // [rsp+A0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-11h] BYREF

  v32 = -1;
  memset(v38, 0, sizeof(v38));
  v41 = 0;
  v33 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 5009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5009);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 5009LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v35 = MEMORY[0xFFFFF78000000320];
  v7 = v35 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v6, v5), (v9 = Current) != 0LL) )
    v11 = *((_DWORD *)Current + 8);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v47,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 560LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v47[0] )
    KeUnstackDetachProcess(&ApcState);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v28[3] = 275LL;
    v28[4] = 16LL;
    v28[5] = this;
    v28[6] = CurrentIrql;
    v29 = KeGetCurrentIrql();
    v28[7] = v29;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( v9 && *((_DWORD *)v9 + 8) != v11 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v30[3] = 275LL;
    v30[4] = 38LL;
    v30[5] = *((int *)v9 + 8);
    v30[6] = v11;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v36 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  if ( (int)v13 < 0 )
    v16 = (unsigned int)v13;
  else
    v16 = (v36 * (unsigned __int64)TimeIncrement - v7) / 0x2710;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 316LL);
  Flags = a2->Flags;
  AffectedVidPnSourceId = a2->AffectedVidPnSourceId;
  v37[0] = 30;
  v37[1] = 72;
  v40 = 0;
  v39 = 0LL;
  memset(v38, 0, sizeof(v38));
  v42 = 86;
  v45 = v16;
  v46 = v17;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(AffectedVidPnSourceId, v16);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37, CurrentProcessSessionId);
  v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
  v21[3] = v13;
  v21[4] = a2->hFunctionalVidPn;
  v21[5] = a2->AffectedVidPnSourceId;
  v21[6] = a2->MonitorConnectivityChecks;
  v21[7] = a2->hPrimaryAllocation;
  WdLogEvent5_WdEvent(v21);
  if ( (_DWORD)v13 != -1073741801 && (_DWORD)v13 != -1071774920 && (_DWORD)v13 )
  {
    v31 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v31 + 24) = v13;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v24);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v32);
  return (unsigned int)v13;
}
