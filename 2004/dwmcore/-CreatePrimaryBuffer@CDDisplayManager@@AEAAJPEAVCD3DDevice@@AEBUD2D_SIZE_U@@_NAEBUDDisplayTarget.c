/*
 * XREFs of ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x18024205C
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180241B04 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800342C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??1DDisplayPrimaryBufferResources@@QEAA@XZ @ 0x1802375A8 (--1DDisplayPrimaryBufferResources@@QEAA@XZ.c)
 *     ??4DDisplayPrimaryBufferResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180240E64 (--4DDisplayPrimaryBufferResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 __fastcall CDDisplayManager::CreatePrimaryBuffer(
        CDDisplayManager *this,
        struct CD3DDevice *a2,
        const struct D2D_SIZE_U *a3,
        __int64 a4,
        const struct DDisplayTargetResources *a5,
        struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *a6,
        unsigned int a7,
        void **a8)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *, __int128 *); // rbx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, __int64, _QWORD, char *); // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v20; // eax
  __int64 v21; // rcx
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  char v25; // [rsp+58h] [rbp-8h]

  v24 = 0LL;
  v23 = 0LL;
  v25 = 0;
  v9 = *(_QWORD *)a5;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *, __int128 *))(**(_QWORD **)a5 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
  v11 = v10(v9, *((_QWORD *)a5 + 4), a6, &v23);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x19Eu, 0LL);
  }
  else
  {
    v14 = *((_QWORD *)a5 + 2);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, char *))(*(_QWORD *)v14 + 24LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)&v23 + 1,
      0LL);
    v16 = v15(v14, v23, 0LL, 0x10000000LL, 0LL, (char *)&v23 + 8);
    v13 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1A6u, 0LL);
    }
    else
    {
      v18 = *((_QWORD *)a2 + 74);
      v19 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v18 + 384LL);
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v24);
      v20 = v19(v18, *((_QWORD *)&v23 + 1), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v24);
      v13 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1ABu, 0LL);
      }
      else
      {
        v25 = 0;
        DDisplayPrimaryBufferResources::operator=(a8, (__int64 *)&v23);
      }
    }
  }
  DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources((DDisplayPrimaryBufferResources *)&v23);
  return v13;
}
