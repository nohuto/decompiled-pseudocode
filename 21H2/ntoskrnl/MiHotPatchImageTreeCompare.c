/*
 * XREFs of MiHotPatchImageTreeCompare @ 0x1408CA638
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x1405843D4 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x140584B3C (PsLoadVsmEnclaveData.c)
 *     MiDeleteImageHotPatchState @ 0x1408C9B1C (MiDeleteImageHotPatchState.c)
 *     MiGetHotPatchEntry @ 0x1408C9FEC (MiGetHotPatchEntry.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907D04 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x14090D1D0 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091A8E8 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x14091AB88 (RtlpFindDynamicEHContinuationTarget.c)
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
