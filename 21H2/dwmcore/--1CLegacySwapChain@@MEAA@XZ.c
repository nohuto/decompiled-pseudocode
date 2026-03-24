/*
 * XREFs of ??1CLegacySwapChain@@MEAA@XZ @ 0x180024E5C
 * Callers:
 *     ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x180024E20 (--_GCLegacySwapChain@@MEAAPEAXI@Z.c)
 *     ??_ECLegacyStereoSwapChain@@UEAAPEAXI@Z @ 0x18024D980 (--_ECLegacyStereoSwapChain@@UEAAPEAXI@Z.c)
 *     ??_ECConversionSwapChain@@UEAAPEAXI@Z @ 0x18024E2D0 (--_ECConversionSwapChain@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18005FB10 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x18006143C (--1CDeviceResource@@MEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@0@@Z @ 0x1800DA474 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuf.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacySwapChain::~CLegacySwapChain(CLegacySwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CRenderTargetBitmap *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  CRenderTargetBitmap *v9; // rcx
  __int64 v10; // rdi
  CD3DDevice *v11; // rcx

  *(_QWORD *)this = &CLegacySwapChain::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CLegacySwapChain::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 7) = &CLegacySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CLegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 12LL) + 24) = &CLegacySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 24) = &CLegacySwapChain::`vftable'{for `ILegacySwapChain'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 264;
  v3 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 280;
  v4 = *(int *)(*((_QWORD *)this + 3) + 12LL);
  *(_DWORD *)((char *)this + v4 + 20) = v4 - 304;
  v5 = *(int *)(*((_QWORD *)this + 3) + 16LL);
  *(_DWORD *)((char *)this + v5 + 20) = v5 - 328;
  v6 = (CRenderTargetBitmap *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v6 )
    CRenderTargetBitmap::Release(v6);
  if ( *((_QWORD *)this + 9) )
    *(_BYTE *)(*((_QWORD *)this + 8) + 1436LL) = 1;
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    v8 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 48LL))(v8, (char *)this + 56);
  }
  v9 = (CRenderTargetBitmap *)*((_QWORD *)this + 34);
  if ( v9 )
    CRenderTargetBitmap::Release(v9);
  FastRegion::CRegion::FreeMemory((CLegacySwapChain *)((char *)this + 192));
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CSwapChainBuffer>>>(
      *((_QWORD *)this + 13),
      *((_QWORD *)this + 14));
    std::_Deallocate<16,0>(v10, (*((_QWORD *)this + 15) - v10) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((char *)this + 96);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((char *)this + 88);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 80);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((char *)this + 72);
  v11 = (CD3DDevice *)*((_QWORD *)this + 8);
  if ( v11 )
    CD3DDevice::Release(v11);
  CDeviceResource::~CDeviceResource((CLegacySwapChain *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
