/*
 * XREFs of MiAllocatePartitionId @ 0x14096C1B0
 * Callers:
 *     MmCreatePartition @ 0x1403D981C (MmCreatePartition.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiExpandPartitionIds @ 0x140981778 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 ClearBitsAndSet; // rsi
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51F08, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C51F28, 1u, 0);
  if ( ClearBitsAndSet == 0xFFFFFFFFLL )
  {
    while ( (unsigned int)MiExpandPartitionIds() )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C51F28, 1u, 0);
      if ( ClearBitsAndSet != 0xFFFFFFFFLL )
        goto LABEL_4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C51F08);
    KeAbPostRelease((ULONG_PTR)&qword_140C51F08);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  else
  {
LABEL_4:
    byte_140C52954 = 1;
    *(_QWORD *)(qword_140C51F48 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C51F08);
    KeAbPostRelease((ULONG_PTR)&qword_140C51F08);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return (unsigned __int16)ClearBitsAndSet;
  }
}
