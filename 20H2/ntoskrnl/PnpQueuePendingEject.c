/*
 * XREFs of PnpQueuePendingEject @ 0x1408A5034
 * Callers:
 *     IopEjectDevice @ 0x1408B53F0 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071FAEC (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140C44A08;
  if ( *(__int64 **)qword_140C44A08 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140C44A08 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
