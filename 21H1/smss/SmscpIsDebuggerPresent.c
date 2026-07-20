/*
 * XREFs of SmscpIsDebuggerPresent @ 0x140015A20
 * Callers:
 *     SmscpParseArgs @ 0x140005378 (SmscpParseArgs.c)
 * Callees:
 *     <none>
 */

__int64 SmscpIsDebuggerPresent()
{
  NTSTATUS v0; // ebx
  struct _IO_STATUS_BLOCK v2; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v3; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v3.Length = 48;
  v3.RootDirectory = 0LL;
  v3.Attributes = 64;
  v3.ObjectName = (PUNICODE_STRING)L":<";
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  v0 = NtOpenFile(&Handle, 0x120089u, &v3, &v2, 5u, 0x60u);
  if ( v0 >= 0 )
    NtClose(Handle);
  return (unsigned int)v0;
}
