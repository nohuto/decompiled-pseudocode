/*
 * XREFs of _WerpCreateCompletionEvent@4 @ 0x4B33AF8E
 * Callers:
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 * Callees:
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 */

NTSTATUS __thiscall WerpCreateCompletionEvent(PHANDLE EventHandle)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+0h] [ebp-18h] BYREF

  if ( !EventHandle )
    return -1073741585;
  ObjectAttributes.Length = 24;
  *EventHandle = 0;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.ObjectName = 0;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  ObjectAttributes.Attributes = 2;
  return NtCreateEvent(EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
}
