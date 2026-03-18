/*
 * XREFs of ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A93B4
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A8D50 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A9134 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x1801A84D0 (-CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUIDisplayFence@Core.c)
 */

__int64 __fastcall CComputeScribbleScheduler::SetupWakeupFence(
        CComputeScribbleScheduler *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rcx
  float v6; // xmm1_4
  float v7; // xmm0_4
  int WakeupFence; // eax
  unsigned int v9; // esi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 80);
  if ( !*((_QWORD *)this + 10)
    || (v5 = *((_QWORD *)this + 11)) == 0
    || (v6 = *((float *)a2 + 5), v7 = *((float *)this + 35), v6 > v7)
    || (float)(v7 - v6) >= *((float *)this + 1) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 11);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
    WakeupFence = CComputeScribbleScheduler::CreateWakeupFence(
                    this,
                    a2,
                    (struct Windows::Devices::Display::Core::IDisplayFence **)v2,
                    (struct ID3D12Fence **)this + 11);
    v9 = WakeupFence;
    if ( WakeupFence < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
        (const char *)(unsigned int)WakeupFence);
      return v9;
    }
    v5 = *((_QWORD *)this + 11);
    *((_DWORD *)this + 35) = *((_DWORD *)a2 + 5);
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 72LL))(
          v5,
          *((unsigned int *)a2 + 4),
          *((_QWORD *)this + 7));
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17A,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
