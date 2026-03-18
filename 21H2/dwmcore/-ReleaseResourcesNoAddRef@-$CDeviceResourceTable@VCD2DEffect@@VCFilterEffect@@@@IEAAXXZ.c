/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@IEAAXXZ @ 0x1801A1EAC
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ @ 0x18019D7C4 (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801A1830 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180192054 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect>::ReleaseResourcesNoAddRef(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  for ( i = *(_QWORD *)(a1 + 16); i != v1; i += 8LL )
  {
    v4 = *(int *)(*(_QWORD *)(*(_QWORD *)i + 16LL) + 8LL) + *(_QWORD *)i + 16LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, a1);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
    *(__int64 **)(a1 + 16),
    *(__int64 **)(a1 + 24));
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
