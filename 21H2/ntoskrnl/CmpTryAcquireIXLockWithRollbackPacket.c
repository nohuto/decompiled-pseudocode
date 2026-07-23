/*
 * XREFs of CmpTryAcquireIXLockWithRollbackPacket @ 0x14076E3D0
 * Callers:
 *     CmpTryAcquireKcbIXLocks @ 0x14076E364 (CmpTryAcquireKcbIXLocks.c)
 * Callees:
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x1408752AC (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireIXLockWithRollbackPacket(int *a1, char a2, __int64 a3)
{
  int v3; // eax
  bool v4; // al
  __int64 result; // rax

  v3 = *a1;
  if ( a2 )
  {
    if ( !v3 )
      return 0LL;
    v4 = 0;
  }
  else
  {
    v4 = v3 >= 0;
  }
  if ( v4 )
    return 0LL;
  if ( !a3 )
    return 3222863873LL;
  result = CmpSnapshotTxOwnerArrayToRollbackPacket(a1, a3);
  if ( (int)result >= 0 )
    return 3221226029LL;
  return result;
}
