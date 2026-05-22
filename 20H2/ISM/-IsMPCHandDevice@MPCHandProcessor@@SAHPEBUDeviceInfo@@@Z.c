/*
 * XREFs of ?IsMPCHandDevice@MPCHandProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18007DEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MPCHandProcessor::IsMPCHandDevice(const struct DeviceInfo *a1)
{
  return *((_DWORD *)a1 + 1) == 512;
}
