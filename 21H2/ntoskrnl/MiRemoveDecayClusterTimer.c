/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x1402E4D70
 * Callers:
 *     MiDecayNodeNowEmpty @ 0x1402E4BF0 (MiDecayNodeNowEmpty.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 * Callees:
 *     MiUnlinkDecayClusterTimer @ 0x1402E4DD4 (MiUnlinkDecayClusterTimer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __fastcall MiRemoveDecayClusterTimer(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  LOBYTE(a2) = -1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C52D00, a2);
  else
    ExpAcquireSpinLockExclusive(&dword_140C52D00, a2);
  v3 = *(_QWORD *)(a1 + 8);
  if ( (v3 & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = v3 | 0x100000000LL;
    MiUnlinkDecayClusterTimer(a1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
}
