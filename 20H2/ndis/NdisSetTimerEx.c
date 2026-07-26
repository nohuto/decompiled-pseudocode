/*
 * XREFs of NdisSetTimerEx @ 0x1C00BD5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NdisMSetTimer@@YAXPEAU_NDIS_MINIPORT_TIMER@@I@Z @ 0x1C00175C0 (-NdisMSetTimer@@YAXPEAU_NDIS_MINIPORT_TIMER@@I@Z.c)
 */

void __stdcall NdisSetTimerEx(PNDIS_TIMER NdisTimer, UINT MillisecondsToDelay, PVOID FunctionContext)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = NdisTimer->Dpc.DeferredRoutine;
  NdisTimer->Dpc.DeferredContext = FunctionContext;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((struct _NDIS_MINIPORT_TIMER *)NdisTimer, MillisecondsToDelay);
  else
    KeSetTimer(&NdisTimer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &NdisTimer->Dpc);
}
