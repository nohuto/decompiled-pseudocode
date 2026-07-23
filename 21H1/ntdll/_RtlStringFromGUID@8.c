/*
 * XREFs of _RtlStringFromGUID@8 @ 0x4B2ED160
 * Callers:
 *     <none>
 * Callees:
 *     _RtlStringFromGUIDEx@12 @ 0x4B2ED180 (_RtlStringFromGUIDEx@12.c)
 */

NTSTATUS __cdecl RtlStringFromGUID(PGUID Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx(Guid, GuidString, 1u);
}
