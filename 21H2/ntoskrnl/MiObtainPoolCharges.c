/*
 * XREFs of MiObtainPoolCharges @ 0x140296F74
 * Callers:
 *     MiGetPoolPages @ 0x1402629AC (MiGetPoolPages.c)
 *     MiInitializePoolCommitPacket @ 0x140316928 (MiInitializePoolCommitPacket.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_140C52B68 )
    return 1LL;
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, a1, 0LL, 2LL) >= 0 )
  {
    v4 = &qword_140C4EFE0;
    if ( a2 )
      v4 = &qword_140C4EFE8;
    _InterlockedExchangeAdd64(v4, a1);
    return 1LL;
  }
  return 0LL;
}
