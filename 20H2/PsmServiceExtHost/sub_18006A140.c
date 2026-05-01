/*
 * XREFs of sub_18006A140 @ 0x18006A140
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009F08 @ 0x180009F08 (sub_180009F08.c)
 *     sub_180069868 @ 0x180069868 (sub_180069868.c)
 */

__int64 __fastcall sub_18006A140(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v3 = sub_180009F08(&Handle, 0x1000u, a2);
  if ( v3 >= 0 )
    v3 = sub_180069868(v2, Handle);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
