/*
 * XREFs of PopDisarmIdlePhaseWatchdog @ 0x1407F287C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D6AC0 (PdcPoCurrentPdcPhase.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407F2028 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1407F28E0 (PopResetIdlePhaseWatchdogDiagnosticContext.c)
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
