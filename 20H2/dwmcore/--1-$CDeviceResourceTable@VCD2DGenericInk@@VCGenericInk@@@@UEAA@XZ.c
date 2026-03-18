/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ @ 0x18016B408
 * Callers:
 *     ??_E?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAPEAXI@Z @ 0x18016C450 (--_E-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAPEAXI@Z.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x1801C197C (--1CGenericInk@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180168CA8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ @ 0x18016FCE8 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ.c)
 */

void __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>(
        __int64 a1)
{
  void *v2; // rdi

  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DGenericInk,CGenericInk>::`vftable';
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
      *(CRenderTargetBitmap ***)(a1 + 16),
      *(CRenderTargetBitmap ***)(a1 + 24));
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 32) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
