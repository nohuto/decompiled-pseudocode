/*
 * XREFs of ?put_ScoreName@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x1800627F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::put_ScoreName(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        HSTRING a2)
{
  HSTRING *v2; // rbx
  HRESULT v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (HSTRING *)((char *)this + 168);
  if ( a2 && a2 == *v2 )
    return 0LL;
  WindowsDeleteString(*v2);
  *v2 = 0LL;
  v4 = WindowsDuplicateString(a2, v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDA,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
