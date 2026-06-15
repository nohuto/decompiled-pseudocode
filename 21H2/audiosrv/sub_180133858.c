/*
 * XREFs of sub_180133858 @ 0x180133858
 * Callers:
 *     sub_180136D4C @ 0x180136D4C (sub_180136D4C.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_180133858(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5)
{
  _WORD *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v6 = *a5;
  if ( *a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v6 = &unk_18015C744;
    v8 = 2;
  }
  v11 = v6;
  v12 = v8;
  v13 = 0;
  return sub_180109634((__int64)&dword_18019C4F0, a2, 0LL, 0LL, 3u, &v10);
}
