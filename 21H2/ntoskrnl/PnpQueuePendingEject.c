/*
 * XREFs of PnpQueuePendingEject @ 0x1408A2604
 * Callers:
 *     IopEjectDevice @ 0x1408B29C0 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140639BC0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140639C54 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140C44BE8;
  if ( *(__int64 **)qword_140C44BE8 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140C44BE8 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
