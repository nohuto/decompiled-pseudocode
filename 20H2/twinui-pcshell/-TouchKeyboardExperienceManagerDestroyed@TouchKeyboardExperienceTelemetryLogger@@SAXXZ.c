/*
 * XREFs of ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180353B00
 * Callers:
 *     _lambda_1a95d3552be03f68d729c728809b4115_::operator() @ 0x1800B0CB4 (_lambda_1a95d3552be03f68d729c728809b4115_--operator().c)
 *     _lambda_20dc82c86a731ffb3a6f837c10819f42_::operator() @ 0x1800B0F88 (_lambda_20dc82c86a731ffb3a6f837c10819f42_--operator().c)
 *     _lambda_4cbe742715b394437ec6208d218cee82_::operator() @ 0x1800B11C0 (_lambda_4cbe742715b394437ec6208d218cee82_--operator().c)
 *     _lambda_5096affdfa8dd9dd59ff190700218634_::operator() @ 0x1800B130C (_lambda_5096affdfa8dd9dd59ff190700218634_--operator().c)
 *     _lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_::operator() @ 0x1800B191C (_lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_--operator().c)
 *     _lambda_9ab68852e2b72d35890b3d375991eaf9_::operator() @ 0x1800B1A2C (_lambda_9ab68852e2b72d35890b3d375991eaf9_--operator().c)
 *     _lambda_9f8c9b30a255187f7fdba174b5588192_::operator() @ 0x1800B1C68 (_lambda_9f8c9b30a255187f7fdba174b5588192_--operator().c)
 *     _lambda_f30574fd153fefe3a19e136921a472ba_::operator() @ 0x1800B1DB4 (_lambda_f30574fd153fefe3a19e136921a472ba_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x180356924 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      a1,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180519F80, 0LL, 0LL, 3u, &v4);
    }
  }
}
