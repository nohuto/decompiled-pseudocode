/*
 * XREFs of ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1802CFB2C
 * Callers:
 *     ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1802CB7CC (--$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXA.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0002_0001@@@Z @ 0x1802D13C0 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802D2E00 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18005FAE4 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1802CEAC8 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

char __fastcall ViewManagerInteropTraceLogging::IsEnabled(char a1)
{
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = a1;
  v3 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
  {
    v3 = (wil::TraceLoggingProvider *)qword_1805CD578;
    qword_1805CD578[0] = &IamTraceLogging::`vftable';
    atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
    ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_1805CD578);
    InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_1805CD578);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v3, 0);
}
