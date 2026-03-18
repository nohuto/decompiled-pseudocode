/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x1404BD688
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x1407B8E90 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetSleepStateProperty()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A370 )
    return ((__int64 (*)(void))qword_140C4A370)();
  return result;
}
