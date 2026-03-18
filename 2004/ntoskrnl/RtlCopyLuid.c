/*
 * XREFs of RtlCopyLuid @ 0x1407588C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlCopyLuid(PLUID DestinationLuid, PLUID SourceLuid)
{
  *DestinationLuid = *SourceLuid;
}
