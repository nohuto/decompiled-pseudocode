/*
 * XREFs of MiObtainPoolCharges @ 0x140336B04
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x1402CB7D8 (MiInitializePoolCommitPacket.c)
 *     MiGetPoolPages @ 0x140333D10 (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_140C529A8 )
    return 1LL;
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, a1, 0LL, 2LL) >= 0 )
  {
    v4 = &qword_140C4EE20;
    if ( a2 )
      v4 = &qword_140C4EE28;
    _InterlockedExchangeAdd64(v4, a1);
    return 1LL;
  }
  return 0LL;
}
