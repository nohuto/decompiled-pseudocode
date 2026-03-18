/*
 * XREFs of MiHotPatchImageTreeCompare @ 0x1408C5CE8
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x14057E954 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x14057F0BC (PsLoadVsmEnclaveData.c)
 *     MiDeleteImageHotPatchState @ 0x1408C51CC (MiDeleteImageHotPatchState.c)
 *     MiGetHotPatchEntry @ 0x1408C569C (MiGetHotPatchEntry.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140903654 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x140908B50 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x140916268 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140916508 (RtlpFindDynamicEHContinuationTarget.c)
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
