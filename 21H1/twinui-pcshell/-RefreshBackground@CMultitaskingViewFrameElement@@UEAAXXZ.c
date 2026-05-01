/*
 * XREFs of ?RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x18038A270
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x18038AF70 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x18038BBE0 (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 */

void __fastcall CMultitaskingViewFrameElement::RefreshBackground(CMultitaskingViewFrameElement *this)
{
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  refreshed = CMultitaskingViewFrameElement::_RefreshBackgroundThumbnails((CMultitaskingViewFrameElement *)((char *)this - 216));
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23B,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)refreshed);
    AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)this + 9));
  }
}
