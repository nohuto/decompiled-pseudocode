/*
 * XREFs of MiChargeSystemImageCommitment @ 0x14075ED24
 * Callers:
 *     MiMapSystemImage @ 0x14075D284 (MiMapSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x140217EF8 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rdx

  v1 = MiSectionControlArea(a1);
  v4 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( (_DWORD)v2 != 1 )
  {
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, v4, v2, v3);
    return 0LL;
  }
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, v4, 0LL, 0) >= 0 )
    return 0LL;
  return 3221225626LL;
}
