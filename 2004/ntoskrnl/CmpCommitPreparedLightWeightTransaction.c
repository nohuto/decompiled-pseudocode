/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x140653A5C
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140653348 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     CmListGetNextElement @ 0x140654660 (CmListGetNextElement.c)
 *     CmpProcessLightWeightUOW @ 0x140654690 (CmpProcessLightWeightUOW.c)
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
        (unsigned __int8 *)byte_140022453,
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
          (unsigned __int8 *)&byte_1400223DF,
          0LL,
          0LL,
          3u,
          &v10);
      }
    }
  }
}
