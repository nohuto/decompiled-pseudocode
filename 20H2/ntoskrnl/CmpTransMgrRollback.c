/*
 * XREFs of CmpTransMgrRollback @ 0x14076CD70
 * Callers:
 *     CmKtmNotification @ 0x1406A3E40 (CmKtmNotification.c)
 *     CmRmFinalizeRecovery @ 0x1406DF7BC (CmRmFinalizeRecovery.c)
 *     CmpAbortLightWeightTransaction @ 0x14076CCC4 (CmpAbortLightWeightTransaction.c)
 *     CmpRmUnDoPhase @ 0x140878104 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     CmListGetNextElement @ 0x1406A42B0 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  char *v6; // rdx
  int v8; // r8d
  int v9; // eax
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a1 + 16), &v10, 0);
    v6 = NextElement;
    if ( !NextElement )
      break;
    v8 = *((_DWORD *)NextElement + 16);
    if ( (v8 & 1) == 0 )
    {
      ++*a2;
      v9 = *((_DWORD *)NextElement + 17);
      if ( v9 )
      {
        if ( v9 == 12 && !*((_DWORD *)v6 + 24) )
          *((_DWORD *)v6 + 24) = *(_DWORD *)(*((_QWORD *)v6 + 6) + 40LL);
      }
      else if ( !*((_DWORD *)v6 + 22) )
      {
        *((_DWORD *)v6 + 22) = *(_DWORD *)(*((_QWORD *)v6 + 6) + 40LL);
      }
      *((_DWORD *)v6 + 16) = v8 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
