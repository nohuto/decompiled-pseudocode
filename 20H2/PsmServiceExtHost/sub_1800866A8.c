/*
 * XREFs of sub_1800866A8 @ 0x1800866A8
 * Callers:
 *     sub_18003FFFC @ 0x18003FFFC (sub_18003FFFC.c)
 * Callees:
 *     sub_18004306C @ 0x18004306C (sub_18004306C.c)
 *     NtClose @ 0x18004547C (NtClose.c)
 *     sub_180086710 @ 0x180086710 (sub_180086710.c)
 */

__int64 __fastcall sub_1800866A8(unsigned __int16 *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v3 = sub_18004306C(a1, &Handle);
  if ( v3 >= 0 )
  {
    v3 = sub_180086710(Handle, a2);
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
