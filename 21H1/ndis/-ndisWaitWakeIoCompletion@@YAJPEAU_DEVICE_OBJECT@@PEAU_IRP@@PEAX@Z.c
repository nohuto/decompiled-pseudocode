/*
 * XREFs of ?ndisWaitWakeIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0016370
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

__int64 __fastcall ndisWaitWakeIoCompletion(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  KIRQL v4; // dl
  bool WaitWakeCancelInProgress; // cf
  unsigned int v6; // ebx
  KIRQL NewIrql; // [rsp+40h] [rbp+18h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a3, &NewIrql);
  v4 = NewIrql;
  WaitWakeCancelInProgress = a3->WaitWakeCancelInProgress;
  a3->WaitWakeIoCompletionRoutineRan = 1;
  a3->MiniportThread = 0LL;
  v6 = WaitWakeCancelInProgress ? 0xC0000016 : 0;
  KeReleaseSpinLock(&a3->Lock, v4);
  return v6;
}
