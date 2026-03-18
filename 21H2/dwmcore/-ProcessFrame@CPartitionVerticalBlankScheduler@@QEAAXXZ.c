/*
 * XREFs of ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x18007878C (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x18007886C (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     ?SetTimer@CWatchdogTimer@@AEAAXHH@Z @ 0x18007AAC4 (-SetTimer@CWatchdogTimer@@AEAAXHH@Z.c)
 *     ?EnsureWatchdogInitialized@CWatchdogTimer@@AEAAXXZ @ 0x18007AB14 (-EnsureWatchdogInitialized@CWatchdogTimer@@AEAAXXZ.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18007ABBC (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007AEF8 (-ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x18007B3D8 (-Report@CProcessAttributionReporter@@QEAAXXZ.c)
 *     ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x18007B808 (-UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K0@Z @ 0x18007B954 (-Trace@CFrameInfo@@QEAAXK_K0@Z.c)
 *     ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x18007B9A8 (-CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007B9D8 (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x18007BB3C (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z.c)
 *     ?Render@CPartitionVerticalBlankScheduler@@AEAAXPEAUFRAME_TIME_INFO@@@Z @ 0x18007BC40 (-Render@CPartitionVerticalBlankScheduler@@AEAAXPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007BD4C (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007BD78 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801121E8 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     McTemplateU0xqqq_EventWriteTransfer @ 0x180112338 (McTemplateU0xqqq_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x180262378 (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x180262AA4 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(CPartitionVerticalBlankScheduler *this)
{
  int v2; // esi
  LONG v3; // r14d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  volatile struct IUnknown *volatile v7; // rdi
  BOOL v8; // edi
  void *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  union _SLIST_HEADER *v13; // rdi
  ULONGLONG TickCount64; // rax
  CEnergyReporter *v15; // rdi
  ULONGLONG v16; // rax
  unsigned __int64 v17; // rcx
  void *v18; // rcx
  signed int LastError; // eax
  struct ID2D1Bitmap *v20; // [rsp+40h] [rbp-58h] BYREF
  struct ID3D11Texture2D *v21; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-48h] BYREF
  char v23; // [rsp+60h] [rbp-38h]
  char v24; // [rsp+61h] [rbp-37h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+68h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+78h] [rbp-20h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  *((_DWORD *)this + 30) = CCommonRegistryData::RenderThreadWatchdogTimeoutMilliseconds;
  _InterlockedExchange((volatile __int32 *)this + 29, 0);
  v2 = *((_DWORD *)this + 26);
  v3 = *((_DWORD *)this + 27);
  if ( v2 >= *((_DWORD *)this + 30) )
    v2 = *((_DWORD *)this + 30);
  CWatchdogTimer::EnsureWatchdogInitialized((CPartitionVerticalBlankScheduler *)((char *)this + 72));
  if ( *((_BYTE *)this + 96) )
    ModuleFailFastForHRESULT(2147500037LL, retaddr);
  CWatchdogTimer::SetTimer((CPartitionVerticalBlankScheduler *)((char *)this + 72), v2, v3);
  *(_BYTE *)(*((_QWORD *)this + 564) + 224LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    McTemplateU0xqqq_EventWriteTransfer(v5, v4, *((_QWORD *)this + 564));
  while ( 1 )
  {
    v7 = g_pDebugInspectSurface;
    if ( !g_pDebugInspectSurface )
      break;
    v21 = 0LL;
    v20 = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v21);
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID3D11Texture2D **))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v21) < 0 )
    {
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v20);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID2D1Bitmap **))v7->lpVtbl->QueryInterface)(
             v7,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             &v20) >= 0 )
        DebugInspectBitmap(v20);
    }
    else
    {
      DebugInspectTexture(v21, 0);
    }
    if ( g_pDebugInspectSurface == v7 )
    {
      g_pDebugInspectSurface = 0LL;
      __debugbreak();
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v20);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PROCESS_FRAME_Start,
      v6,
      1u,
      &v25);
  CTelemetryFrames::FrameRenderingStarted(*(_QWORD *)(*((_QWORD *)this + 564) + 64LL));
  CPartitionVerticalBlankScheduler::ComputeFrameTime(this);
  v22[0] = *((_QWORD *)this + 564);
  v22[1] = (char *)this + 4536;
  v23 = *((_BYTE *)this + 4852);
  v24 = *((_BYTE *)this + 4854);
  *((_BYTE *)this + 4854) = 0;
  CPartitionVerticalBlankScheduler::Render(this, (struct FRAME_TIME_INFO *)v22);
  CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
  CPartitionVerticalBlankScheduler::TraceTime(this);
  *(_QWORD *)(*((_QWORD *)this + 564) + 72LL) = *((_QWORD *)this + 2147);
  v8 = CPartitionVerticalBlankScheduler::PresentFrame(
         this,
         *((struct CFrameInfo **)this + 564),
         *((_DWORD *)this + 1124));
  *(_QWORD *)(*((_QWORD *)this + 8) + 504LL) = *(_QWORD *)(*((_QWORD *)this + 8) + 496LL);
  v9 = *(void **)(*((_QWORD *)this + 7) + 16LL);
  if ( v9 )
    PulseEvent(v9);
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(this);
  v10 = CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(this);
  CFrameInfo::Trace(*((CFrameInfo **)this + 564), *((_DWORD *)this + 1124), v10, *((_QWORD *)this + 566));
  v11 = *((_QWORD *)this + 564);
  CTelemetryFrameStatistics::UpdateFrameStatistics(
    (CPartitionVerticalBlankScheduler *)((char *)this + 12408),
    *(_QWORD *)(v11 + 64),
    *(_QWORD *)(v11 + 80),
    *(_QWORD *)(v11 + 248),
    *(_DWORD *)(v11 + 36),
    *(_DWORD *)(v11 + 40),
    *(_BYTE *)(v11 + 153));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqq_EventWriteTransfer(
      *(_BYTE *)(*((_QWORD *)this + 564) + 240LL) != 0,
      (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME,
      1,
      v8,
      *(_BYTE *)(*((_QWORD *)this + 564) + 240LL) != 0,
      0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop,
        v12,
        1u,
        &v26);
  }
  CProcessAttributionReporter::Report(qword_1803D33E8);
  v13 = (union _SLIST_HEADER *)qword_1803D33F0;
  TickCount64 = GetTickCount64();
  if ( TickCount64 - v13->Alignment >= 0x3E8 )
  {
    v13->Alignment = TickCount64;
    CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(v13);
  }
  v15 = qword_1803D33E0;
  v16 = GetTickCount64();
  v17 = v16 - *(_QWORD *)v15;
  if ( v17 >= 0x3E8 )
  {
    *((_DWORD *)v15 + 2) = v17;
    *(_QWORD *)v15 = v16;
    CEnergyReporter::SendReportToE3((RTL_SRWLOCK *)v15);
  }
  v18 = (void *)*((_QWORD *)this + 11);
  *((_BYTE *)this + 96) = 0;
  if ( !CancelWaitableTimer(v18) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
}
