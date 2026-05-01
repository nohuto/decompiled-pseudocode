/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111___::Run @ 0x180296CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111___::Run(
        __int64 a1)
{
  WindowEventDispatcher::FlushRemovedPendingActivations(*(RTL_SRWLOCK **)(a1 + 16));
}
