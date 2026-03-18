/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140A6BCF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x140368A78 (PopOkayToQueueNextWorkItem.c)
 *     PopCurrentPowerStatePrecise @ 0x1407ED930 (PopCurrentPowerStatePrecise.c)
 *     NtInitiatePowerAction @ 0x1407FEA60 (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x140808344 (PopQueryPowerSettingUlong.c)
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
        NtInitiatePowerAction(dword_140C22F78, dword_140C22F7C, 0x80000000, 1);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140C20568);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
