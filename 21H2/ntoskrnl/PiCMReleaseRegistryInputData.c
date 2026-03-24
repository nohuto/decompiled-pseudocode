/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x140633E60
 * Callers:
 *     PiCMOpenDeviceKey @ 0x14062FD18 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406338E0 (PiCMOpenObjectKey.c)
 *     PiCMOpenClassKey @ 0x1406BEA68 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B0B54 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402647E0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
