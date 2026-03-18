/*
 * XREFs of ?CreateDesktopNotificationEvent@@YGJPAX@Z @ 0xEA3DE
 * Callers:
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall CreateDesktopNotificationEvent(void *this)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-234h] BYREF
  PVOID Object; // [esp+24h] [ebp-21Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-218h] BYREF
  void *EventHandle; // [esp+30h] [ebp-210h] BYREF
  void *DirectoryHandle; // [esp+34h] [ebp-20Ch] BYREF
  WCHAR SourceString[258]; // [esp+38h] [ebp-208h] BYREF

  EventHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  DirectoryHandle = 0;
  if ( _gbNonServiceSession )
  {
    result = RtlStringCchPrintfW(SourceString, 0x100u, L"\\Sessions\\%ld\\BaseNamedObjects", _gSessionId);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\BaseNamedObjects");
  }
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v3 = ZwOpenDirectoryObject(&DirectoryHandle, (ACCESS_MASK)&loc_2000F, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"WinSta0_DesktopSwitch");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.SecurityDescriptor = this;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 640;
    ObjectAttributes.SecurityQualityOfService = 0;
    v3 = ZwCreateEvent(&EventHandle, (ACCESS_MASK)&loc_1F0002 + 1, &ObjectAttributes, NotificationEvent, 0);
    ZwClose(DirectoryHandle);
    if ( v3 >= 0 )
    {
      Object = 0;
      v3 = ObReferenceObjectByHandle(
             EventHandle,
             (ACCESS_MASK)&loc_1F0002 + 1,
             (POBJECT_TYPE)ExEventObjectType,
             0,
             &Object,
             0);
      gpEventSwitchDesktop = Object;
      if ( v3 >= 0 )
      {
        KeAttachProcess((PRKPROCESS)_gpepCSRSS);
        v3 = ObOpenObjectByPointer(
               gpEventSwitchDesktop,
               0,
               0,
               (ACCESS_MASK)&loc_1F0002 + 1,
               0,
               0,
               &ghEventSwitchDesktop);
        KeDetachProcess();
      }
      ZwClose(EventHandle);
    }
  }
  return v3;
}
