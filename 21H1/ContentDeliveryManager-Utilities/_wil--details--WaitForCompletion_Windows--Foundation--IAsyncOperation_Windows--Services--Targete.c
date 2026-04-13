/*
 * XREFs of _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Services::TargetedContent::TargetedContentSubscription_______::_2_::CompletionDelegate::Invoke @ 0x18001EE50
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005ED0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Services::TargetedContent::TargetedContentSubscription_______::_2_::CompletionDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // r8
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 48) = a3;
  if ( !SetEvent(*(HANDLE *)(a1 + 56)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x91C, v3, v4);
    JUMPOUT(0x18001EE83LL);
  }
  return 0LL;
}
