/*
 * XREFs of PnpQueuePendingEject @ 0x14089E1E4
 * Callers:
 *     IopEjectDevice @ 0x1408AE5A0 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_140C44C58;
  if ( *(__int64 **)qword_140C44C58 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140C44C58 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
