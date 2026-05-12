/*
 * XREFs of StorPortPauseDeviceVrfy @ 0x1C007E6E0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortPauseDevice @ 0x1C000E310 (StorPortPauseDevice.c)
 */

char __fastcall StorPortPauseDeviceVrfy(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  return StorPortPauseDevice(a1, a2, a3, a4, a5);
}
