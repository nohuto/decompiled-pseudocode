/*
 * XREFs of ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z @ 0x1801E98AC
 * Callers:
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801EA9FC (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xf_EventWriteTransfer @ 0x1801EB004 (McTemplateU0xf_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleScheduler::CreateWakeupFence(
        CComputeScribbleScheduler *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2,
        struct ID3D12Fence **a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, _QWORD, void **); // rdi
  int v15; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, GUID *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, void *, GUID *, struct ID3D12Fence **); // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct ID3D12Fence *v24; // rax
  void *v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct ID3D12Fence *v29; // [rsp+80h] [rbp+30h] BYREF
  __int64 v30; // [rsp+88h] [rbp+38h] BYREF
  __int64 v31; // [rsp+98h] [rbp+48h] BYREF

  v3 = *((_QWORD *)this + 3);
  v30 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v3 + 72LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v30);
  v8 = v7(v3, *((_QWORD *)this + 4), (unsigned int)(int)(*((double *)a2 + 2) * 10000000.0), &v30);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 437LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)v10);
    goto LABEL_21;
  }
  if ( !v30 )
  {
    v9 = -2147024882;
    v11 = 440LL;
    v10 = 2147942414LL;
    goto LABEL_5;
  }
  v27 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v27);
  v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3))(
          *((_QWORD *)this + 3),
          &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
          &v27);
  v9 = v12;
  if ( v12 >= 0 )
  {
    v13 = v27;
    v26 = 0LL;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v27 + 24LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v26,
      0LL);
    v15 = v14(v13, v30, 0LL, 0x10000000LL, 0LL, &v26);
    v9 = v15;
    if ( v15 >= 0 )
    {
      v16 = *((_QWORD *)this + 2);
      v31 = 0LL;
      v17 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v16 + 56LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v31);
      v18 = v17(v16, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &v31);
      v9 = v18;
      if ( v18 >= 0 )
      {
        v19 = v31;
        v29 = 0LL;
        v20 = *(__int64 (__fastcall **)(__int64, void *, GUID *, struct ID3D12Fence **))(*(_QWORD *)v31 + 256LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v29);
        v21 = v20(v19, v26, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, &v29);
        v9 = v21;
        if ( v21 >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
            McTemplateU0xf_EventWriteTransfer(v23, v22, *(_QWORD *)a2);
          v24 = v29;
          v29 = 0LL;
          v9 = 0;
          *a3 = v24;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1CA,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
            (const char *)(unsigned int)v21);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C6,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
          (const char *)(unsigned int)v18);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C3,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v15);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v26);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v12);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
LABEL_21:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
  return v9;
}
