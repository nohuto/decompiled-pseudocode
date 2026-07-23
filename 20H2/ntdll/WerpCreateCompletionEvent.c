/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800DDC70
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCDC0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD290 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009D9B0 (ZwCreateEvent.c)
 */

NTSTATUS __fastcall WerpCreateCompletionEvent(HANDLE *a1)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( !a1 )
    return -1073741585;
  *a1 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  return ZwCreateEvent(a1, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
}
