/*
 * XREFs of PpDevCfgProcessDevice @ 0x140730134
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     PiDevCfgProcessDevice @ 0x14072E460 (PiDevCfgProcessDevice.c)
 */

__int64 __fastcall PpDevCfgProcessDevice(__int64 a1, void *a2, char a3)
{
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice(a1, a2, a3);
  else
    return 3221225659LL;
}
