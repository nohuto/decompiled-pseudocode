/*
 * XREFs of _RtlIsPartialPlaceholder@8 @ 0x4B2EAAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsPartialPlaceholder(ULONG FileAttributes, ULONG ReparseTag)
{
  return (FileAttributes & 0x440000) != 0;
}
