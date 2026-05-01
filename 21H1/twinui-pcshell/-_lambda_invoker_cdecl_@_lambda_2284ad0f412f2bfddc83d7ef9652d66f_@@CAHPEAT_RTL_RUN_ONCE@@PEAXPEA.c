/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_2284ad0f412f2bfddc83d7ef9652d66f_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180219020
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x18021EA8C (-Initialize@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Intern.c)
 */

__int64 __fastcall _lambda_2284ad0f412f2bfddc83d7ef9652d66f_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  unsigned int v3; // ebx
  signed int v4; // eax

  v3 = 0;
  if ( Context )
    *Context = 0LL;
  v4 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::Initialize(Parameter);
  if ( v4 >= 0 )
    return 1;
  else
    SetLastError(v4);
  return v3;
}
