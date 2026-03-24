/*
 * XREFs of IoRequestDeviceEject @ 0x14050C990
 * Callers:
 *     PipProcessStartPhase2 @ 0x14073DCFC (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x1408B5330 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14050C9B0 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
