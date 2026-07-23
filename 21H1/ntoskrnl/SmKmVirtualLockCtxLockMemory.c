/*
 * XREFs of SmKmVirtualLockCtxLockMemory @ 0x140598CA0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1403092F0 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ZwLockVirtualMemory @ 0x1403F44D0 (ZwLockVirtualMemory.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1405989BC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140598DC0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 */

__int64 __fastcall SmKmVirtualLockCtxLockMemory(ULONG_PTR BugCheckParameter2, void *a2, ULONG_PTR a3)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  signed __int64 v8; // rax
  NTSTATUS v9; // eax
  int v10; // edi
  unsigned __int64 v11; // rdi
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  RegionSize = a3;
  BaseAddress = a2;
  v4 = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    if ( !v4 )
    {
      v6 = *(_QWORD *)(BugCheckParameter2 + 8);
      v7 = v6 + RegionSize;
      while ( v7 <= *(_QWORD *)(BugCheckParameter2 + 16) )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 8), v7, v6);
        if ( v6 == v8 )
        {
          v4 = 1;
          goto LABEL_9;
        }
        v7 = RegionSize + v8;
        v6 = v8;
      }
      goto LABEL_11;
    }
LABEL_9:
    v9 = ZwLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    v10 = v9;
    if ( v9 >= 0 )
      break;
    if ( v9 != -1073741663 )
      goto LABEL_16;
LABEL_11:
    v11 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v10 = SmKmVirtualLockContextIncreaseWsMin(BugCheckParameter2, RegionSize, v11);
    if ( v10 < 0 )
      goto LABEL_19;
  }
  v4 = 0;
  v10 = 0;
LABEL_16:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
LABEL_19:
  if ( v4 )
    SmKmVirtualLockCtxMemoryUnlocked(BugCheckParameter2);
  return (unsigned int)v10;
}
