/*
 * XREFs of ??$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAURect@Foundation@Windows@@11@Z @ 0x1803368E0
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x18002CE00 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x18033973C (--1Completer@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ.c)
 *     ?EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEAURect@Foundation@Windows@@11@Z @ 0x18033B634 (-EditControlPositionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEAURect@Foundatio.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x18033CDBC (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged<unsigned short *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
        const unsigned __int16 **a1,
        struct Windows::Foundation::Rect *a2,
        struct Windows::Foundation::Rect *a3,
        struct Windows::Foundation::Rect *a4)
{
  TouchKeyboardExperienceTelemetryLogger *v8; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+48h] [rbp-10h]

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(
           &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v11 = &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper;
        Context = &qword_1805A03A8;
        qword_1805A03A8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
        v12 = 0;
        wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer(&v11);
      }
    }
    TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged_(v8, *a1, a2, a3, a4);
  }
}
