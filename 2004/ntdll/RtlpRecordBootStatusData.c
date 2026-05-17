/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800EE2D4
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800EDE10 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE1A4 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x18009D9E0 (NtPowerInformation.c)
 */

__int64 RtlpRecordBootStatusData()
{
  return NtPowerInformation();
}
