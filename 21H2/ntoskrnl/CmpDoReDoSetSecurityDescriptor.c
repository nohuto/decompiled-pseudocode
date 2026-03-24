/*
 * XREFs of CmpDoReDoSetSecurityDescriptor @ 0x1408821DC
 * Callers:
 *     CmpDoReDoRecord @ 0x140881FB8 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x1403FD8C0 (ZwSetSecurityObject.c)
 *     CmpDoReOpenTransKey @ 0x1408822B0 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetSecurityDescriptor(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 0x40000LL, &Handle);
  if ( v3 >= 0 )
  {
    v3 = ZwSetSecurityObject(Handle, 4u, *(PSECURITY_DESCRIPTOR *)(a2 + 56));
    ZwClose(Handle);
  }
  return (unsigned int)v3;
}
