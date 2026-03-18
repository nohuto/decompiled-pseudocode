/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ @ 0x18019D7C4
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18019DC44 (--1CFilterEffect@@MEAA@XZ.c)
 *     ??1CInk@@UEAA@XZ @ 0x18019DC8C (--1CInk@@UEAA@XZ.c)
 *     ??_E?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@UEAAPEAXI@Z @ 0x18019E660 (--_E-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180192054 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@IEAAXXZ @ 0x1801A1EAC (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@IEAAXXZ.c)
 */

void __fastcall CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>(__int64 a1)
{
  __int64 *v2; // rcx

  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vftable';
  CDeviceResourceTable<CD2DEffect,CFilterEffect>::ReleaseResourcesNoAddRef();
  v2 = *(__int64 **)(a1 + 16);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v2,
      *(__int64 **)(a1 + 24));
    std::_Deallocate<16,0>(*(void **)(a1 + 16), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
