/*
 * XREFs of MiHotPatchImageTreeCompare @ 0x1408C7038
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x14057EF94 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x14057F6FC (PsLoadVsmEnclaveData.c)
 *     MiDeleteImageHotPatchState @ 0x1408C651C (MiDeleteImageHotPatchState.c)
 *     MiGetHotPatchEntry @ 0x1408C69EC (MiGetHotPatchEntry.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140904934 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x140909E00 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409174D8 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140917778 (RtlpFindDynamicEHContinuationTarget.c)
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
