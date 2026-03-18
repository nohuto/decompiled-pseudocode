/*
 * XREFs of ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00582F4
 * Callers:
 *     GetWindowsDirectoryDevicePath @ 0x1C00581B0 (GetWindowsDirectoryDevicePath.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 */

__int64 __fastcall GetSymbolicLink(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  WCHAR *v4; // rdi
  NTSTATUS v5; // ebx
  struct _UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationStringa; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *LinkHandle; // [rsp+A0h] [rbp+30h] BYREF

  LinkHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationStringa = 0LL;
  LinkTarget = 0LL;
  v4 = (WCHAR *)Win32AllocPool(520LL, 1651209045LL);
  if ( !v4 )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationStringa, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationStringa;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenSymbolicLinkObject(&LinkHandle, 0x80000000, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    LinkTarget.Buffer = v4;
    *(_DWORD *)&LinkTarget.Length = 34078720;
    v5 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    ZwClose(LinkHandle);
    if ( v5 >= 0 )
      RtlCopyUnicodeString(DestinationString, &LinkTarget);
  }
  Win32FreePool(v4);
  return (unsigned int)v5;
}
