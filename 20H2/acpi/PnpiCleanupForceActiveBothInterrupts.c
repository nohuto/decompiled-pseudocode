/*
 * XREFs of PnpiCleanupForceActiveBothInterrupts @ 0x1C002CF40
 * Callers:
 *     ACPIInitResetDeviceExtension @ 0x1C002CD00 (ACPIInitResetDeviceExtension.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00562A8 (ACPIInitDeleteDeviceExtension.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B3EBC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpiCleanupForceActiveBothInterrupts(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 656);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x44706341u);
    *(_QWORD *)(a1 + 656) = 0LL;
  }
  *(_DWORD *)(a1 + 664) = -1;
}
