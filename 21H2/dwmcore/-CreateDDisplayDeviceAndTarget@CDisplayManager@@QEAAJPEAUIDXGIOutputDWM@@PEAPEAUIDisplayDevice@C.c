/*
 * XREFs of ?CreateDDisplayDeviceAndTarget@CDisplayManager@@QEAAJPEAUIDXGIOutputDWM@@PEAPEAUIDisplayDevice@Core@Display@Devices@Windows@@PEAPEAUIDisplayTarget@4567@@Z @ 0x1802383D4
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801A4A64 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5FE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayManager::CreateDDisplayDeviceAndTarget(
        CDisplayManager *this,
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
  int v21; // eax
  __int64 v22; // rbx
  struct Windows::Devices::Display::Core::IDisplayTarget *v23; // rbx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 *v27; // rbx
  __int64 (__fastcall *v28)(__int64 *, __int64, struct Windows::Devices::Display::Core::IDisplayDevice **); // rsi
  int v29; // eax
  int v30[2]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  struct Windows::Devices::Display::Core::IDisplayDevice *v33; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  struct Windows::Devices::Display::Core::IDisplayTarget *v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 **); // [rsp+68h] [rbp-98h] BYREF
  _QWORD v40[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  HSTRING string; // [rsp+90h] [rbp-70h] BYREF
  struct Windows::Devices::Display::Core::IDisplayTarget **v43; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-40h] BYREF
  int v46; // [rsp+CCh] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v43 = a4;
  *a3 = 0LL;
  *a4 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v45);
  if ( v5 < 0 )
  {
    v6 = 260LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v46 == -1 )
  {
    v5 = -2147024809;
    v6 = 266LL;
    goto LABEL_3;
  }
  v5 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    v6 = 274LL;
    goto LABEL_3;
  }
  v39 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, &v39);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_44;
  }
  v38 = 0LL;
  v8 = (**v39)(v39, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, &v38);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x118,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_43;
  }
  v9 = *v38;
  v35 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v9 + 48))(v38, 0LL, &v35);
  v5 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_41;
  }
  v11 = *v35;
  v34 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 48))(v35, &v34);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 287LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_40;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 56LL))(v34, &v31);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 290LL;
    goto LABEL_18;
  }
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v41 = 0LL;
  v17 = 0;
  v37 = 0LL;
  if ( !v31 )
  {
LABEL_38:
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)0x80070057LL);
    goto LABEL_39;
  }
  do
  {
    if ( v14 )
      goto LABEL_53;
    v18 = v34;
    *(_QWORD *)v30 = 0LL;
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v34 + 48LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v30);
    v20 = v19(v18, v17, v30);
    v5 = v20;
    if ( v20 < 0 )
    {
      v26 = 299LL;
      goto LABEL_51;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v30 + 64LL))(*(_QWORD *)v30, &v36);
    v5 = v20;
    if ( v20 < 0 )
    {
      v26 = 302LL;
LABEL_51:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
        (const char *)(unsigned int)v20);
      goto LABEL_52;
    }
    if ( v36 != v46 )
      goto LABEL_36;
    v32 = 0LL;
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v30 + 48LL))(*(_QWORD *)v30, &v32);
    v5 = v21;
    if ( v21 < 0 )
    {
      v25 = 307LL;
LABEL_48:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
        (const char *)(unsigned int)v21);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
LABEL_52:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v30);
      goto LABEL_39;
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v32 + 48LL))(v32, v40);
    v5 = v21;
    if ( v21 < 0 )
    {
      v25 = 310LL;
      goto LABEL_48;
    }
    v40[2] = v45;
    v40[1] = v40[0];
    if ( v45 == v40[0] )
    {
      v22 = v15;
      v14 = 1;
      v15 = v32;
      v41 = v32;
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v23 = v16;
      v16 = *(struct Windows::Devices::Display::Core::IDisplayTarget **)v30;
      v37 = *(struct Windows::Devices::Display::Core::IDisplayTarget **)v30;
      if ( *(_QWORD *)v30 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v30 + 8LL))(*(_QWORD *)v30);
      if ( v23 )
        (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayTarget *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
LABEL_36:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v30);
    ++v17;
  }
  while ( v17 < v31 );
  if ( !v14 )
    goto LABEL_38;
LABEL_53:
  v27 = v35;
  v33 = 0LL;
  v28 = *(__int64 (__fastcall **)(__int64 *, __int64, struct Windows::Devices::Display::Core::IDisplayDevice **))(*v35 + 112);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v33);
  v29 = v28(v27, v15, &v33);
  v5 = v29;
  if ( v29 >= 0 )
  {
    v5 = 0;
    *a3 = v33;
    v33 = 0LL;
    v37 = 0LL;
    *v43 = v16;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)v29);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
LABEL_39:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v41);
LABEL_40:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
LABEL_41:
  if ( v35 )
    (*(void (__fastcall **)(__int64 *))(*v35 + 16))(v35);
LABEL_43:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38);
LABEL_44:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v39);
  return (unsigned int)v5;
}
