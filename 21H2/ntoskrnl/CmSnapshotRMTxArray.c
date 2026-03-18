/*
 * XREFs of CmSnapshotRMTxArray @ 0x1406A0094
 * Callers:
 *     CmpTryToRundownHive @ 0x140208D94 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     CmpAddEnlistmentToRollbackPacket @ 0x14091B730 (CmpAddEnlistmentToRollbackPacket.c)
 *     CmpReserveRollbackPacketSpace @ 0x14091BB78 (CmpReserveRollbackPacketSpace.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 NextElement; // rax
  __int64 v7; // rax
  __int64 result; // rax
  bool v9; // zf
  unsigned int v10; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = a1 + 16;
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v5 = 0;
      v11 = 0LL;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v3, &v11, 0LL);
        if ( !NextElement )
          break;
        v9 = (*(_DWORD *)(NextElement + 48) & 8) == 0;
        v10 = v5 + 1;
        if ( !v9 )
          v10 = v5;
        v5 = v10;
      }
      if ( v5 <= a2[1] - *a2 )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      result = CmpReserveRollbackPacketSpace(a2, v5);
      if ( (int)result < 0 )
        return result;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v7 = CmListGetNextElement(v3, &v11, 0LL);
      if ( !v7 )
        break;
      if ( (*(_DWORD *)(v7 + 48) & 8) == 0 )
        CmpAddEnlistmentToRollbackPacket(a2, *(_QWORD *)(v7 + 72));
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
