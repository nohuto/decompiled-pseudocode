/*
 * XREFs of ?GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180265D00
 * Callers:
 *     ?GetDDisplayResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1800F9160 (-GetDDisplayResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJPEAUIDisplayDeviceInterop@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030F44 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5FE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x180265F0C (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDDisplayResource(
        CDxHandleYUVBitmapRealization *this,
        struct IDisplayDeviceInterop *a2,
        struct Windows::Devices::Display::Core::IDisplaySurface **a3,
        unsigned int *a4)
{
  __int64 *v4; // r14
  unsigned int v9; // edi
  int DXGIResource; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rcx
  char *v19; // rcx
  struct Windows::Devices::Display::Core::IDisplaySurface *v20; // rbx
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  struct IDXGIResource *v23; // [rsp+38h] [rbp-18h] BYREF
  GUID v24; // [rsp+40h] [rbp-10h] BYREF
  HANDLE hObject; // [rsp+80h] [rbp+30h] BYREF

  v4 = (__int64 *)((char *)this - 128);
  v9 = 0;
  if ( *((_QWORD *)this - 16) && *((_DWORD *)this - 30) == dword_18034B680 )
  {
LABEL_9:
    if ( a4 )
      *a4 = *(_DWORD *)(*((_QWORD *)this - 17) + 164LL);
    v20 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*v4;
    if ( *v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(*v4);
    *a3 = v20;
    return v9;
  }
  v22 = 0LL;
  hObject = 0LL;
  v23 = 0LL;
  DXGIResource = CDxHandleYUVBitmapRealization::GetDXGIResource(this, &v23, 0LL);
  v9 = DXGIResource;
  if ( DXGIResource < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, DXGIResource, 0x151u, 0LL);
  }
  else
  {
    ((void (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))v23->lpVtbl->QueryInterface)(
      v23,
      &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
      &v22);
    v12 = v22;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v22 + 104LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v14 = v13(v12, 0LL, 0x10000000LL, 0LL, &hObject);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x155u, 0LL);
    }
    else
    {
      v16 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
      v24 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
      v17 = v16(a2, hObject, &v24, v4);
      v9 = v17;
      if ( v17 >= 0 )
      {
        v19 = (char *)hObject;
        *((_DWORD *)this - 30) = dword_18034B680;
        if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v19);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x156u, 0LL);
    }
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  return v9;
}
