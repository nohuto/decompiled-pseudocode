/*
 * XREFs of MiGetNewSessionId @ 0x1407F3534
 * Callers:
 *     MiSessionCreateInternal @ 0x1407F336C (MiSessionCreateInternal.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 MiGetNewSessionId()
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG ClearBitsAndSet; // esi
  char v2; // di
  bool v3; // zf
  unsigned int v5; // ebp
  RTL_BITMAP *Pool; // rax
  __int64 v7; // r15
  RTL_BITMAP *v8; // r14
  unsigned __int64 SizeOfBitMap; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50618, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C53490, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v5 = qword_140C53490->SizeOfBitMap + 128;
    if ( v5 > 0x7FFFF )
      v5 = 0x7FFFF;
    Pool = (RTL_BITMAP *)MiAllocatePool(256, 8 * ((v5 >> 6) + ((v5 & 0x3F) != 0) + 2), 0x20206D4Du);
    v7 = 0LL;
    v8 = Pool;
    if ( Pool )
    {
      Pool->SizeOfBitMap = v5;
      Pool->Buffer = &Pool[1].SizeOfBitMap;
      RtlClearAllBits(Pool);
      SizeOfBitMap = qword_140C53490->SizeOfBitMap;
      LOBYTE(v7) = (SizeOfBitMap & 0x3F) != 0;
      memmove(v8->Buffer, qword_140C53490->Buffer, 8 * ((SizeOfBitMap >> 6) + v7));
      ExFreePoolWithTag(qword_140C53490, 0);
      qword_140C53490 = v8;
      ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    }
  }
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50618, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C50618);
  KeAbPostRelease((ULONG_PTR)&qword_140C50618);
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v3 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return ClearBitsAndSet;
}
