/*
 * XREFs of PopDisarmIdlePhaseWatchdog @ 0x1408EB69C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140570930 (PdcPoCurrentPdcPhase.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408EBB98 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     ZwPowerInformation @ 0x1403F2F10 (ZwPowerInformation.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1408EBBE8 (PopResetIdlePhaseWatchdogDiagnosticContext.c)
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
