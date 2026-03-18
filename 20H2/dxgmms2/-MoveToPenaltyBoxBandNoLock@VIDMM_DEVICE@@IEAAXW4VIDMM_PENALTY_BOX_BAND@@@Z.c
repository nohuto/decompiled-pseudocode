/*
 * XREFs of ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0069EC0
 * Callers:
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0067990 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0069F0C (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B8C60 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00B8FD8 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 * Callees:
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001145C (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012DD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 *__fastcall VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(__int64 a1, int a2)
{
  __int64 *result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 7) != 0 )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry((VIDMM_GLOBAL *)a1, (struct _LIST_ENTRY *)(a1 + 184));
  result = VIDMM_GLOBAL::InsertToPenaltyBox(*(_QWORD *)a1, a1, a2);
  *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ a2) & 7;
  return result;
}
