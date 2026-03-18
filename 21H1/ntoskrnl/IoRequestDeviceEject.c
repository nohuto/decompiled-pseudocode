/*
 * XREFs of IoRequestDeviceEject @ 0x140506EE0
 * Callers:
 *     PipProcessStartPhase2 @ 0x14072341C (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x1408B0F10 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x140506F00 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
