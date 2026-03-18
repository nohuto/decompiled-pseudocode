/*
 * XREFs of IoRequestDeviceEject @ 0x140507530
 * Callers:
 *     PipProcessStartPhase2 @ 0x140734258 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x1408B2230 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x140507550 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
