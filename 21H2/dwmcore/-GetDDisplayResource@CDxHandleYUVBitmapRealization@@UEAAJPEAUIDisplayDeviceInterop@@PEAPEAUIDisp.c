/*
 * XREFs of ?GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1802A57B0
 * Callers:
 *     ?GetDDisplayResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x18010C4D0 (-GetDDisplayResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJPEAUIDisplayDeviceInterop@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x18028E174 (--4-$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x1802A59C0 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDDisplayResource(
        CDxHandleYUVBitmapRealization *this,
        struct IDisplayDeviceInterop *a2,
        struct Windows::Devices::Display::Core::IDisplaySurface **a3,
        unsigned int *a4)
{
  __int64 *v4; // r14
  unsigned int v9; // ebx
  int DXGIResource; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, _QWORD, void **); // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(struct IDisplayDeviceInterop *, void *, GUID *, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  struct IDXGIResource *v21; // [rsp+38h] [rbp-28h] BYREF
  struct Windows::Devices::Display::Core::IDisplaySurface *v22; // [rsp+40h] [rbp-20h] BYREF
  GUID v23; // [rsp+50h] [rbp-10h] BYREF
  void *v24; // [rsp+90h] [rbp+30h] BYREF

  v4 = (__int64 *)((char *)this - 128);
  v9 = 0;
  v22 = 0LL;
  if ( *((_QWORD *)this - 16) && *((_DWORD *)this - 30) == dword_1803D39E0 )
    goto LABEL_7;
  v20 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  DXGIResource = CDxHandleYUVBitmapRealization::GetDXGIResource(this, &v21, 0LL);
  v9 = DXGIResource;
  if ( DXGIResource < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, DXGIResource, 0x1B7u);
    goto LABEL_13;
  }
  ((void (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))v21->lpVtbl->QueryInterface)(
    v21,
    &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
    &v20);
  v12 = v20;
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v20 + 104LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v24,
    0LL);
  v14 = v13(v12, 0LL, 0x10000000LL, 0LL, &v24);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x1BBu);
    goto LABEL_13;
  }
  v16 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, void *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
  v23 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
  v17 = v16(a2, v24, &v23, v4);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x1BCu);
LABEL_13:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    return v9;
  }
  *((_DWORD *)this - 30) = dword_1803D39E0;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
LABEL_7:
  if ( a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)this - 17) + 148LL);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurface,wil::err_returncode_policy>::operator=(
    (__int64 *)&v22,
    *v4);
  *a3 = v22;
  return v9;
}
