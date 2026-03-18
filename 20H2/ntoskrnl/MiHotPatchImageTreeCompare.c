/*
 * XREFs of MiHotPatchImageTreeCompare @ 0x1408CCE78
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x1405829C4 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x14058312C (PsLoadVsmEnclaveData.c)
 *     MiDeleteImageHotPatchState @ 0x1408CC35C (MiDeleteImageHotPatchState.c)
 *     MiGetHotPatchEntry @ 0x1408CC82C (MiGetHotPatchEntry.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x14090A554 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091D108 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x14091D3A8 (RtlpFindDynamicEHContinuationTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHotPatchImageTreeCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
