/*
 * XREFs of HalpTimerStopProfileInterrupt @ 0x1404BC50C
 * Callers:
 *     HalpTimerSelectRoles @ 0x1403A673C (HalpTimerSelectRoles.c)
 *     DefaultDisableMonitoring @ 0x1404B9100 (DefaultDisableMonitoring.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void HalpTimerStopProfileInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  if ( HalpProfileTimer && ((*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !KeGetPcr()->Prcb.Number) )
  {
    InternalData = HalpTimerGetInternalData(HalpProfileTimer);
    (*(void (__fastcall **)(__int64))(v1 + 136))(InternalData);
  }
  HalpProfilingActive = 0;
}
