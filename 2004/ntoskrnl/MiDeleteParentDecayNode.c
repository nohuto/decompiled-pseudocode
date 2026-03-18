/*
 * XREFs of MiDeleteParentDecayNode @ 0x14033A264
 * Callers:
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiRemoveDecayClusterTimer @ 0x14033A2F8 (MiRemoveDecayClusterTimer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 */

unsigned __int8 __fastcall MiDeleteParentDecayNode(__int64 a1)
{
  __int64 v1; // rcx
  ULONG_PTR v2; // rbx
  __int64 v3; // r8
  char v4; // al
  unsigned __int8 result; // al

  v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  v2 = 48 * v1 - 0x58000000000LL;
  *(_QWORD *)(v2 + 16) = MiMakeTransitionPte(v1, 4);
  *(_QWORD *)(v2 + 40) = v3 | *(_QWORD *)(v2 + 40) & 0xFFFFFFF000000000uLL;
  MiUnlinkPageFromList(v2, 1);
  MiRemoveDecayClusterTimer(v2);
  v4 = *(_BYTE *)(v2 + 35);
  if ( (v4 & 8) == 0 )
    return (unsigned __int8)RtlpInterlockedPushEntrySList(&stru_140C4E7B0, (PSLIST_ENTRY)v2);
  result = v4 & 0xF7;
  *(_BYTE *)(v2 + 35) = result;
  return result;
}
