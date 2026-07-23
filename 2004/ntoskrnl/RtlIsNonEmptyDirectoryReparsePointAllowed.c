/*
 * XREFs of RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1403573B0
 * Callers:
 *     FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x140357390 (FsRtlIsNonEmptyDirectoryReparsePointAllowed.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsNonEmptyDirectoryReparsePointAllowed(ULONG ReparseTag)
{
  return (ReparseTag & 0x10000000) != 0 || ReparseTag == -2147483624;
}
