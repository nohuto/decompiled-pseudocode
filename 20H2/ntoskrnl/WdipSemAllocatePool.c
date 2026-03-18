/*
 * XREFs of WdipSemAllocatePool @ 0x1407BBC88
 * Callers:
 *     WdipSemFastAllocate @ 0x140784BE0 (WdipSemFastAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53B60, 0LL);
  v4 = dword_140C53B50;
  if ( v2 > dword_140C53B50 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
    if ( !PoolWithTag )
      goto LABEL_3;
    v7 = (_QWORD *)qword_140C53B48;
    if ( *(PVOID **)qword_140C53B48 != &WdipSemPool )
      __fastfail(3u);
    PoolWithTag[1] = qword_140C53B48;
    *PoolWithTag = &WdipSemPool;
    *v7 = PoolWithTag;
    v4 = 4080;
    qword_140C53B48 = (__int64)PoolWithTag;
    qword_140C53B58 = (__int64)(PoolWithTag + 2);
  }
  v3 = qword_140C53B58;
  qword_140C53B58 += v2;
  dword_140C53B50 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((ULONG_PTR)&qword_140C53B60, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
