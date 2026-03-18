/*
 * XREFs of IoRequestDeviceEject @ 0x14055FE50
 * Callers:
 *     PipProcessStartPhase2 @ 0x140768EA8 (PipProcessStartPhase2.c)
 *     PipProcessRestartPhase2 @ 0x14095B398 (PipProcessRestartPhase2.c)
 * Callees:
 *     IoRequestDeviceEjectEx @ 0x14055FE70 (IoRequestDeviceEjectEx.c)
 */

void __stdcall IoRequestDeviceEject(PDEVICE_OBJECT PhysicalDeviceObject)
{
  IoRequestDeviceEjectEx(PhysicalDeviceObject, 0LL, 0LL, 0LL);
}
