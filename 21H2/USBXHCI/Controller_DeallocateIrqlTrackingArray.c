/*
 * XREFs of Controller_DeallocateIrqlTrackingArray @ 0x1C00313E8
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1C0034C30 (Controller_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall Controller_DeallocateIrqlTrackingArray(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 808);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49434858u);
    *(_QWORD *)(a1 + 808) = 0LL;
    *(_DWORD *)(a1 + 816) = 0;
  }
}
