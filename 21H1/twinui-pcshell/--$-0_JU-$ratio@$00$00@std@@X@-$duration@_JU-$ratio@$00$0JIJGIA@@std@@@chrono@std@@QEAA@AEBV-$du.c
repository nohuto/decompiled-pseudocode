/*
 * XREFs of ??$?0_JU?$ratio@$00$00@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$00@std@@@12@@Z @ 0x1800B0FA4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800B5990 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800B5990.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = 10000000LL * *a2;
  return a1;
}
