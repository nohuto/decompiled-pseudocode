/*
 * XREFs of ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x1800953E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x1800893B8 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x180093934 (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x1800939B0 (-InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x180093C80 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x180096958 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendInputReport(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  RawInputProvidersContinuousTracing *v14; // rcx
  __int64 v15; // rcx
  RawInputProvidersContinuousTracing *v16; // rcx
  _BYTE v18[24]; // [rsp+40h] [rbp-838h] BYREF
  int v19; // [rsp+58h] [rbp-820h]

  v7 = 0;
  if ( (*(_BYTE *)(a7 + 4) & 8) != 0 )
  {
    memset_0(v18, 0, 0x7F0uLL);
    v19 = 2032;
    v7 = MPCInputInfoHelper::PopulateAugmentedInput(a2, a3, a4, a5, a6, (_OWORD *)a7, (__int64)v18);
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 - 2744) + 24LL))(*(_QWORD *)(a1 - 2744), v18);
    if ( RawInputProvidersContinuousTracing::IsEnabled(v12) )
    {
      wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
        v13,
        _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
      RawInputProvidersContinuousTracing::InputReportProcessed_(v14, a3, v7, (struct InputInfo *)v18);
    }
  }
  else if ( RawInputProvidersContinuousTracing::IsEnabled(a1) )
  {
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
      v15,
      _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    RawInputProvidersContinuousTracing::InputReportIgnored_(v16, a3, L"No select");
  }
  return (unsigned int)v7;
}
