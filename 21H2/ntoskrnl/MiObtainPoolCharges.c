/*
 * XREFs of MiObtainPoolCharges @ 0x14026A718
 * Callers:
 *     MiGetPoolPages @ 0x140284A20 (MiGetPoolPages.c)
 *     MiInitializePoolCommitPacket @ 0x1403523C0 (MiInitializePoolCommitPacket.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_140C593D8 )
    return 1LL;
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, a1, 0LL, 2LL) >= 0 )
  {
    v4 = &qword_140C53518;
    if ( a2 )
      v4 = &qword_140C53520;
    _InterlockedExchangeAdd64(v4, a1);
    return 1LL;
  }
  return 0LL;
}
