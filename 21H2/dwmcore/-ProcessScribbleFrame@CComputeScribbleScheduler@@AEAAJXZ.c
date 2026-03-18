/*
 * XREFs of ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801EA384
 * Callers:
 *     _lambda_1e65f1bd86c69cffa4e82cca78acb4e5_::_lambda_invoker_cdecl_ @ 0x180103CC0 (_lambda_1e65f1bd86c69cffa4e82cca78acb4e5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 *     ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBUComputeScribbleLatencyData@@@Z @ 0x1801D7DE8 (-AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBUComputeScribbleLatencyData@@@Z.c)
 *     ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x1801E9B40 (-DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z.c)
 *     ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x1801EA650 (-ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801EA9FC (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x1801EAAF4 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801EAEE4 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1801EB56C (-ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801EB67C (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1801EC934 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ProcessScribbleFrame(
        CComputeScribbleScheduler *this,
        __int64 a2,
        __int64 a3)
{
  LARGE_INTEGER *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 i; // rcx
  int v10; // esi
  int v11; // r14d
  int ready; // eax
  __int64 v14; // rdx
  CComputeScribbleFramebuffer *v15; // rsi
  CComputeScribbleFramebuffer *v16; // rsi
  __int64 v17; // r15
  char v18; // cl
  unsigned __int64 v19; // [rsp+48h] [rbp-39h]
  RTL_SRWLOCK *v20; // [rsp+50h] [rbp-31h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-29h] BYREF
  CComputeScribbleFramebuffer *v22; // [rsp+60h] [rbp-21h] BYREF
  struct CComputeScribbleFramebuffer *v23; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v24[56]; // [rsp+70h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP_RAW,
      a3,
      1u,
      &v25);
  v4 = (LARGE_INTEGER *)*((_QWORD *)this + 10);
  QueryPerformanceCounter(&PerformanceCount);
  v4[6] = PerformanceCount;
  AcquireSRWLockExclusive((PSRWLOCK)this + 11);
  v5 = *((_QWORD *)this + 12);
  v20 = (RTL_SRWLOCK *)((char *)this + 88);
  v6 = 0;
  if ( !v5 )
    goto LABEL_12;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  v8 = v7;
  if ( !v7 )
    goto LABEL_12;
  if ( v7 == -1 )
  {
    CComputeScribbleScheduler::StopInternal(this);
LABEL_12:
    v10 = 0;
LABEL_13:
    v11 = v10;
    goto LABEL_14;
  }
  for ( i = *((_QWORD *)this + 14); ; i += 8LL )
  {
    if ( i == *((_QWORD *)this + 15) )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
      goto LABEL_12;
    }
    if ( *(_BYTE *)(*(_QWORD *)i + 240LL) )
      break;
  }
  *((_QWORD *)this + 20) = (unsigned int)v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0x_EventWriteTransfer(i, &EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP, v7);
  ready = CComputeScribbleScheduler::DecideBufferToDispatch(this, &v23, &v22);
  v10 = ready;
  if ( ready < 0 )
  {
    v14 = 545LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)ready);
    goto LABEL_13;
  }
  ready = CComputeScribbleScheduler::ReadyWakeupFence(this, v8 + 1);
  v10 = ready;
  if ( ready < 0 )
  {
    v14 = 548LL;
    goto LABEL_28;
  }
  v15 = v22;
  v11 = 0;
  if ( v22 )
  {
    v11 = CComputeScribbleScheduler::SetupWakeupFence(
            this,
            (const struct CComputeScribbleScheduler::ScribbleFrame *)(*((_QWORD *)this + 17)
                                                                    + 32LL * *((unsigned int *)v22 + 61)));
    if ( v11 < 0 )
      CComputeScribbleFramebuffer::ClearScribbles(v15);
  }
  v16 = v23;
  if ( v23 )
  {
    v17 = *((_QWORD *)this + 17) + 32LL * *((unsigned int *)v23 + 61);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &v20,
      0LL);
    ready = CComputeScribbleFramebuffer::DispatchScribbles(
              v16,
              *((struct ID3D12CommandQueue **)this + 2),
              *((struct CComputeScribbleStopwatch **)this + 10),
              *(_QWORD *)v17,
              *((struct IDCompositionDirectInkSuperWetRenderer **)this + 27),
              *((struct IUnknown **)this + 26),
              (struct ComputeScribbleLatencyData *)v24);
    v10 = ready;
    if ( ready < 0 )
    {
      v14 = 577LL;
      goto LABEL_28;
    }
    if ( CComputeScribbleStopwatch::GetElapsedTimeMs(*((CComputeScribbleStopwatch **)this + 10)) <= *(double *)(v17 + 24) * 1000.0 )
    {
      v18 = 0;
      v19 = 1LL;
    }
    else
    {
      v18 = 1;
      v19 = 0x100000001LL;
    }
    _InterlockedExchangeAdd64(&qword_1803D3AF8, v19);
    if ( !v18 )
      CTelemetryComputeScribbleAggregator::AddLatencyData((const struct ComputeScribbleLatencyData *)v24);
  }
  if ( v11 >= 0 )
    goto LABEL_15;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x250,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    (const char *)(unsigned int)v11);
LABEL_14:
  v6 = v11;
LABEL_15:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v20);
  return v6;
}
