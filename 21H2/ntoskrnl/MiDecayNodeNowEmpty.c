/*
 * XREFs of MiDecayNodeNowEmpty @ 0x1402E4BF0
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x1403122F0 (MiEmptyDecayClusterTimers.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14038EF10 (MiUnlinkProtectedStandbyPfn.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiRemoveDecayClusterTimer @ 0x1402E4D70 (MiRemoveDecayClusterTimer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiDecayNodeNowEmpty(__int64 a1)
{
  __int64 v2; // rbx
  __int64 TransitionPte; // rax
  ULONG v4; // edi

  v2 = 48 * a1 - 0x220000000000LL;
  if ( (*(_BYTE *)(v2 + 35) & 8) == 0 )
  {
    MiRemoveDecayClusterTimer(48 * a1 - 0x220000000000LL);
    TransitionPte = MiMakeTransitionPte(a1, 4LL);
    v4 = a1 - qword_140C52CE0;
    *(_QWORD *)(v2 + 16) = TransitionPte;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
    RtlSetBits(&BitMapHeader, v4, 1u);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
  }
}
