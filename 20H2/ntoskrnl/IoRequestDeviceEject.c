/*
 * XREFs of IoRequestDeviceEject @ 0x14050AE60
 * Callers:
 *     PipProcessStartPhase2 @ 0x1407436E8 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x1408B7E50 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14050AE80 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
