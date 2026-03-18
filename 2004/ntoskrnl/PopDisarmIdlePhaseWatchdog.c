/*
 * XREFs of PopDisarmIdlePhaseWatchdog @ 0x1408EC91C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140570F80 (PdcPoCurrentPdcPhase.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408ECE18 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     ZwPowerInformation @ 0x1403F41A0 (ZwPowerInformation.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1408ECE68 (PopResetIdlePhaseWatchdogDiagnosticContext.c)
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
