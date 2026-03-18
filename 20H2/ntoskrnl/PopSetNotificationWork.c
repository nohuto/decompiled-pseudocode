/*
 * XREFs of PopSetNotificationWork @ 0x140362C50
 * Callers:
 *     PopUserPresentSet @ 0x1403A5644 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x1403A8724 (PopInitilizeAcDcSettings.c)
 *     PopSetPowerSettingValue @ 0x1406FA718 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x14071C434 (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x14071D950 (PoRegisterPowerSettingCallback.c)
 *     PopExecutePowerAction @ 0x140771228 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x14078AD70 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x14079325C (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x1403633A0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140363800 (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4LL);
    return PopCheckForWork();
  }
  return result;
}
