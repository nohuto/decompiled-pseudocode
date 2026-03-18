/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ @ 0x18019D820
 * Callers:
 *     ??_E?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAPEAXI@Z @ 0x18019E6A0 (--_E-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAPEAXI@Z.c)
 *     ??1CGenericInk@@EEAA@XZ @ 0x180214FD8 (--1CGenericInk@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18019AB3C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ @ 0x1801A1F2C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ.c)
 */

void __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>(
        __int64 a1)
{
  volatile signed __int32 **v2; // rcx

  *(_QWORD *)a1 = &CDeviceResourceTable<CD2DGenericInk,CGenericInk>::`vftable';
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  v2 = *(volatile signed __int32 ***)(a1 + 16);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>>>(
      v2,
      *(volatile signed __int32 ***)(a1 + 24));
    std::_Deallocate<16,0>(*(void **)(a1 + 16), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
