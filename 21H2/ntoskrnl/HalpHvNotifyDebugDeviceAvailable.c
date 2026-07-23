/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x1404C2CB4
 * Callers:
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A1E0 )
    return ((__int64 (*)(void))qword_140C4A1E0)();
  return result;
}
