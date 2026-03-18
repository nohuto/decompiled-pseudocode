/*
 * XREFs of PnpMarkHalDeviceNode @ 0x140A6DB88
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 */

__int64 PnpMarkHalDeviceNode()
{
  __int64 result; // rax
  __int64 i; // rcx

  result = (__int64)IopRootDeviceNode;
  for ( i = *((_QWORD *)IopRootDeviceNode + 1); i; i = *(_QWORD *)i )
  {
    result = (unsigned int)(*(_DWORD *)(i + 300) - 775);
    if ( (unsigned int)result <= 1 && (*(_DWORD *)(i + 396) & 0x1000) == 0 )
    {
      IopInitHalDeviceNode = i;
      return PipSetDevNodeFlags(i, 4);
    }
  }
  return result;
}
