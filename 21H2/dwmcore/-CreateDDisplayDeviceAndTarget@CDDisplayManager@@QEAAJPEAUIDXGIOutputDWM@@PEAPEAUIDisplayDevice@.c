/*
 * XREFs of ?CreateDDisplayDeviceAndTarget@CDDisplayManager@@QEAAJPEAUIDXGIOutputDWM@@PEAPEAUIDisplayDevice@Core@Display@Devices@Windows@@PEAPEAUIDisplayTarget@4567@@Z @ 0x180283984
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801E9EA0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplayManager::CreateDDisplayDeviceAndTarget(
        CDDisplayManager *this,
        struct IDXGIOutputDWM *a2,
        struct Windows::Devices::Display::Core::IDisplayDevice **a3,
        struct Windows::Devices::Display::Core::IDisplayTarget **a4)
{
  HRESULT v5; // ebx
  __int64 v6; // rdx
  int ActivationFactory; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  char v14; // r12
  __int64 v15; // rdi
  struct Windows::Devices::Display::Core::IDisplayTarget *v16; // r14
  unsigned int v17; // r15d
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, int *); // rsi
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  struct Windows::Devices::Display::Core::IDisplayTarget *v24; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64, struct Windows::Devices::Display::Core::IDisplayDevice **); // rsi
  int v30; // eax
  struct Windows::Devices::Display::Core::IDisplayDevice *v31; // rax
  int v32[2]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  struct Windows::Devices::Display::Core::IDisplayDevice *v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  struct Windows::Devices::Display::Core::IDisplayTarget *v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 **); // [rsp+68h] [rbp-98h] BYREF
  _QWORD v42[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  HSTRING string; // [rsp+90h] [rbp-70h] BYREF
  struct Windows::Devices::Display::Core::IDisplayTarget **v45; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-40h] BYREF
  int v48; // [rsp+CCh] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v45 = a4;
  *a3 = 0LL;
  *a4 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v47);
  if ( v5 < 0 )
  {
    v6 = 134LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v48 == -1 )
  {
    v5 = -2147024809;
    v6 = 140LL;
    goto LABEL_3;
  }
  v5 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    v6 = 148LL;
    goto LABEL_3;
  }
  v41 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, &v41);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_43;
  }
  v40 = 0LL;
  v8 = (**v41)(v41, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, &v40);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_42;
  }
  v9 = *v40;
  v37 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v9 + 48))(v40, 0LL, &v37);
  v5 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_41;
  }
  v11 = *v37;
  v36 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 48))(v37, &v36);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 161LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_40;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 56LL))(v36, &v33);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 164LL;
    goto LABEL_18;
  }
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v43 = 0LL;
  v17 = 0;
  v39 = 0LL;
  if ( !v33 )
  {
LABEL_38:
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)0x80070057LL);
    goto LABEL_39;
  }
  do
  {
    if ( v14 )
      goto LABEL_52;
    v18 = v36;
    *(_QWORD *)v32 = 0LL;
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v36 + 48LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v32);
    v20 = v19(v18, v17, v32);
    v5 = v20;
    if ( v20 < 0 )
    {
      v27 = 173LL;
      goto LABEL_50;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v32 + 64LL))(*(_QWORD *)v32, &v38);
    v5 = v20;
    if ( v20 < 0 )
    {
      v27 = 176LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
        (const char *)(unsigned int)v20);
      goto LABEL_51;
    }
    if ( v38 != v48 )
      goto LABEL_36;
    v21 = **(_QWORD **)v32;
    v34 = 0LL;
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v21 + 48))(*(_QWORD *)v32, &v34);
    v5 = v22;
    if ( v22 < 0 )
    {
      v26 = 181LL;
LABEL_47:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
        (const char *)(unsigned int)v22);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
LABEL_51:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v32);
      goto LABEL_39;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v34 + 48LL))(v34, v42);
    v5 = v22;
    if ( v22 < 0 )
    {
      v26 = 184LL;
      goto LABEL_47;
    }
    v42[2] = v47;
    v42[1] = v42[0];
    if ( v47 == v42[0] )
    {
      v23 = v15;
      v14 = 1;
      v15 = v34;
      v43 = v34;
      if ( v34 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      v24 = v16;
      v16 = *(struct Windows::Devices::Display::Core::IDisplayTarget **)v32;
      v39 = *(struct Windows::Devices::Display::Core::IDisplayTarget **)v32;
      if ( *(_QWORD *)v32 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 8LL))(*(_QWORD *)v32);
      if ( v24 )
        (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayTarget *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
LABEL_36:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v32);
    ++v17;
  }
  while ( v17 < v33 );
  if ( !v14 )
    goto LABEL_38;
LABEL_52:
  v28 = (__int64)v37;
  v35 = 0LL;
  v29 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::Devices::Display::Core::IDisplayDevice **))(*v37 + 112);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v35);
  v30 = v29(v28, v15, &v35);
  v5 = v30;
  if ( v30 >= 0 )
  {
    v31 = v35;
    v35 = 0LL;
    v39 = 0LL;
    *a3 = v31;
    v5 = 0;
    *v45 = v16;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
      (const char *)(unsigned int)v30);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_39:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v39);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
LABEL_40:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
LABEL_41:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
LABEL_42:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v40);
LABEL_43:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
  return (unsigned int)v5;
}
