/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x1404C2C58
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x1407CEB50 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetSleepStateProperty()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A190 )
    return ((__int64 (*)(void))qword_140C4A190)();
  return result;
}
