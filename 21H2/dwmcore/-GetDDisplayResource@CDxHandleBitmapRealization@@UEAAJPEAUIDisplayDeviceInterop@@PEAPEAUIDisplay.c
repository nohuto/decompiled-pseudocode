/*
 * XREFs of ?GetDDisplayResource@CDxHandleBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180264660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030F44 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5FE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDDisplayResource(
        CDxHandleBitmapRealization *this,
        struct IDisplayDeviceInterop *a2,
        struct Windows::Devices::Display::Core::IDisplaySurface **a3,
        unsigned int *a4)
{
  __int64 *v4; // r14
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rcx
  char *v20; // rcx
  struct Windows::Devices::Display::Core::IDisplaySurface *v21; // rbx
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  GUID v25; // [rsp+40h] [rbp-10h] BYREF
  HANDLE hObject; // [rsp+80h] [rbp+30h] BYREF

  v4 = (__int64 *)((char *)this + 24);
  v9 = 0;
  if ( *((_QWORD *)this + 3) && *((_DWORD *)this + 8) == dword_18034B680 )
  {
LABEL_9:
    if ( a4 )
      *a4 = *(_DWORD *)(*((_QWORD *)this + 2) + 240LL);
    v21 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*v4;
    if ( *v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(*v4);
    *a3 = v21;
    return v9;
  }
  v10 = *(_QWORD *)this;
  v23 = 0LL;
  hObject = 0LL;
  v24 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *, _QWORD, _QWORD))(v10 + 128))(this, &v24, 0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x12Eu, 0LL);
  }
  else
  {
    (**v24)(v24, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v23);
    v13 = v23;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v23 + 104LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v15 = v14(v13, 0LL, 0x10000000LL, 0LL, &hObject);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x132u, 0LL);
    }
    else
    {
      v17 = *(__int64 (__fastcall **)(struct IDisplayDeviceInterop *, HANDLE, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
      v25 = GUID_594f6cc6_139a_56d6_a4b1_15fe2cb76adb;
      v18 = v17(a2, hObject, &v25, v4);
      v9 = v18;
      if ( v18 >= 0 )
      {
        v20 = (char *)hObject;
        *((_DWORD *)this + 8) = dword_18034B680;
        if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x133u, 0LL);
    }
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  return v9;
}
