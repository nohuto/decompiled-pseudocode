/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x1406A5E20
 * Callers:
 *     PiCMOpenClassKey @ 0x14069F5F4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A19FC (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406A5898 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408AC734 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402E5DD0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
