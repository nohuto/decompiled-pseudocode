/*
 * XREFs of ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C000E9D8
 * Callers:
 *     xxxCreateWindowStation @ 0x1C000CF8C (xxxCreateWindowStation.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00122C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

int __fastcall CreateDesktopNotificationEvent(void *a1)
{
  int result; // eax
  WCHAR *v3; // rdx
  NTSTATUS v4; // ebx
  void *DirectoryHandle; // [rsp+48h] [rbp-C0h] BYREF
  void *EventHandle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  WCHAR SourceString[256]; // [rsp+A8h] [rbp-60h] BYREF

  EventHandle = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  DirectoryHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( gbNonServiceSession )
  {
    result = RtlStringCchPrintfW(SourceString, 0x100uLL, L"\\Sessions\\%ld\\BaseNamedObjects", (unsigned int)gSessionId);
    if ( result < 0 )
      return result;
    v3 = SourceString;
  }
  else
  {
    v3 = L"\\BaseNamedObjects";
  }
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v3);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"WinSta0_DesktopSwitch");
    ObjectAttributes.SecurityDescriptor = a1;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.Attributes = 640;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v4 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    ZwClose(DirectoryHandle);
    if ( v4 >= 0 )
    {
      DestinationString[0] = 0LL;
      v4 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, DestinationString, 0LL);
      gpEventSwitchDesktop = DestinationString[0];
      if ( v4 >= 0 )
      {
        KeAttachProcess(gpepCSRSS);
        v4 = ObOpenObjectByPointer(gpEventSwitchDesktop, 0, 0LL, 0x1F0003u, 0LL, 0, &ghEventSwitchDesktop);
        KeDetachProcess();
      }
      ZwClose(EventHandle);
    }
  }
  return v4;
}
