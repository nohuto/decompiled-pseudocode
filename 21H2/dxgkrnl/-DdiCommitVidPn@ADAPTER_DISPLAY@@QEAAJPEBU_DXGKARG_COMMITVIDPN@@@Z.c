/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C02C657C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0399E6C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCommitVidPn(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_COMMITVIDPN *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // rbx
  struct DXGTHREAD *Current; // rax
  int v11; // r14d
  __int64 v12; // rdi
  KIRQL v13; // al
  __int64 v14; // rbx
  ULONG TimeIncrement; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // [rsp+50h] [rbp-89h] BYREF
  __int64 v23; // [rsp+58h] [rbp-81h]
  char v24; // [rsp+60h] [rbp-79h]
  _DWORD v25[2]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v26[24]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v27; // [rsp+90h] [rbp-49h]
  int v28; // [rsp+98h] [rbp-41h]
  int v29; // [rsp+9Ch] [rbp-3Dh]
  int v30; // [rsp+A0h] [rbp-39h]
  DXGKARG_COMMITVIDPN_FLAGS Flags; // [rsp+A4h] [rbp-35h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID AffectedVidPnSourceId; // [rsp+A8h] [rbp-31h]
  int v33; // [rsp+ACh] [rbp-2Dh]
  __int64 v34; // [rsp+B0h] [rbp-29h]
  _BYTE v35[8]; // [rsp+C0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v22 = -1;
  memset(v26, 0, sizeof(v26));
  v29 = 0;
  v23 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5009);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 5009);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v5 = MEMORY[0xFFFFF78000000320];
  v6 = v5 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = CurrentIrql;
  v9 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
    v11 = *((_DWORD *)Current + 12);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)this + 2));
  v12 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 648LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v8 != KeGetCurrentIrql() )
  {
    v13 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v13);
  }
  if ( v9 && *((_DWORD *)v9 + 12) != v11 )
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v9 + 12), v11, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  v14 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  if ( (int)v12 < 0 )
    LODWORD(v16) = v12;
  else
    v16 = (v14 * (unsigned __int64)TimeIncrement - v6) / 0x2710;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 404LL);
  Flags = a2->Flags;
  AffectedVidPnSourceId = a2->AffectedVidPnSourceId;
  v25[0] = 30;
  v25[1] = 72;
  v28 = 0;
  v27 = 0LL;
  memset(v26, 0, sizeof(v26));
  v30 = 86;
  v33 = v16;
  v34 = v17;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(AffectedVidPnSourceId);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25, CurrentProcessSessionId);
  WdLogSingleEntry5(
    4LL,
    v12,
    a2->hFunctionalVidPn,
    a2->AffectedVidPnSourceId,
    a2->MonitorConnectivityChecks,
    a2->hPrimaryAllocation);
  if ( (_DWORD)v12 != -1073741801 && (_DWORD)v12 != -1071774920 && (_DWORD)v12 )
  {
    WdLogSingleEntry1(2LL, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  return (unsigned int)v12;
}
