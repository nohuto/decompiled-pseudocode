/*
 * XREFs of ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802433FC
 * Callers:
 *     ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x180243D80 (--_GCDDisplaySwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x1800328BC (--1CDeviceResource@@MEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008C32C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C93AC (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@0AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180239D8C (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@@0@@Z @ 0x180239DC4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@@.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x180243620 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x180243690 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 */

void __fastcall CDDisplaySwapChain::~CDDisplaySwapChain(CDDisplaySwapChain *this)
{
  char *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rdx
  void *v8; // rbx
  void *v9; // rbx
  CD3DDevice *v10; // rcx

  *(_QWORD *)this = &CDDisplaySwapChain::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDDisplaySwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CDDisplaySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 8) = &CDDisplaySwapChain::`vftable'{for `IOverlaySwapChain'};
  v2 = (char *)this + 224;
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CDDisplaySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CDDisplaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  v3 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 424;
  v4 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 440;
  v5 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v5 + 20) = v5 - 464;
  if ( *(_QWORD *)v2 )
  {
    v6 = *(_QWORD *)v2 + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, (char *)this + 56);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 54);
  std::vector<unsigned char>::_Tidy((__int64)this + 408);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 49,
    v7);
  v8 = (void *)*((_QWORD *)this + 46);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CRegion>>>(*((CRegion ***)this + 46), *((CRegion ***)this + 47));
    std::_Deallocate<16,0>(v8, (*((_QWORD *)this + 48) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
    *((_QWORD *)this + 48) = 0LL;
  }
  FastRegion::CRegion::FreeMemory((void **)this + 37);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v2);
  v9 = (void *)*((_QWORD *)this + 25);
  if ( v9 )
  {
    std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
      *((DDisplayPrimaryBufferResources **)this + 25),
      *((DDisplayPrimaryBufferResources **)this + 26));
    std::_Deallocate<16,0>(v9, (*((_QWORD *)this + 27) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  DDisplayTargetResources::~DDisplayTargetResources((CDDisplaySwapChain *)((char *)this + 144));
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 16);
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((CDDisplaySwapChain *)((char *)this + 96));
  v10 = (CD3DDevice *)*((_QWORD *)this + 11);
  if ( v10 )
    CD3DDevice::Release(v10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  CDeviceResource::~CDeviceResource((CDDisplaySwapChain *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
