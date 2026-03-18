/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1405FD2A4
 * Callers:
 *     IoQueryInformationByName @ 0x1405D5B70 (IoQueryInformationByName.c)
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
 *     NtDeleteFile @ 0x140778CA0 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x1405FD2E0 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 168) )
  {
    if ( (unsigned __int8)FsRtlpCleanupEcps() )
      *(_QWORD *)(a1 + 168) = 0LL;
  }
}
