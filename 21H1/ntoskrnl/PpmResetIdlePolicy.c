/*
 * XREFs of PpmResetIdlePolicy @ 0x1403C0A08
 * Callers:
 *     PpmInstallNewIdleStates @ 0x1403C0480 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x14055FBC0 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     PpmScaleIdleStateValues @ 0x140395B14 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403C0A44 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x1403C0B24 (PpmApplyIdlePolicy.c)
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
