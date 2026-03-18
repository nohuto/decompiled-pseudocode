/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@IEAAXXZ @ 0x1801719BC
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ @ 0x18016D17C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x180171550 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016AA4C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect>::ReleaseResourcesNoAddRef(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(__int64 **)(a1 + 24);
  v3 = *(__int64 **)(a1 + 16);
  if ( v3 != v1 )
  {
    do
    {
      v4 = *v3 + 16 + *(int *)(*(_QWORD *)(*v3 + 16) + 8LL);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, a1);
      ++v3;
    }
    while ( v3 != v1 );
    v1 = *(__int64 **)(a1 + 24);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
    *(__int64 **)(a1 + 16),
    v1);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
