/*
 * XREFs of ?CreateD2DDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x1800B1B74
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800B0F00 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::CreateD2DDevice(
        CD2DFactory *this,
        __int64 (__fastcall ***a2)(struct IDXGIDeviceDWM *, GUID *, __int64 *),
        struct ID2D1Device **a3)
{
  __int64 (__fastcall **v3)(struct IDXGIDeviceDWM *, GUID *, __int64 *); // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, CD2DFactory **); // rdi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  CD2DFactory *v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v15 = this;
  v3 = *a2;
  v15 = 0LL;
  v16 = 0LL;
  v5 = (*v3)((struct IDXGIDeviceDWM *)a2, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v16);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xBBu, 0LL);
  }
  else
  {
    v8 = (__int64)*(&g_DeviceManager + 1);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, CD2DFactory **))(*(_QWORD *)*(&g_DeviceManager + 1) + 120LL);
    if ( v15 )
      (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v15 + 16LL))(v15);
    v10 = v9(v8, 4LL, v16, &v15);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xBFu, 0LL);
    }
    else
    {
      v12 = (**(__int64 (__fastcall ***)(CD2DFactory *, GUID *, struct ID2D1Device **))v15)(
              v15,
              &GUID_47dd575d_ac05_4cdd_8049_9b02cd16f44c,
              a3);
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC1u, 0LL);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
  return v7;
}
