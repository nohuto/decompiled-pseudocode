/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ @ 0x18016D17C
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18016D4F8 (--1CFilterEffect@@MEAA@XZ.c)
 *     ??1CInk@@UEAA@XZ @ 0x18016D56C (--1CInk@@UEAA@XZ.c)
 *     ??_E?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@UEAAPEAXI@Z @ 0x18016E1F0 (--_E-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016AA4C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@IEAAXXZ @ 0x1801719BC (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@IEAAXXZ.c)
 */

void __fastcall CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>(__int64 a1)
{
  void *v2; // rdi

  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vftable';
  CDeviceResourceTable<CD2DEffect,CFilterEffect>::ReleaseResourcesNoAddRef();
  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
      *(__int64 **)(a1 + 16),
      *(__int64 **)(a1 + 24));
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 32) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
