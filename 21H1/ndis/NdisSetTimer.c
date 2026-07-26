/*
 * XREFs of NdisSetTimer @ 0x1C0019EE0
 * Callers:
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019EB4 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010B53C (-ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NdisMSetTimer@@YAXPEAU_NDIS_MINIPORT_TIMER@@I@Z @ 0x1C0017600 (-NdisMSetTimer@@YAXPEAU_NDIS_MINIPORT_TIMER@@I@Z.c)
 */

void __stdcall NdisSetTimer(PNDIS_TIMER Timer, UINT MillisecondsToDelay)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = Timer->Dpc.DeferredRoutine;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((struct _NDIS_MINIPORT_TIMER *)Timer, MillisecondsToDelay);
  else
    KeSetTimer(&Timer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &Timer->Dpc);
}
