/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800EE7E4
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800EE320 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE6B4 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x18009DC80 (NtPowerInformation.c)
 */

__int64 RtlpRecordBootStatusData()
{
  return NtPowerInformation();
}
