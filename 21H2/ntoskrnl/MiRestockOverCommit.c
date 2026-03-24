/*
 * XREFs of MiRestockOverCommit @ 0x140550714
 * Callers:
 *     MiRemoveLockedPageCharge @ 0x14023AEB0 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiUnlockMdlWritePages @ 0x1403259E0 (MiUnlockMdlWritePages.c)
 *     MiIncreaseCommitLimits @ 0x1403BF7AC (MiIncreaseCommitLimits.c)
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
