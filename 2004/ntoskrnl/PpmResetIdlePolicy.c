/*
 * XREFs of PpmResetIdlePolicy @ 0x1403C18C8
 * Callers:
 *     PpmInstallNewIdleStates @ 0x1403C1340 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x140560210 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x1403966E4 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403C1904 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x1403C19E4 (PpmApplyIdlePolicy.c)
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
