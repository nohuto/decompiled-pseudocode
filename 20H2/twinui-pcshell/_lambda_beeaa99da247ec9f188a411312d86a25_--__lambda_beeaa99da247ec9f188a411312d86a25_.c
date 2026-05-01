/*
 * XREFs of _lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180321BB0
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x1803217B8 (CreationThreadDispatcher--RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 *     CreationThreadDispatcher::RunSync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x180321898 (CreationThreadDispatcher--RunSync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 *     CAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___::_scalar_deleting_destructor_ @ 0x180321CE0 (CAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___--_scalar_deleting_destructo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___::_scalar_deleting_destructor_ @ 0x180321D30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___--_scala.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180321DAC (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 *     _XamlSnapAssistViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$2 @ 0x180321EE1 (_XamlSnapAssistViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[2];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[1];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
