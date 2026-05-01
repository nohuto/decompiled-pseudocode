/*
 * XREFs of ?InitDropFeedback@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x18041DC28
 * Callers:
 *     _lambda_f8a4012ea914e544f53ba03328832034_::operator() @ 0x18041CE30 (_lambda_f8a4012ea914e544f53ba03328832034_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1801383D0 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

void __fastcall JointResizeTelemetry::JointResize::InitDropFeedback(JointResizeTelemetry::JointResize *this)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  WINBOOL v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-38h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = &qword_1805CD228;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_1805CD228);
    qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
    qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v2);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
  }
  v3 = (_DWORD *)v6[1];
  if ( *v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(
        v4,
        (unsigned __int8 *)dword_18052409D,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        0LL,
        2u,
        &v7);
  }
}
