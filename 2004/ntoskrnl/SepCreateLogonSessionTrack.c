/*
 * XREFs of SepCreateLogonSessionTrack @ 0x1406F12DC
 * Callers:
 *     SepRmCreateLogonSessionWrkr @ 0x1406F12B0 (SepRmCreateLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x140918CC4 (SeInitServerSilo.c)
 *     SepRmDbInitialization @ 0x140A6ACB4 (SepRmDbInitialization.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCreateLogonSessionTrack(__int64 a1)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v3; // rbx
  __int64 v4; // rcx
  KSPIN_LOCK *v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp
  KSPIN_LOCK v8; // rdi
  void *CurrentServerSilo; // rsi

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x734C6553u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xC0uLL);
  v3[1] = *(_QWORD *)a1;
  v3[3] = 1LL;
  v3[17] = (KSPIN_LOCK)(v3 + 16);
  v3[16] = (KSPIN_LOCK)(v3 + 16);
  v3[18] = 0LL;
  ExInitializePushLock(v3 + 19);
  if ( SeTokenLeakTracking )
  {
    v3[23] = (KSPIN_LOCK)(v3 + 22);
    v3[22] = (KSPIN_LOCK)(v3 + 22);
  }
  v4 = (unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v5 = (KSPIN_LOCK *)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  v8 = *v5;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  while ( v8 )
  {
    if ( CurrentServerSilo == *(void **)(v8 + 160)
      && *(_DWORD *)a1 == *(_DWORD *)(v8 + 8)
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(v8 + 12) )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(v3, 0);
      return 3221225710LL;
    }
    v8 = *(_QWORD *)v8;
  }
  if ( CurrentServerSilo )
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x734C6553u);
  v3[20] = (KSPIN_LOCK)CurrentServerSilo;
  *v3 = *v5;
  *v5 = (KSPIN_LOCK)v3;
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
