/*
 * XREFs of _RtlIsCloudFilesPlaceholder@8 @ 0x4B2EC0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsCloudFilesPlaceholder(ULONG FileAttributes, ULONG ReparseTag)
{
  return (FileAttributes & 0x400) != 0 && (ReparseTag & 0xFFFF0FFF) == 0x9000001A;
}
