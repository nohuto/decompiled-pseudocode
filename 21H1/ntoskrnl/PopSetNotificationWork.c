/*
 * XREFs of PopSetNotificationWork @ 0x14035ED80
 * Callers:
 *     PopUserPresentSet @ 0x1403A2AF4 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x1403A9E74 (PopInitilizeAcDcSettings.c)
 *     PopGetSettingNotificationName @ 0x14070E014 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14070F018 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x140711220 (PoRegisterPowerSettingCallback.c)
 *     PopExecutePowerAction @ 0x140761338 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14076AC6C (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x14077A360 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x14077CB0C (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x14035CBB4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14035D440 (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4);
    return PopCheckForWork();
  }
  return result;
}
