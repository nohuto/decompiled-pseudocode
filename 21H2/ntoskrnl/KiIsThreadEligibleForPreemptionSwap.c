/*
 * XREFs of KiIsThreadEligibleForPreemptionSwap @ 0x140574648
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140308640 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x140573DBC (KiHeteroAttemptPreemptionSwap.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadEligibleForPreemptionSwap(_DWORD *a1)
{
  return (KiVelocityFlags & 0x4000) != 0 && !a1[1] && a1[2] == 1 && (unsigned int)(a1[3] - 1) <= 1;
}
