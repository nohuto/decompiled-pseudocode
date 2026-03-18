/*
 * XREFs of ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1800FD9D0
 * Callers:
 *     ??_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1800FDB80 (--_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLegacyRemotingSwapChain::~CLegacyRemotingSwapChain(CLegacyRemotingSwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  void *v7; // rdi
  HANDLE CurrentProcess; // rax
  HMODULE v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  CD3DDevice *v12; // rcx

  *(_QWORD *)this = &CLegacyRemotingSwapChain::`vftable'{for `CMILCOMBaseT<ILegacyRemotingSwapChain>'};
  *((_QWORD *)this + 3) = &CLegacyRemotingSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 12LL) + 8) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 224;
  v3 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 240;
  v4 = *(int *)(*((_QWORD *)this + 1) + 12LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 264;
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, (char *)this + 64);
  }
  v7 = (void *)*((_QWORD *)this + 26);
  if ( v7 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v7);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 104);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 112);
  v9 = (HMODULE)*((_QWORD *)this + 12);
  if ( v9 )
    FreeLibrary(v9);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 25);
  FastRegion::CRegion::FreeMemory((void **)this + 16);
  v10 = *((_QWORD *)this + 14);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 80);
  v12 = (CD3DDevice *)*((_QWORD *)this + 9);
  if ( v12 )
    CD3DDevice::Release(v12);
  CDeviceResource::~CDeviceResource((CLegacyRemotingSwapChain *)((char *)this + 24));
}
