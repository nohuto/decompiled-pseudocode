/*
 * XREFs of ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A9134
 * Callers:
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x1801A9278 (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@V-$span@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180189470 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ??$emplace_back@AEBUScribbleFrame@CComputeScribbleScheduler@@@?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAAAEAUScribbleFrame@CComputeScribbleScheduler@@AEBU23@@Z @ 0x1801A7E28 (--$emplace_back@AEBUScribbleFrame@CComputeScribbleScheduler@@@-$deque@UScribbleFrame@CComputeScr.c)
 *     ?CheckForWorkerThreadHang@CComputeScribbleScheduler@@AEBA_NI@Z @ 0x1801A83C8 (-CheckForWorkerThreadHang@CComputeScribbleScheduler@@AEBA_NI@Z.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A93B4 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ?_Tidy@?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAXXZ @ 0x1801A9838 (-_Tidy@-$deque@UScribbleFrame@CComputeScribbleScheduler@@V-$allocator@UScribbleFrame@CComputeScr.c)
 *     McTemplateU0xqqf_EventWriteTransfer @ 0x1801A99C8 (McTemplateU0xqqf_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleScheduler::Schedule(
        CComputeScribbleScheduler *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2)
{
  RTL_SRWLOCK *v2; // rsi
  unsigned __int64 v5; // rax
  char *v6; // rbp
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)((char *)this + 72);
  AcquireSRWLockExclusive((PSRWLOCK)this + 9);
  v5 = *((_QWORD *)this + 16);
  if ( v5 < 3 )
  {
    v6 = (char *)this + 96;
  }
  else
  {
    if ( !CComputeScribbleScheduler::CheckForWorkerThreadHang((__int64 **)this, *((_DWORD *)a2 + 4)) )
      goto LABEL_12;
    v6 = (char *)this + 96;
    std::deque<CComputeScribbleScheduler::ScribbleFrame>::_Tidy((char *)this + 96);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 11);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0xqq_EventWriteTransfer(
        v7,
        &EVTDESC_COMPUTESCRIBBLE_WORKERHANG,
        *((_QWORD *)a2 + 1),
        *((_DWORD *)a2 + 4),
        *((_DWORD *)this + 34));
    v5 = *((_QWORD *)this + 16);
  }
  if ( !v5 )
  {
    v8 = CComputeScribbleScheduler::SetupWakeupFence(this, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_13;
    }
  }
  std::deque<CComputeScribbleScheduler::ScribbleFrame>::emplace_back<CComputeScribbleScheduler::ScribbleFrame const &>(
    (__int64)v6,
    a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xqqf_EventWriteTransfer(
      v10,
      (unsigned int)&EVTDESC_COMPUTESCRIBBLE_FRAMESCHEDULED,
      *((_QWORD *)a2 + 1),
      *(_DWORD *)(*(_QWORD *)a2 + 236LL),
      *((_DWORD *)a2 + 4),
      *((_DWORD *)a2 + 5));
LABEL_12:
  v9 = 0;
LABEL_13:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v9;
}
