/*
 * XREFs of ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x1804423F8
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$2 @ 0x1800AA480 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800AA480.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800B5990 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800B5990.c)
 * Callees:
 *     WINRT_SetThreadpoolTimer @ 0x18008D8C6 (WINRT_SetThreadpoolTimer.c)
 *     CreateThreadpoolTimer_0 @ 0x18008D8DE (CreateThreadpoolTimer_0.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1801C8434 (-throw_last_error@winrt@@YAXXZ.c)
 *     ?close@?$handle_type@Utimer_traits@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x18044252C (-close@-$handle_type@Utimer_traits@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$.c)
 */

void __fastcall `winrt::resume_after'::`2'::awaitable::await_suspend(struct _TP_TIMER **a1, void *a2)
{
  winrt *v3; // rcx
  struct _TP_TIMER *ThreadpoolTimer_0; // rdi
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  ThreadpoolTimer_0 = CreateThreadpoolTimer_0(
                        (PTP_TIMER_CALLBACK)`winrt::resume_after'::`2'::awaitable::callback,
                        a2,
                        0LL);
  if ( !ThreadpoolTimer_0 )
    winrt::throw_last_error(v3);
  _close___handle_type_Utimer_traits_awaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(a1);
  *a1 = ThreadpoolTimer_0;
  pftDueTime = (struct _FILETIME)-(__int64)a1[1];
  WINRT_SetThreadpoolTimer(ThreadpoolTimer_0, &pftDueTime, 0, 0);
}
