/*
 * XREFs of PopIsInputSuppressionEngaged @ 0x1408F1538
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsInputSuppressionEngaged(int a1)
{
  char v1; // dl

  v1 = 0;
  if ( (unsigned int)(a1 - 31) <= 8
    && PopEnableInputSuppression
    && !PopErrataReportingIncorrectLidState
    && !PopLidOpened
    && dword_140C23D4C == 1
    && !PopConsoleExternalDisplayConnected )
  {
    return PopConsoleDisplayState == 0;
  }
  return v1;
}
