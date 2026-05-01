/*
 * XREFs of ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180354610
 * Callers:
 *     _lambda_1a95d3552be03f68d729c728809b4115_::operator() @ 0x1800AF054 (_lambda_1a95d3552be03f68d729c728809b4115_--operator().c)
 *     _lambda_306f798c08cb193c312491547c38aafa_::operator() @ 0x1800AF328 (_lambda_306f798c08cb193c312491547c38aafa_--operator().c)
 *     _lambda_3c2570cc1d800aee28388d46c0371330_::operator() @ 0x1800AF474 (_lambda_3c2570cc1d800aee28388d46c0371330_--operator().c)
 *     _lambda_5096affdfa8dd9dd59ff190700218634_::operator() @ 0x1800AF5C0 (_lambda_5096affdfa8dd9dd59ff190700218634_--operator().c)
 *     _lambda_da08d54169002be5ece525bde89b0b7d_::operator() @ 0x1800AF8E0 (_lambda_da08d54169002be5ece525bde89b0b7d_--operator().c)
 *     _lambda_e1213522565a54bdf40b4b22e649b293_::operator() @ 0x1800AF9F0 (_lambda_e1213522565a54bdf40b4b22e649b293_--operator().c)
 *     _lambda_e127833a80797c5d08a14d2b9986789f_::operator() @ 0x1800AFC2C (_lambda_e127833a80797c5d08a14d2b9986789f_--operator().c)
 *     _lambda_f30574fd153fefe3a19e136921a472ba_::operator() @ 0x1800AFE64 (_lambda_f30574fd153fefe3a19e136921a472ba_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x180357434 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
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
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18051A4E9, 0LL, 0LL, 3u, &v4);
    }
  }
}
