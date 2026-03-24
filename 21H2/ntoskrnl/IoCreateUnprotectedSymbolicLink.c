/*
 * XREFs of IoCreateUnprotectedSymbolicLink @ 0x140893AC0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403FBBC0 (ZwCreateSymbolicLinkObject.c)
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
