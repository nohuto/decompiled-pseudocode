/*
 * XREFs of MiAddSpecialPurposeMemoryPrepare @ 0x14096DF60
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x14098259C (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140982688 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140599E60 (MiFindSpecialPurposeMemoryType.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x14096E4D8 (MiInitializePartitionSpecialPurposeMemory.c)
 */

__int64 __fastcall MiAddSpecialPurposeMemoryPrepare(
        __int64 a1,
        const void *a2,
        _QWORD *a3,
        volatile signed __int64 **a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v5; // rdi
  int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // ecx
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = (volatile signed __int64 *)(a1 + 16672);
  *a3 = 0LL;
  *a4 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 16672, 0LL);
  v10 = MiInitializePartitionSpecialPurposeMemory(a1, a2);
  if ( v10 < 0 )
  {
    v12 = v10;
    if ( v5 )
    {
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      v13 = CurrentThread->SpecialApcDisable++ == -1;
      v12 = v10;
      if ( v13
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
        return (unsigned int)v10;
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(MiFindSpecialPurposeMemoryType(a1, a2)[8] + 176LL);
    *a3 = v11;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
      __fastfail(0xEu);
    *a4 = v5;
    return 0;
  }
  return v12;
}
