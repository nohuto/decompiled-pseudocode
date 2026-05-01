/*
 * XREFs of ??$?4V_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@X@?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@@Z @ 0x180258194
 * Callers:
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEB$$T@Z @ 0x180258374 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@-$AsyncEventSourceT@U-$ITypedEventH.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *> *)>::operator=<_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *result; // rax

  v4 = a1[14];
  a1[14] = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  a1[1] = &wistd::__function::__func<_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *> *)>::`vftable';
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  result = a1;
  a1[14] = a1 + 1;
  return result;
}
