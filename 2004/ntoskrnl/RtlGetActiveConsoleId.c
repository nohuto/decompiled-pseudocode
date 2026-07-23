/*
 * XREFs of RtlGetActiveConsoleId @ 0x1402DCC00
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1402DC750 (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerButtonWorkCallback @ 0x140573410 (PopPowerButtonWorkCallback.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     PoBlockConsoleSwitch @ 0x140712794 (PoBlockConsoleSwitch.c)
 *     PiCMQueryRemove @ 0x14071CE68 (PiCMQueryRemove.c)
 *     PopNotifyConsoleUserPresent @ 0x140760A60 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x14077ABB8 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
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
  return *(_DWORD *)(v2[140] + 4LL);
}
