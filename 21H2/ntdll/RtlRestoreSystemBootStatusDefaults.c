/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800EE2E0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18009E210 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}
