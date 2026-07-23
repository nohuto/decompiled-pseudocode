/*
 * XREFs of HalpTimerClockStop @ 0x140249460
 * Callers:
 *     HalpTimerClockPowerChange @ 0x1404BF750 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpTimerClockStop()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v5; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
  {
    InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
    result = (*(__int64 (__fastcall **)(__int64))(v5 + 136))(InternalData);
    CurrentPrcb->PendingTickFlags &= ~2u;
  }
  else
  {
    v1 = HalpTimerGetInternalData(HalpClockTimer);
    return (*(__int64 (__fastcall **)(__int64))(v2 + 136))(v1);
  }
  return result;
}
