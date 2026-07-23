/*
 * XREFs of IoCreateUnprotectedSymbolicLink @ 0x140893C20
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403FBDA0 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateUnprotectedSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int v2; // ebx
  OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  *(&v4.Length + 1) = 0;
  memset(&v4.Attributes + 1, 0, 20);
  Handle = 0LL;
  v4.RootDirectory = 0LL;
  v4.ObjectName = SymbolicLinkName;
  v4.Length = 48;
  v4.Attributes = 592;
  v2 = ZwCreateSymbolicLinkObject(&Handle, 0xF0001u, &v4, DeviceName);
  if ( v2 >= 0 )
    ZwClose(Handle);
  return v2;
}
