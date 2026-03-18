/*
 * XREFs of Controller_DeallocateIrqlTrackingArray @ 0x1C0030940
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1C00341E0 (Controller_WdfEvtCleanupCallback.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006AFE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     <none>
 */

void __fastcall Controller_DeallocateIrqlTrackingArray(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 792);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49434858u);
    *(_QWORD *)(a1 + 792) = 0LL;
    *(_DWORD *)(a1 + 800) = 0;
  }
}
