/*
 * XREFs of WINRT_SetThreadpoolTimer @ 0x18008DD26
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180465A98 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_SetThreadpoolTimer(PTP_TIMER pti, PFILETIME pftDueTime, DWORD msPeriod, DWORD msWindowLength)
{
  SetThreadpoolTimer(pti, pftDueTime, msPeriod, msWindowLength);
}
