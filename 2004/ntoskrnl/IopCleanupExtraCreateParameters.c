/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1407115F4
 * Callers:
 *     IoQueryInformationByName @ 0x1405CF6C0 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x14076A690 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x140616C40 (FsRtlpCleanupEcps.c)
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
