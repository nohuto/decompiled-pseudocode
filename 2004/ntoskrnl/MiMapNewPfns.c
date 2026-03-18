/*
 * XREFs of MiMapNewPfns @ 0x1408C26D4
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C1890 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MiGetClosestImplicitNode @ 0x1402594C0 (MiGetClosestImplicitNode.c)
 *     MiUnlockDynamicMemoryShared @ 0x140273450 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140333BEC (MiLockDynamicMemoryShared.c)
 *     MmMapIoSpaceEx @ 0x140335F40 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 *     MiPageToNode @ 0x14035DBD4 (MiPageToNode.c)
 *     MiIncreaseCommitLimits @ 0x1403BCAD8 (MiIncreaseCommitLimits.c)
 *     KeConfigureDynamicMemory @ 0x14050D8D8 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x1405290D0 (MiInitializeDynamicPfns.c)
 */

__int64 __fastcall MiMapNewPfns(ULONG_PTR BugCheckParameter2, __int64 a2, __int16 *a3, unsigned int a4, __int64 a5)
{
  __int64 PteAddress; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  unsigned int ClosestImplicitNode; // ebx
  unsigned int v18; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  void *v20; // rbx

  PteAddress = MiGetPteAddress(48 * BugCheckParameter2 - 0x58000000000LL);
  v10 = MiGetPteAddress(v9 - 1 + 48 * v8);
  v11 = v10;
  v13 = v12 - BugCheckParameter2;
  if ( v12 - BugCheckParameter2 >= 0x40000 && qword_140C52690 >= 0x200000 )
  {
    v14 = PteAddress & 0xFFFFFFFFFFFFF000uLL;
    if ( PteAddress == (PteAddress & 0xFFFFFFFFFFFFF000uLL) )
      v14 = PteAddress;
    v15 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    PteAddress = v14;
    if ( v11 != v15 )
      v11 = v15;
  }
  v16 = MiPageToNode(BugCheckParameter2);
  ClosestImplicitNode = MiGetClosestImplicitNode(v16 + 1);
  v18 = ((a4 & 0x2000 | 0x1508) >> 3) | 0x100;
  if ( (a4 & 0x4000) == 0 )
    v18 = (a4 & 0x2000 | 0x1508) >> 3;
  if ( (a4 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  }
  else
  {
    CurrentThread = 0LL;
  }
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(PteAddress, v11, v18, 4, ClosestImplicitNode) )
  {
    if ( CurrentThread )
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    return 3221225626LL;
  }
  v20 = 0LL;
  if ( (a4 & 2) == 0 )
  {
    if ( (a4 & 0x200) != 0 )
    {
      v20 = (void *)MmMapIoSpaceEx(BugCheckParameter2 << 12, v13 << 12, 4u);
      if ( !v20 )
        return 3221225626LL;
    }
    if ( !(unsigned int)MiIncreaseCommitLimits((__int64)&MiSystemPartition, v13, v13, (a4 & 4) != 0, 0LL) )
    {
      if ( v20 )
        MmUnmapIoSpace(v20, v13 << 12);
      return 3221225773LL;
    }
    if ( (a4 & 0x404) == 0 )
      KeConfigureDynamicMemory(BugCheckParameter2, a2 - 1, 1u);
  }
  MiInitializeDynamicPfns(BugCheckParameter2, v13, a3, a4, a5, (__int64)v20);
  if ( CurrentThread )
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( v20 )
    MmUnmapIoSpace(v20, v13 << 12);
  return 0LL;
}
