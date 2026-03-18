/*
 * XREFs of MiMapNewPfns @ 0x140969514
 * Callers:
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     MiUnlockDynamicMemoryShared @ 0x14022B0E0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x14023502C (MiLockDynamicMemoryShared.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiGetClosestImplicitNode @ 0x1403539BC (MiGetClosestImplicitNode.c)
 *     MiIncreaseCommitLimits @ 0x1403CF51C (MiIncreaseCommitLimits.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeConfigureDynamicMemory @ 0x14056AF98 (KeConfigureDynamicMemory.c)
 *     MiPageToNode @ 0x14057F520 (MiPageToNode.c)
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiPhysicalMemoryEverRemoved @ 0x140583778 (MiPhysicalMemoryEverRemoved.c)
 *     MiReduceCommitLimits @ 0x1405B3268 (MiReduceCommitLimits.c)
 */

__int64 __fastcall MiMapNewPfns(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR *a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 PteAddress; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r12
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // eax
  unsigned int ClosestImplicitNode; // ebx
  unsigned int v17; // edx
  struct _KTHREAD *CurrentThread; // rsi
  void *v19; // rbx
  int v21; // eax
  unsigned int v23; // [rsp+88h] [rbp+20h]

  PteAddress = MiGetPteAddress(48 * BugCheckParameter2 - 0x220000000000LL);
  v10 = MiGetPteAddress(v9 - 1 + 48 * BugCheckParameter3);
  v11 = v10;
  v12 = BugCheckParameter3 - BugCheckParameter2;
  if ( BugCheckParameter3 - BugCheckParameter2 >= 0x40000 && qword_140C590D0 >= 0x200000 )
  {
    v13 = PteAddress & 0xFFFFFFFFFFFFF000uLL;
    if ( PteAddress == (PteAddress & 0xFFFFFFFFFFFFF000uLL) )
      v13 = PteAddress;
    v14 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    PteAddress = v13;
    if ( v11 != v14 )
      v11 = v14;
  }
  v15 = MiPageToNode(BugCheckParameter2);
  ClosestImplicitNode = MiGetClosestImplicitNode(v15 + 1);
  v17 = ((a4 & 0x4000 | 0x12A10) >> 4) | 0x100;
  if ( (a4 & 0x8000) == 0 )
    v17 = (a4 & 0x4000 | 0x12A10) >> 4;
  v23 = v17;
  if ( (a4 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    v17 = v23;
  }
  else
  {
    CurrentThread = 0LL;
  }
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(PteAddress, v11, v17, 4, ClosestImplicitNode) )
  {
    if ( CurrentThread )
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    return 3221225626LL;
  }
  v19 = 0LL;
  if ( (a4 & 2) == 0 )
  {
    if ( (a4 & 0x400) != 0 )
    {
      v19 = (void *)MmMapIoSpaceEx(BugCheckParameter2 << 12, v12 << 12, 4u);
      if ( !v19 )
        return 3221225626LL;
    }
    if ( (a4 & 0x100000) == 0
      && !(unsigned int)MiIncreaseCommitLimits(
                          (__int64)&MiSystemPartition,
                          BugCheckParameter3 - BugCheckParameter2,
                          BugCheckParameter3 - BugCheckParameter2,
                          1,
                          0LL) )
    {
      goto LABEL_25;
    }
    if ( a3 != &MiSystemPartition
      && !(unsigned int)MiIncreaseCommitLimits(
                          (__int64)a3,
                          BugCheckParameter3 - BugCheckParameter2,
                          BugCheckParameter3 - BugCheckParameter2,
                          1,
                          0LL) )
    {
      if ( (a4 & 0x100000) == 0 )
        MiReduceCommitLimits(
          &MiSystemPartition,
          BugCheckParameter3 - BugCheckParameter2,
          BugCheckParameter3 - BugCheckParameter2);
LABEL_25:
      if ( v19 )
        MmUnmapIoSpace(v19, v12 << 12);
      return 3221225773LL;
    }
    if ( (a4 & 0x800) == 0 )
    {
      v21 = KeConfigureDynamicMemory(BugCheckParameter2, BugCheckParameter3 - 1, 1LL);
      if ( v21 < 0 )
        KeBugCheckEx(0x1Au, 0x61A00uLL, BugCheckParameter2, BugCheckParameter3, v21);
    }
  }
  if ( !(unsigned int)MiPhysicalMemoryEverRemoved(BugCheckParameter2, BugCheckParameter3 - BugCheckParameter2, 1) )
    a4 |= 0x80000u;
  MiInitializeDynamicPfns(
    BugCheckParameter2,
    BugCheckParameter3 - BugCheckParameter2,
    (unsigned __int16 *)a3,
    a4,
    a5,
    (ULONG_PTR *)v19);
  if ( CurrentThread )
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( v19 )
    MmUnmapIoSpace(v19, v12 << 12);
  return 0LL;
}
