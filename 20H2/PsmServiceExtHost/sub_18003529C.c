/*
 * XREFs of sub_18003529C @ 0x18003529C
 * Callers:
 *     sub_180022B60 @ 0x180022B60 (sub_180022B60.c)
 * Callees:
 *     sub_180012FA8 @ 0x180012FA8 (sub_180012FA8.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180035368 @ 0x180035368 (sub_180035368.c)
 */

__int64 __fastcall sub_18003529C(__int64 a1, __int64 a2, HANDLE **a3)
{
  int v4; // eax
  __int64 v5; // rdx
  HANDLE *v7; // rbx
  int v8; // edi
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-8h] BYREF
  char v12; // [rsp+68h] [rbp+28h] BYREF
  HANDLE *v13; // [rsp+78h] [rbp+38h] BYREF

  Handle = 0LL;
  v11 = 0LL;
  v4 = a2;
  v5 = *(_QWORD *)(a2 + 544);
  v7 = 0LL;
  v13 = 0LL;
  v8 = sub_180035368(v4, v5, (unsigned int)&Handle, (unsigned int)&v11, (__int64)&v12);
  if ( v8 >= 0 )
  {
    v8 = sub_180012FA8(a1 + 312, (__int64)Handle, (__int64)&v13);
    if ( v8 < 0 )
    {
      v7 = v13;
    }
    else
    {
      v8 = 0;
      *a3 = v13;
    }
  }
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(Handle);
  if ( (((unsigned __int64)v11 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v11);
  if ( v7 )
    sub_180026650(v7);
  return (unsigned int)v8;
}
