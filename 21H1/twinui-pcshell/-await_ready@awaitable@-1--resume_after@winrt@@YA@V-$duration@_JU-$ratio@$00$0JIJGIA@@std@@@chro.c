/*
 * XREFs of ?await_ready@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEBA_NXZ @ 0x180442188
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$2 @ 0x1800AA480 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800AA480.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800B5990 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800B5990.c)
 * Callees:
 *     <none>
 */

bool __fastcall `winrt::resume_after'::`2'::awaitable::await_ready(__int64 a1)
{
  return *(_QWORD *)(a1 + 8) <= 0LL;
}
