/*
 * XREFs of PpDevCfgProcessDevice @ 0x14073F3D4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 */

__int64 __fastcall PpDevCfgProcessDevice(__int64 a1, void *a2, char a3)
{
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice(a1, a2, a3);
  else
    return 3221225659LL;
}
