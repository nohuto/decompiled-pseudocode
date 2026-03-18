/*
 * XREFs of ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x1801A5A70
 * Callers:
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A6954 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800342C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xqqf_EventWriteTransfer @ 0x1801A6F68 (McTemplateU0xqqf_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleScheduler::CreateWakeupFence(
        CComputeScribbleScheduler *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2,
        struct Windows::Devices::Display::Core::IDisplayFence **a3,
        struct ID3D12Fence **a4)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, unsigned __int64, struct Windows::Devices::Display::Core::IDisplayFence **); // rdi
  unsigned __int64 v10; // rdx
  float v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, struct Windows::Devices::Display::Core::IDisplayFence *, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v19; // eax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, GUID *, __int64 *); // rbx
  int v22; // eax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, HANDLE, GUID *, struct ID3D12Fence **); // rdi
  int v25; // eax
  struct Windows::Devices::Display::Core::IDisplayFence *v26; // rax
  struct ID3D12Fence *v27; // rax
  __int64 v29; // [rsp+40h] [rbp-20h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct Windows::Devices::Display::Core::IDisplayFence *v33; // [rsp+90h] [rbp+30h] BYREF
  struct ID3D12Fence *v34; // [rsp+98h] [rbp+38h] BYREF

  v4 = *((_QWORD *)this + 2);
  v33 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, struct Windows::Devices::Display::Core::IDisplayFence **))(*(_QWORD *)v4 + 72LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v33);
  v10 = 0LL;
  v11 = *((float *)a2 + 5) * 10000000.0;
  if ( v11 >= 9.223372e18 )
  {
    v11 = v11 - 9.223372e18;
    if ( v11 < 9.223372e18 )
      v10 = 0x8000000000000000uLL;
  }
  v12 = v9(v4, *((_QWORD *)this + 3), v10 + (unsigned int)(int)v11, &v33);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = (unsigned int)v12;
    v15 = 396LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)v14);
    goto LABEL_25;
  }
  if ( !v33 )
  {
    v13 = -2147024882;
    v15 = 399LL;
    v14 = 2147942414LL;
    goto LABEL_8;
  }
  v31[0] = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v31);
  v16 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
          *((_QWORD *)this + 2),
          &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
          v31);
  v13 = v16;
  if ( v16 >= 0 )
  {
    v17 = v31[0];
    hObject = 0LL;
    v18 = *(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayFence *, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v31[0] + 24LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v19 = v18(v17, v33, 0LL, 0x10000000LL, 0LL, &hObject);
    v13 = v19;
    if ( v19 >= 0 )
    {
      v20 = *((_QWORD *)this + 1);
      v29 = 0LL;
      v21 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 56LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v29);
      v22 = v21(v20, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &v29);
      v13 = v22;
      if ( v22 >= 0 )
      {
        v23 = v29;
        v34 = 0LL;
        v24 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, struct ID3D12Fence **))(*(_QWORD *)v29 + 256LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v34);
        v25 = v24(v23, hObject, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, &v34);
        v13 = v25;
        if ( v25 >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
            McTemplateU0xqqf_EventWriteTransfer(
              *(_QWORD *)a2,
              (unsigned int)&EVTDESC_COMPUTESCRIBBLE_WAKEUPEVENTCREATED,
              *((_QWORD *)a2 + 1),
              *(_DWORD *)(*(_QWORD *)a2 + 236LL),
              *((_DWORD *)a2 + 4),
              *((_DWORD *)a2 + 5));
          v26 = v33;
          v33 = 0LL;
          *a3 = v26;
          v27 = v34;
          v34 = 0LL;
          v13 = 0;
          *a4 = v27;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A1,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
            (const char *)(unsigned int)v25);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19D,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
          (const char *)(unsigned int)v22);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19A,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v19);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v16);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v31);
LABEL_25:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
  return v13;
}
