/*
 * XREFs of ?IsControllerDevice@ControllerProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18003AD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::IsControllerDevice(const struct DeviceInfo *a1)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)a1 + 1);
  if ( (v1 & 2) != 0 )
    return 0LL;
  else
    return (v1 >> 6) & 1;
}
