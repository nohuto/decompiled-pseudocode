/*
 * XREFs of HalpHvVpStartEnabled @ 0x1403A1980
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140999F74 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x1403A2240 (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C4A230 )
    return qword_140C4A230();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
