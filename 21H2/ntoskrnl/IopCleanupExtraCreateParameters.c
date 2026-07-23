/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1406229B4
 * Callers:
 *     IoQueryInformationByName @ 0x1405D8B10 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x14077CE10 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x14069C370 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 168) )
  {
    if ( (unsigned __int8)FsRtlpCleanupEcps() )
      *(_QWORD *)(a1 + 168) = 0LL;
  }
}
