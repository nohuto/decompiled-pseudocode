/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x1403272D0
 * Callers:
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiUnlockImageSection @ 0x14031AA30 (MiUnlockImageSection.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x140325C80 (MiWriteCompletePfn.c)
 *     MiChargeForLockedPage @ 0x140328AA0 (MiChargeForLockedPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnCommitNotCharged(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return 0LL;
  else
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
}
