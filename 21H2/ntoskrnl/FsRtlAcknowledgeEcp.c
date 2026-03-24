/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x140699750
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140353D20 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x140359A7C (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
