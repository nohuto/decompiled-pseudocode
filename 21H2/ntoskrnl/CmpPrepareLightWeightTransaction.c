/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x14065D4F8
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14065CE0C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpCleanupLightWeightPrepare @ 0x14065CF84 (CmpCleanupLightWeightPrepare.c)
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, (unsigned __int8 *)byte_1400297AF, 0LL, 0LL, 2u, v11);
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    v10 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v10, 0LL);
      if ( !NextElement )
        break;
      v8 = CmpProcessLightWeightUOW(NextElement, 0LL, v6, a2);
      if ( v8 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1, v7, a2);
        goto LABEL_8;
      }
    }
  }
  v8 = 0;
LABEL_8:
  if ( (unsigned int)dword_140C03868 > 5 && tlgKeywordOn((__int64)&dword_140C03868, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03868, (unsigned __int8 *)&qword_1400297E0, 0LL, 0LL, 2u, v11);
  return (unsigned int)v8;
}
