/*
 * XREFs of RtlGetActiveConsoleId @ 0x1403637A0
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1403636EC (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerButtonWorkCallback @ 0x140576E40 (PopPowerButtonWorkCallback.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     PoBlockConsoleSwitch @ 0x1407211BC (PoBlockConsoleSwitch.c)
 *     PiCMQueryRemove @ 0x14072AD04 (PiCMQueryRemove.c)
 *     PopNotifyConsoleUserPresent @ 0x14076F070 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x1407891B8 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140297450 (PsGetThreadServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F1894 (KeIsExecutingInArbitraryThreadContext.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 ThreadServerSilo; // rax
  _QWORD *v4; // rax

  if ( !PsIsCurrentThreadInServerSilo() )
    return MEMORY[0xFFFFF780000002D8];
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(v1, v0)
    || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
  {
    v4 = &PspHostSiloGlobals;
  }
  else
  {
    v4 = *(_QWORD **)(ThreadServerSilo + 1272);
  }
  return *(_DWORD *)(v4[141] + 4LL);
}
