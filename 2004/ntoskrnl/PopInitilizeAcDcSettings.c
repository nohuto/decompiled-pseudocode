/*
 * XREFs of PopInitilizeAcDcSettings @ 0x1403A61A4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x1402DF45C (PopSetNotificationWork.c)
 *     PopSetPowerSettingValue @ 0x1406A7D78 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1406A8218 (PopFindPowerSettingConfiguration.c)
 */

void PopInitilizeAcDcSettings()
{
  char v0; // bl
  _DWORD *PowerSettingConfiguration; // rax
  int Src; // [rsp+40h] [rbp+8h] BYREF

  Src = 0;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, &Src);
  Src = 1;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, &Src);
  v0 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = (_DWORD *)PopFindPowerSettingConfiguration(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration[14] || PowerSettingConfiguration[15] )
  {
    PowerSettingConfiguration[13] |= 1u;
    v0 = 1;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v0 )
      PopSetNotificationWork(0x80u);
    PopSetNotificationWork(0x20u);
  }
}
