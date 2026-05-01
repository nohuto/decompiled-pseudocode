/*
 * XREFs of sub_18006A010 @ 0x18006A010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009F08 @ 0x180009F08 (sub_180009F08.c)
 *     sub_1800692E4 @ 0x1800692E4 (sub_1800692E4.c)
 */

__int64 __fastcall sub_18006A010(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, int a5)
{
  int v7; // ebx
  __int64 v8; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-10h] BYREF

  Handle = 0LL;
  v11 = 0LL;
  v7 = sub_180009F08(&Handle, 0x1000u, a2);
  if ( v7 >= 0 )
  {
    v7 = sub_180009F08(&v11, 0x1000u, a4);
    if ( v7 >= 0 )
      v7 = sub_1800692E4(v8, Handle, a3, v11, a5);
  }
  if ( Handle )
    NtClose(Handle);
  if ( v11 )
    NtClose(v11);
  return (unsigned int)v7;
}
