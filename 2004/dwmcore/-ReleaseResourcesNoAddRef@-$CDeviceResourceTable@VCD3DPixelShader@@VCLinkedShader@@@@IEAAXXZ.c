/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@IEAAXXZ @ 0x1800B9F4C
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ @ 0x1800213D8 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800B9FF0 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAAXPEBVIDevi.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800B9990 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B9FB4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResourcesNoAddRef(
        struct IDeviceResourceNotify *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 3);
  v3 = *((_QWORD *)a1 + 2);
  if ( v3 != v1 )
  {
    do
    {
      CD3DResource::RemoveResourceNotifier((CD3DResource *)(*(_QWORD *)v3 + 24LL), a1);
      v3 += 8LL;
    }
    while ( v3 != v1 );
    v1 = *((_QWORD *)a1 + 3);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>>(
    *((_QWORD *)a1 + 2),
    v1);
  result = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 3) = result;
  return result;
}
