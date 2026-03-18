/*
 * XREFs of WdipSemAllocatePool @ 0x1407ADD48
 * Callers:
 *     WdipSemFastAllocate @ 0x1407765E0 (WdipSemFastAllocate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53AE0, 0LL);
  v4 = dword_140C53AD0;
  if ( v2 > dword_140C53AD0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
    if ( !PoolWithTag )
      goto LABEL_3;
    v7 = (_QWORD *)qword_140C53AC8;
    if ( *(PVOID **)qword_140C53AC8 != &WdipSemPool )
      __fastfail(3u);
    PoolWithTag[1] = qword_140C53AC8;
    *PoolWithTag = &WdipSemPool;
    *v7 = PoolWithTag;
    v4 = 4080;
    qword_140C53AC8 = (__int64)PoolWithTag;
    qword_140C53AD8 = (__int64)(PoolWithTag + 2);
  }
  v3 = qword_140C53AD8;
  qword_140C53AD8 += v2;
  dword_140C53AD0 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((ULONG_PTR)&qword_140C53AE0, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
