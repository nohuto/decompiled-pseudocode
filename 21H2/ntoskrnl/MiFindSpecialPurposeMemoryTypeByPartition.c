/*
 * XREFs of MiFindSpecialPurposeMemoryTypeByPartition @ 0x14096E3D8
 * Callers:
 *     MiSpecialPurposeMemoryRemoved @ 0x14096E960 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x14096EAB0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140599E60 (MiFindSpecialPurposeMemoryType.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryTypeByPartition(__int64 a1, __int64 *a2, volatile signed __int64 **a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v5; // r14
  _QWORD *v7; // rdi
  __int64 v8; // r13
  volatile signed __int64 *v9; // rsi
  _QWORD *SpecialPurposeMemoryType; // rax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = *(__int64 **)(a1 + 16624);
  v7 = 0LL;
  if ( PsReferencePartitionSafe((__int64)v5) )
  {
    v8 = *v5;
    --CurrentThread->SpecialApcDisable;
    v9 = (volatile signed __int64 *)(v8 + 16672);
    ExAcquirePushLockExclusiveEx(v8 + 16672, 0LL);
    SpecialPurposeMemoryType = MiFindSpecialPurposeMemoryType(v8, (const void *)(a1 + 16640));
    if ( SpecialPurposeMemoryType && SpecialPurposeMemoryType[8] == a1 )
    {
      v7 = SpecialPurposeMemoryType;
      *a3 = v9;
      *a2 = v8;
    }
    else
    {
      if ( v8 != -16672 )
      {
        if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8 + 16672);
        KeAbPostRelease(v8 + 16672);
        v11 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v11
          && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      PsDereferencePartition((__int64)v5);
    }
  }
  return v7;
}
