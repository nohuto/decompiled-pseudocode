/*
 * XREFs of CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x1408752AC
 * Callers:
 *     CmpTryAcquireIXLockWithRollbackPacket @ 0x14076E3D0 (CmpTryAcquireIXLockWithRollbackPacket.c)
 * Callees:
 *     CmpAddUoWToRollbackPacket @ 0x140874D30 (CmpAddUoWToRollbackPacket.c)
 *     CmpReserveRollbackPacketSpace @ 0x1408750EC (CmpReserveRollbackPacketSpace.c)
 */

__int64 __fastcall CmpSnapshotTxOwnerArrayToRollbackPacket(
        unsigned int *a1,
        unsigned int *a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // rbp

  v4 = *a1;
  if ( !(_DWORD)v4 )
    __fastfail(5u);
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  result = CmpReserveRollbackPacketSpace(a2, v4, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      CmpAddUoWToRollbackPacket(a2, *((_QWORD *)a1 + 1));
    }
    else if ( (_DWORD)v4 )
    {
      v8 = 0LL;
      do
      {
        CmpAddUoWToRollbackPacket(a2, *(_QWORD *)(*((_QWORD *)a1 + 1) + v8));
        v8 += 8LL;
        --v4;
      }
      while ( v4 );
    }
    return 0LL;
  }
  return result;
}
