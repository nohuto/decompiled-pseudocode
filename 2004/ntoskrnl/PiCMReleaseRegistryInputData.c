/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x1405D77EC
 * Callers:
 *     PiCMOpenClassKey @ 0x1405D01E4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1405D3300 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1405D719C (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408ADA54 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402024E0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
