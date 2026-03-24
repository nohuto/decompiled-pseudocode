/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x1404C2A74
 * Callers:
 *     HalpAcpiPostSleep @ 0x140995B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A1A0 )
    return ((__int64 (*)(void))qword_140C4A1A0)();
  return result;
}
