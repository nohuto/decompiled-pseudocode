/*
 * XREFs of HalpTimerStopProfileInterrupt @ 0x1404BCBEC
 * Callers:
 *     HalpTimerSelectRoles @ 0x1403AD7FC (HalpTimerSelectRoles.c)
 *     DefaultDisableMonitoring @ 0x1404B97E0 (DefaultDisableMonitoring.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
