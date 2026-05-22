/*
 * XREFs of ?ReadInitializationTimeProperties@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800E1400
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C66D8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??$swprintf_s@$0CAA@@@YAHAEAY0CAA@_WPEB_WZZ @ 0x1800DE88C (--$swprintf_s@$0CAA@@@YAHAEAY0CAA@_WPEB_WZZ.c)
 *     ?Log_Error_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W@Z @ 0x1800E076C (-Log_Error_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadInitializationTimeProperties(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v5; // rcx
  int v7; // [rsp+30h] [rbp-438h] BYREF
  _BYTE v8[24]; // [rsp+38h] [rbp-430h] BYREF
  wchar_t v9[512]; // [rsp+50h] [rbp-418h] BYREF

  v7 = 0;
  v2 = 1;
  if ( (*(int (__fastcall **)(_QWORD, void *, int *, __int64, _QWORD))(**((_QWORD **)this + 15) + 72LL))(
         *((_QWORD *)this + 15),
         &SPATIALPROP_Handedness,
         &v7,
         4LL,
         0LL) >= 0 )
  {
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        *((_DWORD *)this + 38) = 1;
        goto LABEL_8;
      }
      if ( v7 == 2 )
      {
        *((_DWORD *)this + 38) = 2;
        goto LABEL_8;
      }
      swprintf_s<512>(v9, L"Invalid handedness reported by device: %d");
      if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v3) )
      {
        wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v4,
          _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
        SpatialInteractionDevices::SpatialInteractionTrace::Log_Error_(v5, -2147418113, v9);
      }
    }
    *((_DWORD *)this + 38) = 0;
  }
LABEL_8:
  if ( !*((_BYTE *)this + 384)
    || (*(int (__fastcall **)(_QWORD, void *, _BYTE *, __int64, _QWORD))(**((_QWORD **)this + 15) + 72LL))(
         *((_QWORD *)this + 15),
         &SPATIALPROP_HandMesh_StateStream,
         v8,
         16LL,
         0LL) < 0 )
  {
    v2 = 0;
  }
  *((_BYTE *)this + 157) = v2;
  return 0LL;
}
