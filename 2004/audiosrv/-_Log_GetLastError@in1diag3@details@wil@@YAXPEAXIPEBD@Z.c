/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DE414
 * Callers:
 *     wil::details::lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___::_lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___ @ 0x18006ECDC (wil--details--lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___--_lambda_call__lambda_53e0.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180137CA0 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x1800B5E40 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(this, a2, a3, a4, v4, retaddr, 2);
}
