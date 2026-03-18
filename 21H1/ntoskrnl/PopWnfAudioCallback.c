/*
 * XREFs of PopWnfAudioCallback @ 0x14075D8A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopGetDozeTimerSource @ 0x140369ED4 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1406E54C0 (ExQueryWnfStateData.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14075D984 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsScenarioStateChange @ 0x14075D9D0 (PopStatsScenarioStateChange.c)
 *     PopAudioAccountingCallback @ 0x14075DB48 (PopAudioAccountingCallback.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F102C (PopUpdateSmartUserPresencePredictions.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // edi
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 8;
  v2 = ExQueryWnfStateData(a1, &v9, v10, &v8);
  if ( v2 >= 0 )
  {
    if ( v8 < 8 )
    {
      return 0;
    }
    else
    {
      PopAcquirePolicyLock(v1);
      if ( (v10[0] & 2) != 0 )
      {
        byte_140C23F0D = 1;
        qword_140C4FE98 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_140C23F0D = 0;
        PopAudioAccountingCallback(0LL);
      }
      v3 = byte_140C23F0D;
      PopAcquirePowerRequestPushLock(1);
      LOBYTE(v4) = v3;
      BYTE2(PopExecutionRequiredContext) = v3;
      PopStatsScenarioStateChange(0LL, v4);
      PopHandleExecutionRequiredEnablementUpdate();
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      PopReleasePolicyLock(v6, v5);
    }
  }
  return (unsigned int)v2;
}
