/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1406EDC64
 * Callers:
 *     IoQueryInformationByName @ 0x1405CE2F0 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x1407682B0 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x14066E1F0 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  struct _ECP_LIST *v2; // rcx

  v2 = *(struct _ECP_LIST **)(a1 + 168);
  if ( v2 )
  {
    if ( FsRtlpCleanupEcps(v2) )
      *(_QWORD *)(a1 + 168) = 0LL;
  }
}
