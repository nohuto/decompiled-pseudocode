/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$30 @ 0x1800D4E61
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180047D8C (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  PCWSTR StringRawBuffer; // rbx
  const char *v4; // rax

  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 96), 0LL);
  v4 = (const char *)WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a2 + 112) + 8LL), 0LL);
  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 280),
    (void *)0x1B7,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
    "Subscription ID: %ls, Content ID: %ls",
    v4,
    StringRawBuffer);
  return &loc_1800A376D;
}
