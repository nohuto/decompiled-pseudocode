/*
 * XREFs of SmKmKeyGenGenerate @ 0x140926E58
 * Callers:
 *     SmcStoreCreate @ 0x1409292A8 (SmcStoreCreate.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SmKmKeyGenKeyDelete @ 0x140926F68 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenKeyFind @ 0x140926FFC (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenNewKey @ 0x1409271CC (SmKmKeyGenNewKey.c)
 */

__int64 __fastcall SmKmKeyGenGenerate(signed __int64 *BugCheckParameter2, void *a2, void *a3, unsigned int a4)
{
  size_t v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  struct _PRIVILEGE_SET *v10; // rdi
  int v11; // edi

  v4 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
      v9 = SmKmKeyGenKeyFind(BugCheckParameter2, a2);
      v10 = (struct _PRIVILEGE_SET *)v9;
      if ( v9 )
        break;
      if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      KeLeaveCriticalRegion();
      v11 = SmKmKeyGenNewKey((ULONG_PTR)BugCheckParameter2, a2, v4);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( *(_DWORD *)(v9 + 32) == (_DWORD)v4 )
      break;
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveCriticalRegion();
    SmKmKeyGenKeyDelete((ULONG_PTR)BugCheckParameter2, v10);
  }
  memmove(a3, *(const void **)(v9 + 24), v4);
  v11 = 0;
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
