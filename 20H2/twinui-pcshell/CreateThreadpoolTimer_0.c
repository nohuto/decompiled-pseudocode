/*
 * XREFs of CreateThreadpoolTimer_0 @ 0x18008DD3E
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180465A98 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PTP_TIMER __stdcall CreateThreadpoolTimer_0(PTP_TIMER_CALLBACK pfnti, PVOID pv, PTP_CALLBACK_ENVIRON pcbe)
{
  return CreateThreadpoolTimer(pfnti, pv, pcbe);
}
