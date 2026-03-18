/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x1406A1DE4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1406A10F8 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     CmListGetNextElement @ 0x1406A42B0 (CmListGetNextElement.c)
 *     CmpProcessLightWeightUOW @ 0x1406A4414 (CmpProcessLightWeightUOW.c)
 */

void __fastcall CmpCommitPreparedLightWeightTransaction(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  int v7; // [rsp+30h] [rbp-78h] BYREF
  __int64 v8; // [rsp+38h] [rbp-70h] BYREF
  __int64 v9; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-60h] BYREF
  int *v11; // [rsp+68h] [rbp-40h]
  int v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+74h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+78h] [rbp-30h] BYREF

  if ( a1 )
  {
    v2 = 0;
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_1400225B3,
        0LL,
        0LL,
        2u,
        &v14);
    v9 = MEMORY[0xFFFFF78000000014];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v8, 0LL);
      if ( !NextElement )
        break;
      CmpProcessLightWeightUOW(NextElement, &v9, 1LL, a2);
      ++v2;
    }
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
      {
        v13 = 0;
        v11 = &v7;
        v7 = v2;
        v12 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&byte_14002253F,
          0LL,
          0LL,
          3u,
          &v10);
      }
    }
  }
}
