/*
 * XREFs of MiAllocateProcessShadow @ 0x1406F128C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1407B9344 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiReleaseNonPagedResources @ 0x1402FA2F8 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 *     KeMakeUserDirectoryTableBase @ 0x140329338 (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x14032A278 (MiMarkPfnTradable.c)
 *     MiAllocateTopLevelPage @ 0x1406F10F0 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1)
{
  __int64 ProcessPartition; // rsi
  ULONG_PTR v3; // rax
  ULONG_PTR v4; // rdi
  __int64 TopLevelPage; // rbx
  __int64 v6; // r8

  if ( (MiFlags & 0xC00000) == 0 )
    return 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1uLL, 0LL, 0) >= 0 )
  {
    v3 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
    v4 = v3;
    if ( v3 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v3);
      MiMarkPfnTradable(48 * TopLevelPage - 0x58000000000LL, 0LL, v6);
      *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1928) = (__int64)(v4 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources(ProcessPartition, 1LL);
  }
  return 3221225626LL;
}
