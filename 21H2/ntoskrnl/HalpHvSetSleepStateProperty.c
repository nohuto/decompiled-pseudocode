/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x1404C2E98
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x1407CECC0 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetSleepStateProperty()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A1D0 )
    return ((__int64 (*)(void))qword_140C4A1D0)();
  return result;
}
