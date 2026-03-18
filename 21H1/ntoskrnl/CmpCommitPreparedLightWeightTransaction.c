/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x1406583C8
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140656638 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpProcessLightWeightUOW @ 0x140658270 (CmpProcessLightWeightUOW.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 */

void __fastcall CmpCommitPreparedLightWeightTransaction(__int64 a1, struct _LOOKASIDE_LIST_EX *a2)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 NextElement; // rax
  int v10; // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+38h] [rbp-70h] BYREF
  __int64 v12; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-60h] BYREF
  int *v14; // [rsp+68h] [rbp-40h]
  int v15; // [rsp+70h] [rbp-38h]
  int v16; // [rsp+74h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+78h] [rbp-30h] BYREF

  if ( a1 )
  {
    v2 = 0;
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_140022353,
        0LL,
        0LL,
        2u,
        &v17);
    v12 = MEMORY[0xFFFFF78000000014];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
    v11 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v11, 0LL);
      if ( !NextElement )
        break;
      CmpProcessLightWeightUOW(NextElement, &v12, 1LL, a2);
      ++v2;
    }
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
      {
        v16 = 0;
        v14 = &v10;
        v10 = v2;
        v15 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&unk_140022310,
          0LL,
          0LL,
          3u,
          &v13);
      }
    }
  }
}
