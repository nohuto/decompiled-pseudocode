/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x1404BD4A4
 * Callers:
 *     HalpAcpiPostSleep @ 0x14099138C (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A380 )
    return ((__int64 (*)(void))qword_140C4A380)();
  return result;
}
