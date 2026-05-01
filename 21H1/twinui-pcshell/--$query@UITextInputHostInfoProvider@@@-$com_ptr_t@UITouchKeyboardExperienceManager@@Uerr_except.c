/*
 * XREFs of ??$query@UITextInputHostInfoProvider@@@?$com_ptr_t@UITouchKeyboardExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITextInputHostInfoProvider@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AA244
 * Callers:
 *     ?GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@PEAUHWND__@@UtagRECT@@@std@@XZ @ 0x18043FFF4 (-GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<ITouchKeyboardExperienceManager,wil::err_exception_policy>::query<ITextInputHostInfoProvider>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_c5b9c4f0_4906_4a75_a1db_edcf89a57cb7, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a2;
}
