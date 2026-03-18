/*
 * XREFs of Interrupter_IoWorkItemRequeueDpc @ 0x1C003C2D0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled @ 0x1C0019074 (Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled.c)
 *     Interrupter_AcquireEventRingLock @ 0x1C00190C4 (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1C001911C (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C003C010 (Interrupter_DeferToDpcOrWorkItem.c)
 */

void __fastcall Interrupter_IoWorkItemRequeueDpc(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  KIRQL v4; // al
  char v5; // al

  ++*((_DWORD *)Context + 13);
  if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
  {
    v5 = Interrupter_AcquireEventRingLock((__int64)Context);
    *((_DWORD *)Context + 24) &= ~8u;
    Interrupter_ReleaseEventRingLock((__int64)Context, v5);
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 26);
    *((_DWORD *)Context + 24) &= ~8u;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 26, v4);
  }
  ++*((_DWORD *)Context + 16);
  Interrupter_DeferToDpcOrWorkItem(*(_QWORD *)Context);
  KeSetEvent((PRKEVENT)(Context + 176), 0, 0);
}
