/*
 * XREFs of MiMapNewPfns @ 0x1408C5E34
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x1402138C0 (MiUnlockDynamicMemoryShared.c)
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MiLockDynamicMemoryShared @ 0x1402253FC (MiLockDynamicMemoryShared.c)
 *     MiPageToNode @ 0x14024E754 (MiPageToNode.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MiGetClosestImplicitNode @ 0x140317220 (MiGetClosestImplicitNode.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiIncreaseCommitLimits @ 0x1403BFBD8 (MiIncreaseCommitLimits.c)
 *     KeConfigureDynamicMemory @ 0x140512F88 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
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
  if ( v12 - BugCheckParameter2 >= 0x40000 && qword_140C528D0 >= 0x200000 )
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
