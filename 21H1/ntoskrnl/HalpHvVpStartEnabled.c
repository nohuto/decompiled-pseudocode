/*
 * XREFs of HalpHvVpStartEnabled @ 0x14039E460
 * Callers:
 *     HalpInterruptStartProcessor @ 0x1409955E4 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x14039ED20 (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C4A410 )
    return qword_140C4A410();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
