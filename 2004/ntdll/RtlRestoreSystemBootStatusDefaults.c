/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800EDF40
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18009D9E0 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}
