/*
 * XREFs of KeCleanupImageTracepoints @ 0x14076F684
 * Callers:
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall KeCleanupImageTracepoints(__int64 a1)
{
  unsigned __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v4; // r15
  void **v5; // rdi
  unsigned __int64 v6; // r14
  void **v7; // rcx
  void **v8; // rsi
  void *v9; // rax
  signed __int32 v10[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( qword_140CFCBD0 )
    qword_140CFCBD0();
  if ( KiTpHashTable )
  {
    v2 = *(_QWORD *)(a1 + 48);
    CurrentThread = KeGetCurrentThread();
    v4 = v2 + *(unsigned int *)(a1 + 64) - 1LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiTpStateLock, 0LL);
    v5 = (void **)(KiTpHashTable + 8 * ((v2 >> 4) & 0x3FFF));
    v6 = KiTpHashTable + 8 * ((v4 >> 4) & 0x3FFF);
    while ( (unsigned __int64)v5 <= v6 )
    {
      v7 = (void **)*v5;
      v8 = v5;
      while ( v7 )
      {
        v9 = v7[1];
        if ( (unsigned __int64)v9 < v2 || (unsigned __int64)v9 > v4 )
        {
          v8 = v7;
        }
        else
        {
          if ( *((_BYTE *)v7 + 48) )
          {
            if ( !--KiTpEnabledCount )
              _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFD);
          }
          *v8 = *v7;
          _InterlockedOr(v10, 0);
          --KiTpRegisteredCount;
          while ( KiTpActiveTrapsCount )
            _mm_pause();
          ExFreePoolWithTag(v7, 0x70727446u);
        }
        v7 = (void **)*v8;
      }
      ++v5;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    KeLeaveCriticalRegion();
  }
}
