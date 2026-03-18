/*
 * XREFs of IopWarmEjectDevice @ 0x14095A67C
 * Callers:
 *     PnpProcessCompletedEject @ 0x140947450 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     NtInitiatePowerAction @ 0x1407FEA60 (NtInitiatePowerAction.c)
 *     PnpSetPowerVetoEvent @ 0x140950C38 (PnpSetPowerVetoEvent.c)
 */

__int64 __fastcall IopWarmEjectDevice(_QWORD *a1, int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8

  KeWaitForSingleObject(&IopWarmEjectLock, Executive, 0, 0, 0LL);
  PpDevNodeLockTree(1);
  IopWarmEjectPdo = (__int64)a1;
  PpDevNodeUnlockTree(1);
  v5 = NtInitiatePowerAction(7, a2, 3, 0);
  if ( v5 == -1073741727 )
    PnpSetPowerVetoEvent(7, v4, v6, a1, 12, 0LL);
  PpDevNodeLockTree(1);
  if ( IopWarmEjectPdo )
  {
    if ( v5 >= 0 )
      v5 = -1073741823;
    IopWarmEjectPdo = 0LL;
  }
  PpDevNodeUnlockTree(1);
  KeSetEvent(&IopWarmEjectLock, 0, 0);
  return (unsigned int)v5;
}
