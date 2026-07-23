/*
 * XREFs of HvlWnfUpdateStartupState @ 0x1403D0460
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 */

NTSTATUS HvlWnfUpdateStartupState()
{
  NTSTATUS result; // eax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
    return ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0, 0LL, 0LL, 0, 0);
  return result;
}
