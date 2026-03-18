/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800358D4
 * Callers:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x180035878 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IE.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAA@XZ @ 0x180035914 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800EAD84 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800EAE8C (--$_Uninitialized_move@PEAV-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800EC208 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CMILRefCountBaseT<IDeviceResource>::InternalRelease();
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
