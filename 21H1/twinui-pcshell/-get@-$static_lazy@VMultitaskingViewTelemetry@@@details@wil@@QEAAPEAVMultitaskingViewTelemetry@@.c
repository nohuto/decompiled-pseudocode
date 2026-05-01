/*
 * XREFs of ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x180366434
 * Callers:
 *     _lambda_94769694b20f6e8119e734e702371599_::operator() @ 0x180365618 (_lambda_94769694b20f6e8119e734e702371599_--operator().c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180365DE4 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ??$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z @ 0x1803689DC (--$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z.c)
 *     ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x18037A110 (-Show@CMultitaskingViewFrame@@UEAAJXZ.c)
 *     ?ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z @ 0x18037EE7C (-ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z.c)
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180395C00 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1803987E0 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x18039FCB0 (-NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 * Callees:
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180113D80 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Create@MultitaskingViewTelemetry@@IEAAXXZ @ 0x180365A70 (-Create@MultitaskingViewTelemetry@@IEAAXXZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<MultitaskingViewTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5) && (_DWORD)v4 )
  {
    v5 = &qword_1805A03C8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_1805A03C8);
    qword_1805A03C8 = &MultitaskingViewTelemetry::`vftable';
    atexit(a2);
    MultitaskingViewTelemetry::Create((MultitaskingViewTelemetry *)&qword_1805A03C8);
    InitOnceComplete(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, &qword_1805A03C8);
  }
  return v5;
}
