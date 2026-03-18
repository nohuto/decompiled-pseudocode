/*
 * XREFs of EtwpCovSampProcessAddModule @ 0x140947CE8
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140947880 (EtwpCovSampImageNotify.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     EtwpCovSampModuleReference @ 0x140947CA8 (EtwpCovSampModuleReference.c)
 *     EtwpCovSampProcessRemoveModule @ 0x14094827C (EtwpCovSampProcessRemoveModule.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampProcessAddModule(__int64 a1, PVOID *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // r14
  volatile signed __int64 *v10; // rbp
  int v11; // r12d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // esi
  struct _KTHREAD *v17; // rax
  void *v18; // rax
  unsigned int v19; // esi
  _QWORD *v20; // rsi

  CurrentThread = KeGetCurrentThread();
  PoolWithTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(a1 + 8);
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( !*(_QWORD *)a1 )
  {
    ObfReferenceObject(*a2);
    *(_QWORD *)a1 = a2;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x110000) != 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
      v13 = *(_DWORD *)(a1 + 36);
      v14 = v12;
      v15 = *(_DWORD *)(a1 + 32);
      if ( v15 < v13 )
        break;
      v16 = 2 * v13;
      if ( !v13 )
        v16 = 16;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x56777445u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v16, 0x56777445u);
      if ( !PoolWithTag )
      {
        v19 = -1073741670;
        goto LABEL_25;
      }
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
      *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
      if ( v16 > *(_DWORD *)(a1 + 36) )
      {
        v18 = *(void **)(a1 + 24);
        if ( v18 )
        {
          memmove(PoolWithTag, *(const void **)(a1 + 24), 16LL * *(unsigned int *)(a1 + 32));
          v18 = *(void **)(a1 + 24);
        }
        *(_QWORD *)(a1 + 24) = PoolWithTag;
        PoolWithTag = v18;
        *(_DWORD *)(a1 + 36) = v16;
      }
      if ( (unsigned int)++v11 >= 0x14 )
      {
        v19 = -1073741823;
        goto LABEL_25;
      }
    }
    v20 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16 * v14);
    if ( v15 > (unsigned int)v14 )
    {
      memmove(v20 + 2, (const void *)(*(_QWORD *)(a1 + 24) + 16 * v14), 16LL * (v15 - (unsigned int)v14));
      v15 = *(_DWORD *)(a1 + 32);
    }
    *(_DWORD *)(a1 + 32) = v15 + 1;
    *v20 = a4 + *(_QWORD *)(a3 + 40);
    EtwpCovSampModuleReference(*(_QWORD *)a1, a3);
    v20[1] = a3;
  }
  else
  {
    EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
  }
  v19 = 0;
LABEL_25:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v19;
}
