/*
 * XREFs of HalpHvEnterSleepState @ 0x1404C29EC
 * Callers:
 *     HaliAcpiSleep @ 0x140385F30 (HaliAcpiSleep.c)
 *     HalpShutdown @ 0x1404BE490 (HalpShutdown.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A198 )
    return ((__int64 (*)(void))qword_140C4A198)();
  return result;
}
