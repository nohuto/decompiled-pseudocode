/*
 * XREFs of HalpHvVpStartEnabled @ 0x1403B32E8
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403B8E60 (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140A53F54 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x1403B3A6C (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char HalpHvVpStartEnabled()
{
  if ( qword_140C4C530 )
    return qword_140C4C530();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
