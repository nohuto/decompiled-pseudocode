/*
 * XREFs of MiFreePartitionId @ 0x14096C2FC
 * Callers:
 *     MiDeletePartition @ 0x14058DDC0 (MiDeletePartition.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi
  $CEA84C04E3712D858E5667A507841A2A *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51F08, 0LL);
  _bittestandreset((signed __int32 *)qword_140C51F28->Buffer, v2);
  *(_QWORD *)(qword_140C51F48 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C51F08);
  LOBYTE(v3) = KeAbPostRelease((ULONG_PTR)&qword_140C51F08);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v3 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v3->ApcState.ApcListHead[0].Flink != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
