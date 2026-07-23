/*
 * XREFs of CmpTransMgrRollback @ 0x140771250
 * Callers:
 *     CmKtmNotification @ 0x1405E11C0 (CmKtmNotification.c)
 *     CmRmFinalizeRecovery @ 0x14061E72C (CmRmFinalizeRecovery.c)
 *     CmpAbortLightWeightTransaction @ 0x1407711A4 (CmpAbortLightWeightTransaction.c)
 *     CmpRmUnDoPhase @ 0x140875B54 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  char *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // r8d
  int v12; // eax
  _QWORD *v13; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a1 + 16), &v13, 0);
    v6 = NextElement;
    if ( !NextElement )
      break;
    v11 = *((_DWORD *)NextElement + 16);
    if ( (v11 & 1) == 0 )
    {
      ++*a2;
      v12 = *((_DWORD *)NextElement + 17);
      if ( v12 )
      {
        if ( v12 == 12 && !*((_DWORD *)v6 + 24) )
          *((_DWORD *)v6 + 24) = *(_DWORD *)(*((_QWORD *)v6 + 6) + 40LL);
      }
      else if ( !*((_DWORD *)v6 + 22) )
      {
        *((_DWORD *)v6 + 22) = *(_DWORD *)(*((_QWORD *)v6 + 6) + 40LL);
      }
      *((_DWORD *)v6 + 16) = v11 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  return 0LL;
}
