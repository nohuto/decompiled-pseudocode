/*
 * XREFs of MiHotPatchImageTreeCompare @ 0x1408CA798
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x140584604 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x140584D6C (PsLoadVsmEnclaveData.c)
 *     MiDeleteImageHotPatchState @ 0x1408C9C7C (MiDeleteImageHotPatchState.c)
 *     MiGetHotPatchEntry @ 0x1408CA14C (MiGetHotPatchEntry.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907E64 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x14090D330 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091AA48 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x14091ACE8 (RtlpFindDynamicEHContinuationTarget.c)
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
