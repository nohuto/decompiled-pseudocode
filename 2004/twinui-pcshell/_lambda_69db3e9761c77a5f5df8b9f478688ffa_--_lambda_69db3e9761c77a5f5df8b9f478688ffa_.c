/*
 * XREFs of _lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_ @ 0x180317A40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07___::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07_____lambda_70ef6d486f3f96eaef07ad25d0a0dd07___ @ 0x180315F60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07___--CTaskW.c)
 *     CreateAsyncCallbackWithLambda__lambda_6b03a5b9f901bca31a2e8874ad3128f0___ @ 0x1803160AC (CreateAsyncCallbackWithLambda__lambda_6b03a5b9f901bca31a2e8874ad3128f0___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180316B30 (CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 *     CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180317178 (CreationThreadDispatcher--RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = __abi_winrt_ptr_ctor(*(_QWORD *)a2);
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  return a1;
}
