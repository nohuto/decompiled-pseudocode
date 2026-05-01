/*
 * XREFs of ?Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1801C0818
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801C089C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadControllerExperienceManagerLogging@@P6AXXZ@Z @ 0x1801C2D00 (-get@-$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadCo.c)
 */

void __fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::Hide(
        TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD **)(wil::details::static_lazy<TouchpadControllerExperienceManagerLogging>::get(
                      this,
                      _lambda_fcbe7e8e9d69bc7433d8ee1b3dc43461_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x400000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(
        v3,
        (unsigned __int8 *)dword_1804DCCF6,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        0LL,
        2u,
        &v4);
  }
}
