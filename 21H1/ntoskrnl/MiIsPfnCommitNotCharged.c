/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x140285FB0
 * Callers:
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x140285AD0 (MiChargeForLockedPage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MiUnlockImageSection @ 0x1402EB5D0 (MiUnlockImageSection.c)
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
