/*
 * XREFs of MiRestockOverCommit @ 0x14054AC24
 * Callers:
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiRemoveLockedPageCharge @ 0x140285070 (MiRemoveLockedPageCharge.c)
 *     MiUnlockMdlWritePages @ 0x14028CED0 (MiUnlockMdlWritePages.c)
 *     MiIncreaseCommitLimits @ 0x1403BB7B8 (MiIncreaseCommitLimits.c)
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
