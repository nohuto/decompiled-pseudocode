/*
 * XREFs of PopSetNotificationWork @ 0x1402DF45C
 * Callers:
 *     PopUserPresentSet @ 0x1403A3284 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x1403A61A4 (PopInitilizeAcDcSettings.c)
 *     PopGetSettingNotificationName @ 0x14064BA50 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1406A7D78 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x140711A90 (PoRegisterPowerSettingCallback.c)
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x14077C770 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x14078550C (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x1402DEAA0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1402DF330 (PopGetPolicyWorker.c)
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
