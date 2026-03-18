/*
 * XREFs of HvlWnfUpdateStartupState @ 0x1403CF980
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 */

__int64 HvlWnfUpdateStartupState()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
    return ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0LL, 0LL, 0LL, 0, 0);
  return result;
}
