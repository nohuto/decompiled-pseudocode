/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAA@XZ @ 0x1800B7B4C
 * Callers:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800B7A90 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??_G?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAAPEAXI@Z @ 0x1802022C0 (--_G-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x1800B9500 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IE.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B9568 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::`vftable';
  result = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>>(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 24));
    result = std::_Deallocate<16,0>(v3, (*(_QWORD *)(a1 + 32) - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
