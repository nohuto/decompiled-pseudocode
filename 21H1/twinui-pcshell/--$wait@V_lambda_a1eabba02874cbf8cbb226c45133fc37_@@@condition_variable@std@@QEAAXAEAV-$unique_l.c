/*
 * XREFs of ??$wait@V_lambda_a1eabba02874cbf8cbb226c45133fc37_@@@condition_variable@std@@QEAAXAEAV?$unique_lock@Vmutex@std@@@1@V_lambda_a1eabba02874cbf8cbb226c45133fc37_@@@Z @ 0x180302828
 * Callers:
 *     ?_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x180305BB4 (-_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenReg.c)
 * Callees:
 *     <none>
 */

void __fastcall std::condition_variable::wait<_lambda_a1eabba02874cbf8cbb226c45133fc37_>(
        _Cnd_t a1,
        _Mtx_t *a2,
        __int64 a3)
{
  int v6; // eax

  while ( !*(_BYTE *)(a3 + 176) )
  {
    v6 = _Cnd_wait(a1, *a2);
    if ( v6 )
    {
      std::_Throw_C_error(v6);
      __debugbreak();
      JUMPOUT(0x180302888LL);
    }
  }
}
