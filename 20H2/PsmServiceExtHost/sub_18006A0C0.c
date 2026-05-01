/*
 * XREFs of sub_18006A0C0 @ 0x18006A0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009F08 @ 0x180009F08 (sub_180009F08.c)
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 */

__int64 __fastcall sub_18006A0C0(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  __int64 v6; // rcx
  int v7; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF

  Handle = 0LL;
  v7 = sub_180009F08(&Handle, 0x1000u, a2);
  if ( v7 >= 0 )
    v7 = sub_1800695BC(v6, Handle, a3, a4);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
