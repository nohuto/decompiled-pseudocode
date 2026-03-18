/*
 * XREFs of CmpIsCmRm @ 0x140658F20
 * Callers:
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 */

char __fastcall CmpIsCmRm(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  __int64 NextElement; // rax
  char v5; // r8
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v11 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  while ( 1 )
  {
    NextElement = CmListGetNextElement(&CmpRmListHead, &v11, 0LL);
    if ( !NextElement )
      break;
    if ( (_QWORD *)NextElement == a1 )
    {
      if ( a1[6] && a1[7] && a1[4] )
      {
        v6 = 0;
        if ( a1[5] )
          v6 = v5 + 1;
        v2 = v6;
      }
      break;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v2;
}
