/*
 * XREFs of NdisSetPeriodicTimer @ 0x1C00BD0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NdisMSetTimer@@YAXPEAU_NDIS_MINIPORT_TIMER@@I@Z @ 0x1C0017600 (-NdisMSetTimer@@YAXPEAU_NDIS_MINIPORT_TIMER@@I@Z.c)
 */

void __stdcall NdisSetPeriodicTimer(PNDIS_TIMER NdisTimer, UINT MillisecondsPeriod)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = NdisTimer->Dpc.DeferredRoutine;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((struct _NDIS_MINIPORT_TIMER *)NdisTimer, MillisecondsPeriod);
  else
    KeSetTimerEx(
      &NdisTimer->Timer,
      (LARGE_INTEGER)(-10000LL * (int)MillisecondsPeriod),
      MillisecondsPeriod,
      &NdisTimer->Dpc);
}
