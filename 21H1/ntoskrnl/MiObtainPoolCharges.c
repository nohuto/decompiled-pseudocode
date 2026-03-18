/*
 * XREFs of MiObtainPoolCharges @ 0x1403288B8
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x1402B1BF8 (MiInitializePoolCommitPacket.c)
 *     MiGetPoolPages @ 0x140326CB4 (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_140C52A28 )
    return 1LL;
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, a1, 0LL, 2LL) >= 0 )
  {
    v4 = &qword_140C4EEE0;
    if ( a2 )
      v4 = &qword_140C4EEE8;
    _InterlockedExchangeAdd64(v4, a1);
    return 1LL;
  }
  return 0LL;
}
