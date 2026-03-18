/*
 * XREFs of ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1800E042C
 * Callers:
 *     ??_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1800E03F0 (--_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x18006C84C (--1CDeviceResource@@MEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1B90 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  CD3DDevice *v13; // rcx

  *(_QWORD *)this = &CLegacyRemotingSwapChain::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CLegacyRemotingSwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CLegacyRemotingSwapChain::`vftable'{for `ILegacyRemotingSwapChain'};
  *((_QWORD *)this + 9) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CLegacyRemotingSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CLegacyRemotingSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CLegacyRemotingSwapChain::`vftable'{for `IPixelFormat'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 208;
  v3 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 224;
  v4 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 248;
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, (char *)this + 72);
  }
  v7 = (void *)*((_QWORD *)this + 26);
  if ( v7 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v7);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 112);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 120);
  v9 = (HMODULE)*((_QWORD *)this + 13);
  if ( v9 )
    FreeLibrary(v9);
  v10 = (char *)*((_QWORD *)this + 25);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  FastRegion::CRegion::FreeMemory((void **)this + 16);
  v11 = *((_QWORD *)this + 15);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 14);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 88);
  v13 = (CD3DDevice *)*((_QWORD *)this + 10);
  if ( v13 )
    CD3DDevice::Release(v13);
  CDeviceResource::~CDeviceResource((CLegacyRemotingSwapChain *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
