/*
 * XREFs of _EtwEventWriteFull@32 @ 0x4B3803E0
 * Callers:
 *     <none>
 * Callees:
 *     _EtwpEventWriteFull@44 @ 0x4B2E3CCF (_EtwpEventWriteFull@44.c)
 */

ULONG __cdecl EtwEventWriteFull(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        USHORT EventProperty,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwpEventWriteFull(
           (int *)EventDescriptor,
           0,
           RegHandle,
           SWORD2(RegHandle),
           0,
           0,
           EventProperty,
           (_GUID *)ActivityId,
           (int *)RelatedActivityId,
           UserDataCount,
           (int)UserData);
}
