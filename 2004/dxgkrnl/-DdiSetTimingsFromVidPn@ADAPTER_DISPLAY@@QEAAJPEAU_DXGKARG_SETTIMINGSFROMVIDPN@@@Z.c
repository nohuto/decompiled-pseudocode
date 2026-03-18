/*
 * XREFs of ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C021EE70
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013C4DC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013746C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETTIMINGSFROMVIDPN *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v9; // rdi
  struct DXGTHREAD *Current; // rax
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v19; // r8d
  __int64 v20; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
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
  UINT PathCount; // [rsp+84h] [rbp-35h]
  struct _DXGK_SET_TIMING_RESULTS::$CBFC710AEA6A7A2FB98CBDA415B9FD4D::$DAC9E6F53CD5E53ADA33D5AFCB19DBC4 v44; // [rsp+88h] [rbp-31h]
  int v45; // [rsp+8Ch] [rbp-2Dh]
  __int64 v46; // [rsp+90h] [rbp-29h]
  _BYTE v47[8]; // [rsp+A0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-11h] BYREF

  v32 = -1;
  memset(v38, 0, sizeof(v38));
  v41 = 0;
  v33 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 5076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5076);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 5076LL);
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
  v13 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETTIMINGSFROMVIDPN *))(*((_QWORD *)this + 2) + 1088LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v47[0] )
    KeUnstackDetachProcess(&ApcState);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v9 && *((_DWORD *)v9 + 8) != v11 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v17[3] = 275LL;
    v17[4] = 38LL;
    v17[5] = *((int *)v9 + 8);
    v17[6] = v11;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v36 = MEMORY[0xFFFFF78000000320];
  v18 = v36 * KeQueryTimeIncrement();
  v19 = a2->pResultsFlags->0;
  v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 316LL);
  PathCount = a2->PathCount;
  v37[0] = 30;
  v37[1] = 72;
  v40 = 0;
  v39 = 0LL;
  v44 = v19;
  v46 = v20;
  memset(v38, 0, sizeof(v38));
  if ( (int)v13 < 0 )
  {
    v42 = 96;
    v45 = v13;
  }
  else
  {
    v42 = 87;
    v18 = (v18 - v7) / 0x2710;
    v45 = v18;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v20, v18);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v37, CurrentProcessSessionId);
  v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v22);
  v24[3] = v13;
  v24[4] = a2->hFunctionalVidPn;
  v24[5] = a2->pResultsFlags->0;
  v24[6] = a2->PathCount;
  WdLogEvent5_WdEvent(v24);
  if ( (_DWORD)v13 != -1073741801 && (_DWORD)v13 )
  {
    v27 = WdLogNewEntry5_WdError(v26, v25);
    *(_QWORD *)(v27 + 24) = v13;
    WdLogEvent5_WdError(v27);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v28);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v13;
}
