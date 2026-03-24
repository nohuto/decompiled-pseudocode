/*
 * XREFs of MiObtainPoolCharges @ 0x1402E5C24
 * Callers:
 *     MiGetPoolPages @ 0x140274A0C (MiGetPoolPages.c)
 *     MiInitializePoolCommitPacket @ 0x14030BBD8 (MiInitializePoolCommitPacket.c)
 *     MmAllocateIndependentPagesEx @ 0x140762A0C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x1402E5C90 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_140C52B28 )
    return 1LL;
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, a1, 0LL, 2LL) >= 0 )
  {
    v4 = &qword_140C4EFA0;
    if ( a2 )
      v4 = &qword_140C4EFA8;
    _InterlockedExchangeAdd64(v4, a1);
    return 1LL;
  }
  return 0LL;
}
