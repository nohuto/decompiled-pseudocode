/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x1404BDB84
 * Callers:
 *     HalpAcpiPostSleep @ 0x1409922CC (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A220 )
    return ((__int64 (*)(void))qword_140C4A220)();
  return result;
}
