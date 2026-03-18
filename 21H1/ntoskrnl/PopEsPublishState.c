/*
 * XREFs of PopEsPublishState @ 0x1407BDEF0
 * Callers:
 *     PopEsUpdateState @ 0x140397408 (PopEsUpdateState.c)
 *     PopEsWorker @ 0x14076C240 (PopEsWorker.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x14070E5A8 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int v0; // eax
  int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]

  v3 = -1;
  v0 = 1;
  if ( PopEsState == 1 )
    v0 = 3;
  v2 = v0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_STATE, (__int64)&v2);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4LL, &PopEsState);
}
