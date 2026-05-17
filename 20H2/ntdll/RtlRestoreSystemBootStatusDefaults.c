/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800EE450
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18009DC80 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}
