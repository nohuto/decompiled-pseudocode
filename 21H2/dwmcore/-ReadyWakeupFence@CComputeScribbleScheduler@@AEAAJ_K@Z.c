/*
 * XREFs of ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x1801EA650
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801EA384 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x1801EA73C (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ReadyWakeupFence(CComputeScribbleScheduler *this, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 104);
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *v2 = 0LL;
    v6 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v4;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 12) + 72LL))(
         *((_QWORD *)this + 12),
         a2,
         *((_QWORD *)this + 9));
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0x_EventWriteTransfer(v8, &EVTDESC_COMPUTESCRIBBLE_WAKEUPEVENTREADY, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v7);
    return v9;
  }
}
