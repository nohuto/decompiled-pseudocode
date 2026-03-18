/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x14050EE94
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4C4A0 )
    return ((__int64 (*)(void))qword_140C4C4A0)();
  return result;
}
