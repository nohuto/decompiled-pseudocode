/*
 * XREFs of IopConfigureDiskIoAttribution @ 0x1403CFEB4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

__int64 IopConfigureDiskIoAttribution()
{
  __int64 result; // rax

  result = (unsigned int)IopDiskIoAttributionBaseIoSize;
  if ( (unsigned int)IopDiskIoAttributionBaseIoSize >= 0x400000 )
  {
    result = 0x400000LL;
    IopDiskIoAttributionBaseIoSize = 0x400000;
  }
  if ( (unsigned int)result <= 0x1000 )
    IopDiskIoAttributionBaseIoSize = 4096;
  return result;
}
