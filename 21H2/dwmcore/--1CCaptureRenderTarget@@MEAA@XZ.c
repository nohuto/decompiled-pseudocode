/*
 * XREFs of ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801C3EE0
 * Callers:
 *     ??_GCCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18019EB50 (--_GCCaptureRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x1801C5AD0 (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800DD2C8 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18019AAF4 (--$_Destroy_range@V-$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x18019AB7C (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801C51DC (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801C522C (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801C5848 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801C5AA4 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 */

void __fastcall CCaptureRenderTarget::~CCaptureRenderTarget(CCaptureRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void ***v4; // rdi
  void **v5; // rcx
  __int64 v6; // rcx
  CD3DDevice *v7; // rcx

  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `COffScreenRenderTarget'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 233) = &CCaptureRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 1984;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 2000;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 76) = *(_DWORD *)(*((_QWORD *)this + 10) + 12LL)
                                                                           - 2024;
  CCaptureRenderTarget::SetController(this, 0LL);
  CCaptureRenderTarget::ReleaseFlipResources(this);
  v4 = (void ***)((char *)this + 2008);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 2008);
  CCaptureRenderTarget::ReleaseRenderingResources(this);
  v5 = (void **)*((_QWORD *)this + 254);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
      v5,
      *((void ***)this + 255));
    std::_Deallocate<16,0>(
      *((void **)this + 254),
      (*((_QWORD *)this + 256) - *((_QWORD *)this + 254)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 254) = 0LL;
    *((_QWORD *)this + 255) = 0LL;
    *((_QWORD *)this + 256) = 0LL;
  }
  if ( *v4 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>>(
      *v4,
      *((void ***)this + 252));
    std::_Deallocate<16,0>(*v4, (*((_QWORD *)this + 253) - *((_QWORD *)this + 251)) & 0xFFFFFFFFFFFFFFF8uLL);
    *v4 = 0LL;
    *((_QWORD *)this + 252) = 0LL;
    *((_QWORD *)this + 253) = 0LL;
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((__int64)this + 1984);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 247);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 246);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 245);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 244);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 242);
  v6 = *((_QWORD *)this + 238);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(
      v6,
      *((_QWORD *)this + 239));
    std::_Deallocate<16,0>(
      *((void **)this + 238),
      8 * ((__int64)(*((_QWORD *)this + 240) - *((_QWORD *)this + 238)) >> 3));
    *((_QWORD *)this + 238) = 0LL;
    *((_QWORD *)this + 239) = 0LL;
    *((_QWORD *)this + 240) = 0LL;
  }
  v7 = (CD3DDevice *)*((_QWORD *)this + 234);
  if ( v7 )
    CD3DDevice::Release(v7);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
