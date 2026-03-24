/*
 * XREFs of IopRetryDeviceRemovalForReset @ 0x1408A09D0
 * Callers:
 *     <none>
 * Callees:
 *     PipIsDevNodeEffectivelyRemoved @ 0x14050DB3C (PipIsDevNodeEffectivelyRemoved.c)
 *     PpDevNodeUnlockTree @ 0x140639BC0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140639C54 (PpDevNodeLockTree.c)
 *     PnpSetTargetDeviceRemove @ 0x140738FD4 (PnpSetTargetDeviceRemove.c)
 *     IopFreeResetRemovalContext @ 0x1408A08D0 (IopFreeResetRemovalContext.c)
 */

void __fastcall IopRetryDeviceRemovalForReset(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  BOOL IsDevNodeEffectivelyRemoved; // ebx
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 184);
  if ( v1 )
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  else
    v3 = 0LL;
  PpDevNodeLockTree(0);
  IsDevNodeEffectivelyRemoved = PipIsDevNodeEffectivelyRemoved(v3);
  PpDevNodeUnlockTree(0);
  if ( IsDevNodeEffectivelyRemoved )
    v5 = -1073741823;
  else
    v5 = PnpSetTargetDeviceRemove(
           *(_QWORD **)(a1 + 184),
           0,
           1,
           0,
           1,
           54,
           0,
           0LL,
           (__int64)IopDeviceRemovalForResetComplete,
           a1,
           (_DWORD *)(a1 + 164),
           a1 + 192,
           a1 + 200,
           (__int64 *)(a1 + 168));
  if ( v5 < 0 )
    IopFreeResetRemovalContext((char *)a1);
}
