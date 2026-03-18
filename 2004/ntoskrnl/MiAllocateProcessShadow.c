/*
 * XREFs of MiAllocateProcessShadow @ 0x1406AC170
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1407BC4B4 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiGetProcessPartition @ 0x1402AD1E0 (MiGetProcessPartition.c)
 *     MiAcquireNonPagedResources @ 0x1402E25C4 (MiAcquireNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x1402E2FD8 (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x1402E5148 (MiMarkPfnTradable.c)
 *     MiReleaseNonPagedResources @ 0x140337328 (MiReleaseNonPagedResources.c)
 *     MiAllocateTopLevelPage @ 0x1406ABFD4 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1)
{
  __int64 ProcessPartition; // rsi
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0xC00000) == 0 )
    return 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0) >= 0 )
  {
    v5 = MiReservePtes((__int64)&qword_140C4ED40, 1u, v3, v4);
    v6 = v5;
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v5);
      MiMarkPfnTradable(48 * TopLevelPage - 0x58000000000LL, 0);
      *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1928) = (__int64)(v6 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources(ProcessPartition, 1LL);
  }
  return 3221225626LL;
}
