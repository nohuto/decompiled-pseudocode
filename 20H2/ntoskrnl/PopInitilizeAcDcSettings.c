/*
 * XREFs of PopInitilizeAcDcSettings @ 0x1403A8724
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x140362C50 (PopSetNotificationWork.c)
 *     PopSetPowerSettingValue @ 0x1406FA718 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1406FABB8 (PopFindPowerSettingConfiguration.c)
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
