/*
 * XREFs of CmSnapshotRMTxArray @ 0x140658994
 * Callers:
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     CmpAddEnlistmentToRollbackPacket @ 0x140870410 (CmpAddEnlistmentToRollbackPacket.c)
 *     CmpReserveRollbackPacketSpace @ 0x140870874 (CmpReserveRollbackPacketSpace.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 NextElement; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  bool v12; // zf
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = a1 + 16;
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v5 = 0;
      v17 = 0LL;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v3, &v17, 0LL);
        if ( !NextElement )
          break;
        v12 = (*(_DWORD *)(NextElement + 48) & 8) == 0;
        v13 = v5 + 1;
        if ( !v12 )
          v13 = v5;
        v5 = v13;
      }
      if ( v5 <= a2[1] - *a2 )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
      result = CmpReserveRollbackPacketSpace(a2, v5);
      if ( (int)result < 0 )
        return result;
    }
    v17 = 0LL;
    while ( 1 )
    {
      v7 = CmListGetNextElement(v3, &v17, 0LL);
      if ( !v7 )
        break;
      if ( (*(_DWORD *)(v7 + 48) & 8) == 0 )
        CmpAddEnlistmentToRollbackPacket(a2, *(_QWORD *)(v7 + 72));
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  }
  return 0LL;
}
