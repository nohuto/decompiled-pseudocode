/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAA@XZ @ 0x180035914
 * Callers:
 *     ??1CRenderingTechnique@@QEAA@XZ @ 0x1800357CC (--1CRenderingTechnique@@QEAA@XZ.c)
 *     ??_G?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAAPEAXI@Z @ 0x180252210 (--_G-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x180035878 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IE.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800358D4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>(
        __int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx

  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::`vftable';
  result = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>>(
      v3,
      *(_QWORD **)(a1 + 24));
    result = std::_Deallocate<16,0>(
               *(_QWORD *)(a1 + 16),
               (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 16)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
