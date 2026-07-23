/*
 * XREFs of HalpHvVpStartEnabled @ 0x1403A1AD0
 * Callers:
 *     HalpInterruptStartProcessor @ 0x14099AF74 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x1403A2390 (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C4A270 )
    return qword_140C4A270();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
