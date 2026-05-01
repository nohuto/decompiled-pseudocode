/*
 * XREFs of sub_18003BC18 @ 0x18003BC18
 * Callers:
 *     sub_18003BAA0 @ 0x18003BAA0 (sub_18003BAA0.c)
 * Callees:
 *     sub_18003BCC0 @ 0x18003BCC0 (sub_18003BCC0.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18003BF7C @ 0x18003BF7C (sub_18003BF7C.c)
 *     sub_18003BFA8 @ 0x18003BFA8 (sub_18003BFA8.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 */

__int64 __fastcall sub_18003BC18(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 i; // rax
  __int64 v7; // rdi
  int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  for ( i = sub_18003CF94(a1, 1LL, 0LL); ; i = sub_18003BF7C(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    v8 = sub_18003BFA8(&v10, i);
    if ( v8 < 0 )
      goto LABEL_6;
  }
  v8 = 0;
LABEL_6:
  if ( v8 >= 0 )
  {
    sub_18003BD44((unsigned int)&v10, 1, 4352, a4, a5, 1);
    v8 = 0;
  }
  sub_18003BCC0(&v10);
  return (unsigned int)v8;
}
