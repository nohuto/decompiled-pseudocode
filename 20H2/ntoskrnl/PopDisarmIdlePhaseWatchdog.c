/*
 * XREFs of PopDisarmIdlePhaseWatchdog @ 0x1408F252C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405749B0 (PdcPoCurrentPdcPhase.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408F2A28 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     ZwPowerInformation @ 0x1403F8D50 (ZwPowerInformation.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1408F2A78 (PopResetIdlePhaseWatchdogDiagnosticContext.c)
 */

__int64 PopDisarmIdlePhaseWatchdog()
{
  __int64 result; // rax
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( PopPdcIdlePhaseWatchdogContext )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = PopPdcIdlePhaseWatchdogContext;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    return PopResetIdlePhaseWatchdogDiagnosticContext();
  }
  return result;
}
