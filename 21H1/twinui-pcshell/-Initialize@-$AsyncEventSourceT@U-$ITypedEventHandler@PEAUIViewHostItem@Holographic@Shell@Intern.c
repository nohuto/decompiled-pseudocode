/*
 * XREFs of ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x18021EA8C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_2284ad0f412f2bfddc83d7ef9652d66f_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180219020 (-_lambda_invoker_cdecl_@_lambda_2284ad0f412f2bfddc83d7ef9652d66f_@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x180219F00 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::Initialize(
        __int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64); // rdi
  _QWORD *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 32) )
  {
    v1 = *(_QWORD *)(a1 + 40);
    if ( !v1 )
    {
      v2 = -2147024882;
      v3 = 680LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    v5 = a1 + 48;
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
    v2 = v6(v1, v5);
    if ( v2 < 0 )
    {
      v3 = 681LL;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = (_QWORD *)(a1 + 48);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
    v2 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(v7);
    if ( v2 < 0 )
    {
      v3 = 685LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
