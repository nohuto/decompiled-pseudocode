/*
 * XREFs of ??1CCompSwapChain@@MEAA@XZ @ 0x18028E85C
 * Callers:
 *     ??_ECCompSwapChain@@MEAAPEAXI@Z @ 0x18028EA60 (--_ECCompSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompSwapChain::~CCompSwapChain(CCompSwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  CD3DDevice *v7; // rcx

  *(_QWORD *)this = &CCompSwapChain::`vftable'{for `CMILCOMBaseT<ICompositionSwapChain>'};
  *((_QWORD *)this + 3) = &CCompSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 8) = &CCompSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CCompSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CCompSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CCompSwapChain::`vftable'{for `IDeviceResource'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 384;
  v3 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 400;
  v4 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 424;
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, (char *)this + 64);
  }
  FastRegion::CRegion::FreeMemory((void **)this + 39);
  FastRegion::CRegion::FreeMemory((void **)this + 30);
  FastRegion::CRegion::FreeMemory((void **)this + 21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 13);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 96);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 11);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  v7 = (CD3DDevice *)*((_QWORD *)this + 9);
  if ( v7 )
    CD3DDevice::Release(v7);
  CDeviceResource::~CDeviceResource((CCompSwapChain *)((char *)this + 24));
}
