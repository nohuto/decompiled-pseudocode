/*
 * XREFs of KsepSdbBootRelease @ 0x1407A6468
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x1407A63C0 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140A6E2DC (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14036E4B4 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x14073EAA8 (SdbReleaseDatabase.c)
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
