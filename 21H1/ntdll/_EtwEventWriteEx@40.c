/*
 * XREFs of _EtwEventWriteEx@40 @ 0x4B2ABAF0
 * Callers:
 *     <none>
 * Callees:
 *     _EtwpEventWriteFull@44 @ 0x4B2E3CCF (_EtwpEventWriteFull@44.c)
 */

ULONG __cdecl EtwEventWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwpEventWriteFull(
           RegHandle,
           SWORD2(RegHandle),
           Filter,
           SWORD2(Filter),
           0,
           ActivityId,
           RelatedActivityId,
           UserDataCount,
           UserData);
}
