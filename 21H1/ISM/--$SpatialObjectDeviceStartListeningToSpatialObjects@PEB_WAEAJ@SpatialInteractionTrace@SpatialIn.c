/*
 * XREFs of ??$SpatialObjectDeviceStartListeningToSpatialObjects@PEB_WAEAJ@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAPEB_WAEAJ@Z @ 0x1800D4F70
 * Callers:
 *     _lambda_88fb4871a400503c69c7f747a4c77519_::operator() @ 0x1800D6914 (_lambda_88fb4871a400503c69c7f747a4c77519_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_6e79e13491ebcbf70f655adacfcc6688__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800DAFB0 (std--_Func_impl_no_alloc__lambda_6e79e13491ebcbf70f655adacfcc6688__void_std--shared_ea_1800DAFB0.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C66D8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?SpatialObjectDeviceStartListeningToSpatialObjects_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJ@Z @ 0x1800D8E20 (-SpatialObjectDeviceStartListeningToSpatialObjects_@SpatialInteractionTrace@SpatialInteractionDe.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceStartListeningToSpatialObjects<wchar_t const *,long &>(
        const wchar_t **a1,
        int *a2)
{
  __int64 v4; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v5; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v4,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceStartListeningToSpatialObjects_(v5, *a1, *a2);
  }
}
