/*
 * XREFs of PopHandleExecutionRequiredEnablementUpdate @ 0x14075D984
 * Callers:
 *     PopWnfAudioCallback @ 0x14075D8A0 (PopWnfAudioCallback.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407BD8F0 (PopExecutionRequiredSettingCallback.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408DCF90 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408DD23C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408ECB14 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407BE388 (PopEnableExecutionRequiredPowerRequests.c)
 */

void __fastcall PopHandleExecutionRequiredEnablementUpdate(unsigned __int64 a1)
{
  char v1; // r8

  v1 = 0;
  if ( PopExecutionRequiredTimeout )
  {
    if ( !BYTE3(PopExecutionRequiredContext)
      || PopPowerRequestActiveAudioEnablesExecutionRequired && BYTE2(PopExecutionRequiredContext)
      || BYTE1(PopExecutionRequiredContext) )
    {
      v1 = 1;
    }
    else
    {
      a1 = 10000000LL * (unsigned int)PopExecutionRequiredTimeout;
      v1 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)&PopExecutionRequiredContext + 1) < a1;
    }
  }
  if ( (_BYTE)PopExecutionRequiredContext != v1 )
  {
    LOBYTE(a1) = v1;
    LOBYTE(PopExecutionRequiredContext) = v1;
    PopEnableExecutionRequiredPowerRequests(a1);
  }
}
