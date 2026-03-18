/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x1404C10A4
 * Callers:
 *     HalpAcpiPostSleep @ 0x14099833C (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A280 )
    return ((__int64 (*)(void))qword_140C4A280)();
  return result;
}
