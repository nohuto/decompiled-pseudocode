/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800D6D74
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ @ 0x180020EA8 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800D37D4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@-$ve.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800D6D0C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180024548 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v3++);
    while ( v3 != a2 );
  }
  return result;
}
