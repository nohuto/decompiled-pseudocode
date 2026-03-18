/*
 * XREFs of IoCreateUnprotectedSymbolicLink @ 0x14088F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F3B30 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateUnprotectedSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  NTSTATUS SymbolicLinkObject; // ebx
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  Handle = 0LL;
  SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
  if ( SymbolicLinkObject >= 0 )
    ZwClose(Handle);
  return SymbolicLinkObject;
}
