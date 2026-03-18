/*
 * XREFs of ?CreateShutdownEvent@@YGJPBGKPAPAX@Z @ 0xD5150
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __userpurge CreateShutdownEvent@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        PHANDLE EventHandle,
        unsigned int a4,
        void **a5)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-22Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-214h] BYREF
  WCHAR SourceString[258]; // [esp+30h] [ebp-20Ch] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlStringCchPrintfW(SourceString, 0x100u, L"\\Sessions\\%ld\\BaseNamedObjects\\%ws", _gSessionId, a2);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = a1 | 0x240;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  return ZwCreateEvent(EventHandle, (ACCESS_MASK)&loc_1F0002 + 1, &ObjectAttributes, SynchronizationEvent, 0);
}
