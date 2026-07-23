/*
 * XREFs of MiAllocateProcessShadow @ 0x1406A7A1C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CF174 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x140217EF8 (MiReleaseNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x1402959F4 (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x1402964F8 (MiMarkPfnTradable.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiAllocateTopLevelPage @ 0x1406A7B04 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  ULONG_PTR *ProcessPartition; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  ULONG_PTR v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR v10; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0xC00000) == 0 )
    return 0LL;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0) >= 0 )
  {
    v7 = MiReservePtes((__int64)&qword_140C4EF80, 1u, v5, v6);
    v10 = v7;
    if ( v7 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v7, a2);
      MiMarkPfnTradable(48 * TopLevelPage - 0x58000000000LL, 0);
      *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1928) = (__int64)(v10 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources((__int64)ProcessPartition, 1uLL, v8, v9);
  }
  return 3221225626LL;
}
