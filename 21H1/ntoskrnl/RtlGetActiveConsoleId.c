/*
 * XREFs of RtlGetActiveConsoleId @ 0x14035DBC0
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x14035D708 (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerButtonWorkCallback @ 0x140572DC0 (PopPowerButtonWorkCallback.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     PoBlockConsoleSwitch @ 0x1406FDD90 (PoBlockConsoleSwitch.c)
 *     PiCMQueryRemove @ 0x14071AEE8 (PiCMQueryRemove.c)
 *     PopNotifyConsoleUserPresent @ 0x14075E690 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x1407787A8 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  __int64 ThreadServerSilo; // rax
  _QWORD *v2; // rax

  if ( !PsIsCurrentThreadInServerSilo() )
    return MEMORY[0xFFFFF780000002D8];
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  if ( ThreadServerSilo )
    v2 = *(_QWORD **)(ThreadServerSilo + 1272);
  else
    v2 = &PspHostSiloGlobals;
  return *(_DWORD *)(v2[139] + 4LL);
}
