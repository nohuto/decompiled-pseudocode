/*
 * XREFs of HalpHvEnterSleepState @ 0x1404C101C
 * Callers:
 *     HaliAcpiSleep @ 0x140385150 (HaliAcpiSleep.c)
 *     HalpShutdown @ 0x1404BCACC (HalpShutdown.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A278 )
    return ((__int64 (*)(void))qword_140C4A278)();
  return result;
}
