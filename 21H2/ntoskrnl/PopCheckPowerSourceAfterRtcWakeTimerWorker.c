/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B2510
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1402D1FF4 (PopOkayToQueueNextWorkItem.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     NtInitiatePowerAction @ 0x140774FB0 (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x140779B64 (PopQueryPowerSettingUlong.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E444 (PopCurrentPowerStatePrecise.c)
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
        NtInitiatePowerAction((unsigned int)dword_140C23B90, (unsigned int)dword_140C23B94, 0x80000000, 1);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140C211A8);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
