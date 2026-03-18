/*
 * XREFs of Controller_IsHandlePresentInCollection @ 0x1C00325E0
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033C20 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034840 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     Controller_IsHandlePresentInCollectionLocked @ 0x1C0032630 (Controller_IsHandlePresentInCollectionLocked.c)
 */

char __fastcall Controller_IsHandlePresentInCollection(__int64 a1, __int64 a2)
{
  DynamicLock_Acquire(*(_QWORD *)(a1 + 616));
  LOBYTE(a2) = Controller_IsHandlePresentInCollectionLocked(*(_QWORD *)(a1 + 632), a2);
  DynamicLock_Release(*(_QWORD *)(a1 + 616));
  return a2;
}
