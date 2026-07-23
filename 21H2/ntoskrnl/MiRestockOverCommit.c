/*
 * XREFs of MiRestockOverCommit @ 0x140550954
 * Callers:
 *     MiRemoveLockedPageCharge @ 0x1402DF700 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiUnlockMdlWritePages @ 0x140330730 (MiUnlockMdlWritePages.c)
 *     MiIncreaseCommitLimits @ 0x1403BFBD8 (MiIncreaseCommitLimits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRestockOverCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 6264);
  if ( v2 )
  {
    v3 = a2;
    if ( a2 > v2 )
      v3 = *(_QWORD *)(a1 + 6264);
    *(_QWORD *)(a1 + 6264) = v2 - v3;
    a2 -= v3;
  }
  return a2;
}
