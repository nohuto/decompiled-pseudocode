/*
 * XREFs of IoCreateSymbolicLink @ 0x140769BE0
 * Callers:
 *     IopCreateArcName @ 0x14077C538 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140A59EDC (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140A6C660 (WmipDriverEntry.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F9990 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  NTSTATUS SymbolicLinkObject; // ebx
  HANDLE Handle; // [rsp+60h] [rbp+10h] BYREF

  Handle = 0LL;
  SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
  if ( SymbolicLinkObject >= 0 )
    ZwClose(Handle);
  return SymbolicLinkObject;
}
