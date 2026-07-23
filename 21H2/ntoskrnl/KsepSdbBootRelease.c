/*
 * XREFs of KsepSdbBootRelease @ 0x1407BD498
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x1407BD3F0 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140A73134 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x140756188 (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbBootRelease(__int64 *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *a1;
  if ( v2 )
  {
    SdbReleaseDatabase(v2);
    *a1 = 0LL;
  }
  v3 = (void *)a1[1];
  if ( v3 )
  {
    KsepPoolFreePaged(v3);
    a1[1] = 0LL;
  }
}
