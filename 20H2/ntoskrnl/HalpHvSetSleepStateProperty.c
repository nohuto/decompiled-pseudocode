/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x1404C1288
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x1407CA890 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpHvSetSleepStateProperty()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4A270 )
    return ((__int64 (*)(void))qword_140C4A270)();
  return result;
}
