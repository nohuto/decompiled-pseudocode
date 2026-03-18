/*
 * XREFs of IoCreateSymbolicLink @ 0x140759470
 * Callers:
 *     IopCreateArcName @ 0x14076B368 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140A53AE0 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140A659B0 (WmipDriverEntry.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403F3B30 (ZwCreateSymbolicLinkObject.c)
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
