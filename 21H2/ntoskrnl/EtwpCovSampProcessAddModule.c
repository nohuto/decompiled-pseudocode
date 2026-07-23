/*
 * XREFs of EtwpCovSampProcessAddModule @ 0x140945688
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140945220 (EtwpCovSampImageNotify.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpCovSampModuleReference @ 0x140945648 (EtwpCovSampModuleReference.c)
 *     EtwpCovSampProcessRemoveModule @ 0x140945C1C (EtwpCovSampProcessRemoveModule.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rax
  void *v21; // rax
  unsigned int v22; // esi
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9

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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x56777445u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v16, 0x56777445u);
      if ( !PoolWithTag )
      {
        v22 = -1073741670;
        goto LABEL_25;
      }
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
      *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
      if ( v16 > *(_DWORD *)(a1 + 36) )
      {
        v21 = *(void **)(a1 + 24);
        if ( v21 )
        {
          memmove(PoolWithTag, *(const void **)(a1 + 24), 16LL * *(unsigned int *)(a1 + 32));
          v21 = *(void **)(a1 + 24);
        }
        *(_QWORD *)(a1 + 24) = PoolWithTag;
        PoolWithTag = v21;
        *(_DWORD *)(a1 + 36) = v16;
      }
      if ( (unsigned int)++v11 >= 0x14 )
      {
        v22 = -1073741823;
        goto LABEL_25;
      }
    }
    v23 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16 * v14);
    if ( v15 > (unsigned int)v14 )
    {
      memmove(v23 + 2, (const void *)(*(_QWORD *)(a1 + 24) + 16 * v14), 16LL * (v15 - (unsigned int)v14));
      v15 = *(_DWORD *)(a1 + 32);
    }
    *(_DWORD *)(a1 + 32) = v15 + 1;
    *v23 = a4 + *(_QWORD *)(a3 + 40);
    EtwpCovSampModuleReference(*(_QWORD *)a1, a3);
    v23[1] = a3;
  }
  else
  {
    EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
  }
  v22 = 0;
LABEL_25:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, v26);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v22;
}
