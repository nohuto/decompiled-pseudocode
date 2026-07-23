/*
 * XREFs of PnpQueuePendingEject @ 0x1408A2764
 * Callers:
 *     IopEjectDevice @ 0x1408B2B20 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140C44C28;
  if ( *(__int64 **)qword_140C44C28 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140C44C28 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
