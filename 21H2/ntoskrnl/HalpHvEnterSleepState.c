/*
 * XREFs of HalpHvEnterSleepState @ 0x1404C2C2C
 * Callers:
 *     HaliAcpiSleep @ 0x140386080 (HaliAcpiSleep.c)
 *     HalpShutdown @ 0x1404BE6D0 (HalpShutdown.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A1D8 )
    return ((__int64 (*)(void))qword_140C4A1D8)();
  return result;
}
