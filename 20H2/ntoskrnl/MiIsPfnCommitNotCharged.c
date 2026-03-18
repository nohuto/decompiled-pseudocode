/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x1402AAA20
 * Callers:
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x1402A93D0 (MiWriteCompletePfn.c)
 *     MiChargeForLockedPage @ 0x1402AC1F0 (MiChargeForLockedPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiUnlockImageSection @ 0x1402F3190 (MiUnlockImageSection.c)
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
