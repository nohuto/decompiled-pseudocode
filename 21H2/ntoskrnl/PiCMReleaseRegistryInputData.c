/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x140628EEC
 * Callers:
 *     PiCMOpenClassKey @ 0x140622BDC (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x140624D98 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140628AA8 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B0CB4 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
