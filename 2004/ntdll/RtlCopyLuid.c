/*
 * XREFs of RtlCopyLuid @ 0x1800790D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlCopyLuid(PLUID DestinationLuid, PLUID SourceLuid)
{
  *DestinationLuid = *SourceLuid;
}
