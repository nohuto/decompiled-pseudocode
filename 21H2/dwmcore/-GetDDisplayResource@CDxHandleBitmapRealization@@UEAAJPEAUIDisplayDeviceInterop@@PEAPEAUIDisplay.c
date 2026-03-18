/*
 * XREFs of ?GetDDisplayResource@CDxHandleBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1802A4190
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x18028E174 (--4-$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDDisplayResource(
        CDxHandleBitmapRealization *this,
        struct IDisplayDeviceInterop *a2,
        struct Windows::Devices::Display::Core::IDisplaySurface **a3,
        unsigned int *a4)
{
  __int64 *v4; // r14
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, _QWORD, void **); // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(struct IDisplayDeviceInterop *, void *, GUID *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  void (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-28h] BYREF
  struct Windows::Devices::Display::Core::IDisplaySurface *v23; // [rsp+40h] [rbp-20h] BYREF
  GUID v24; // [rsp+50h] [rbp-10h] BYREF
  void *v25; // [rsp+90h] [rbp+30h] BYREF

  v4 = (__int64 *)((char *)this + 24);
  v9 = 0;
  v23 = 0LL;
  if ( *((_QWORD *)this + 3) && *((_DWORD *)this + 8) == dword_1803D39E0 )
    goto LABEL_7;
  v10 = *(_QWORD *)this;
  v21 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *, _QWORD, _QWORD))(v10 + 144))(this, &v22, 0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x12Eu);
    goto LABEL_13;
  }
  (**v22)(v22, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v21);
  v13 = v21;
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v21 + 104LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v25,
    0LL);
  v15 = v14(v13, 0LL, 0x10000000LL, 0LL, &v25);
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x132u);
    goto LABEL_13;
  }
  v17 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, void *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
  v24 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
  v18 = v17(a2, v25, &v24, v4);
  v9 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x133u);
LABEL_13:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v25);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    return v9;
  }
  *((_DWORD *)this + 8) = dword_1803D39E0;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
LABEL_7:
  if ( a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)this + 2) + 240LL);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurface,wil::err_returncode_policy>::operator=(
    (__int64 *)&v23,
    *v4);
  *a3 = v23;
  return v9;
}
