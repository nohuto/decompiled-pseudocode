/*
 * XREFs of IoDeleteSymbolicLink @ 0x14075D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1403F4510 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1403F48D0 (ZwOpenSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName)
{
  int TemporaryObject; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  LinkHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = SymbolicLinkName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  TemporaryObject = ZwOpenSymbolicLinkObject(&LinkHandle, 0x10000u, &ObjectAttributes);
  if ( TemporaryObject >= 0 )
  {
    TemporaryObject = ZwMakeTemporaryObject(LinkHandle);
    if ( TemporaryObject >= 0 )
      ZwClose(LinkHandle);
  }
  return TemporaryObject;
}
