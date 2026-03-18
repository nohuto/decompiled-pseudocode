/*
 * XREFs of HalpHvEnterSleepState @ 0x1404BD41C
 * Callers:
 *     HaliAcpiSleep @ 0x140382C30 (HaliAcpiSleep.c)
 *     HalpShutdown @ 0x1404B8ECC (HalpShutdown.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvEnterSleepState()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A378 )
    return ((__int64 (*)(void))qword_140C4A378)();
  return result;
}
