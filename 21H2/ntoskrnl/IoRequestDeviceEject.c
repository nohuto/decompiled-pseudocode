/*
 * XREFs of IoRequestDeviceEject @ 0x14050CBD0
 * Callers:
 *     PipProcessStartPhase2 @ 0x14073DEBC (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x1408B5490 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14050CBF0 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
