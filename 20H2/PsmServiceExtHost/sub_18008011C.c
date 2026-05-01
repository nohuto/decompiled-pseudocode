/*
 * XREFs of sub_18008011C @ 0x18008011C
 * Callers:
 *     sub_18007B468 @ 0x18007B468 (sub_18007B468.c)
 *     sub_18007B5D8 @ 0x18007B5D8 (sub_18007B5D8.c)
 *     sub_1800807E4 @ 0x1800807E4 (sub_1800807E4.c)
 * Callees:
 *     sub_18003BCC0 @ 0x18003BCC0 (sub_18003BCC0.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18003BFA8 @ 0x18003BFA8 (sub_18003BFA8.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 */

__int64 __fastcall sub_18008011C(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  _QWORD *v8; // r8
  int v9; // ebx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    v10 = sub_18003CF94(a1, 3, v8);
    v11 = v10;
    if ( !v10 )
      break;
    v9 = sub_18003BFA8((__int64)&v13, (__int64)v10);
    if ( v9 < 0 )
      goto LABEL_6;
    v8 = v11;
    a1 = *(_QWORD *)(v11[97] + 88LL);
  }
  v9 = 0;
LABEL_6:
  if ( v9 >= 0 )
  {
    sub_18003BD44((__int64)&v13, a2, a3, a4, a5, 0);
    v9 = 0;
  }
  sub_18003BCC0((__int64)&v13);
  return (unsigned int)v9;
}
