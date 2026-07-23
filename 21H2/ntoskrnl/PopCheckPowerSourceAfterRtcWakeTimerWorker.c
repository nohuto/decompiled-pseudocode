/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B3440
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1402503C4 (PopOkayToQueueNextWorkItem.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     NtInitiatePowerAction @ 0x140775170 (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x140779D24 (PopQueryPowerSettingUlong.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E604 (PopCurrentPowerStatePrecise.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise(&v1, 0LL);
    if ( !(_BYTE)v1 )
    {
      v2 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v3, &v2);
      if ( !v2 )
        NtInitiatePowerAction(SystemAction, LightestSystemState, 0x80000000, 1u);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140C211E8);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
