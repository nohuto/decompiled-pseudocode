/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800EE674
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800EE1B0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE544 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x18009E210 (NtPowerInformation.c)
 */

__int64 RtlpRecordBootStatusData()
{
  return NtPowerInformation();
}
