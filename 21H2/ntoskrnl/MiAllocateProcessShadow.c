/*
 * XREFs of MiAllocateProcessShadow @ 0x1407F1A10
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x14085D8F8 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     KeMakeUserDirectoryTableBase @ 0x14036C7EC (KeMakeUserDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x14036C804 (MiMarkPfnTradable.c)
 *     MiReleaseNonPagedResources @ 0x1405B2DA0 (MiReleaseNonPagedResources.c)
 *     MiAllocateTopLevelPage @ 0x1407F1AF8 (MiAllocateTopLevelPage.c)
 */

__int64 __fastcall MiAllocateProcessShadow(__int64 a1, unsigned int a2)
{
  __int64 ProcessPartition; // rsi
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  __int64 TopLevelPage; // rbx

  if ( (MiFlags & 0xC00000) == 0 )
    return 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  if ( (int)MiAcquireNonPagedResources(ProcessPartition, 1LL, 0LL, 0) >= 0 )
  {
    v5 = MiReservePtes((__int64)&qword_140C534C0, 1u);
    v6 = v5;
    if ( v5 )
    {
      TopLevelPage = MiAllocateTopLevelPage(a1, v5, a2);
      MiMarkPfnTradable(48 * TopLevelPage - 0x220000000000LL, 0);
      *(_QWORD *)(a1 + 904) = KeMakeUserDirectoryTableBase(TopLevelPage << 12);
      *(_QWORD *)(a1 + 1928) = (__int64)(v6 << 25) >> 16;
      return 0LL;
    }
    MiReleaseNonPagedResources(ProcessPartition, 1LL);
  }
  return 3221225626LL;
}
