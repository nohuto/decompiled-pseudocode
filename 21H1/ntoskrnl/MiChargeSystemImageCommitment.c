/*
 * XREFs of MiChargeSystemImageCommitment @ 0x140747544
 * Callers:
 *     MiMapSystemImage @ 0x140745AB0 (MiMapSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiReleaseNonPagedResources @ 0x1402FA2F8 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // r8d
  unsigned __int64 v3; // rdx

  v1 = MiSectionControlArea(a1);
  v3 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( v2 != 1 )
  {
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, v3);
    return 0LL;
  }
  if ( (int)MiAcquireNonPagedResources((__int64)&MiSystemPartition, v3, 0LL, 0) >= 0 )
    return 0LL;
  return 3221225626LL;
}
