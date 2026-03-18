/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x14022CF60
 * Callers:
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x14022CA80 (MiChargeForLockedPage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x140234120 (MiWriteCompletePfn.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiUnlockImageSection @ 0x140324F00 (MiUnlockImageSection.c)
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
