/*
 * XREFs of PpmResetIdlePolicy @ 0x1403C4038
 * Callers:
 *     PpmInstallNewIdleStates @ 0x1403C3AB0 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x140563BF0 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x140398BA4 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403C4074 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x1403C4154 (PpmApplyIdlePolicy.c)
 */

void __fastcall PpmResetIdlePolicy(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues((__int64)a1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ((void (__fastcall *)(_QWORD, _QWORD))PpmResetProcessorIdleAccounting)(
      a1[1],
      (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
}
