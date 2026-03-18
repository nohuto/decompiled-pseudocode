/*
 * XREFs of WdipSemAllocatePool @ 0x1407AABE8
 * Callers:
 *     WdipSemFastAllocate @ 0x1407741D0 (WdipSemFastAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53BE0, 0LL);
  v4 = dword_140C53BD0;
  if ( v2 > dword_140C53BD0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
    if ( !PoolWithTag )
      goto LABEL_3;
    v10 = (_QWORD *)qword_140C53BC8;
    if ( *(PVOID **)qword_140C53BC8 != &WdipSemPool )
      __fastfail(3u);
    PoolWithTag[1] = qword_140C53BC8;
    *PoolWithTag = &WdipSemPool;
    *v10 = PoolWithTag;
    v4 = 4080;
    qword_140C53BC8 = (__int64)PoolWithTag;
    qword_140C53BD8 = (__int64)(PoolWithTag + 2);
  }
  v3 = qword_140C53BD8;
  qword_140C53BD8 += v2;
  dword_140C53BD0 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((ULONG_PTR)&qword_140C53BE0, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v3;
}
