/*
 * XREFs of HalpHvVpStartEnabled @ 0x1403A10C0
 * Callers:
 *     HalpInterruptStartProcessor @ 0x14099C9F4 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x1403A1980 (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C4A310 )
    return qword_140C4A310();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
