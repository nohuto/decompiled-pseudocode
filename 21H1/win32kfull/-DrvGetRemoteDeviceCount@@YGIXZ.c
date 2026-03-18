/*
 * XREFs of ?DrvGetRemoteDeviceCount@@YGIXZ @ 0xD23C4
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _DxgkEngGetRemoteDeviceCount@0 @ 0x1D43B9 (_DxgkEngGetRemoteDeviceCount@0.c)
 * Callees:
 *     <none>
 */

int __stdcall DrvGetRemoteDeviceCount()
{
  int v0; // edx
  struct tagGRAPHICS_DEVICE *i; // ecx

  v0 = 0;
  for ( i = gpGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_DWORD *)i + 32) )
  {
    if ( (*((_DWORD *)i + 36) & 0x4000000) != 0 )
      ++v0;
  }
  return v0;
}
