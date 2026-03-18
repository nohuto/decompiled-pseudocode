/*
 * XREFs of _DxgkEngGetRemoteDeviceCount@0 @ 0x1D43B9
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvGetRemoteDeviceCount@@YGIXZ @ 0xD23C4 (-DrvGetRemoteDeviceCount@@YGIXZ.c)
 */

int __stdcall DxgkEngGetRemoteDeviceCount()
{
  int RemoteDeviceCount; // esi

  UserEnterUserCritSec();
  RemoteDeviceCount = DrvGetRemoteDeviceCount();
  UserLeaveUserCritSec();
  return RemoteDeviceCount;
}
