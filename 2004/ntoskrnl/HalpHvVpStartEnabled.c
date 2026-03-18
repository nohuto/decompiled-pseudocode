/*
 * XREFs of HalpHvVpStartEnabled @ 0x14039EBF0
 * Callers:
 *     HalpInterruptStartProcessor @ 0x1409969B4 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x14039F4B0 (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C4A2B0 )
    return qword_140C4A2B0();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
