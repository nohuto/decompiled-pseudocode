/*
 * XREFs of sub_180081898 @ 0x180081898
 * Callers:
 *     sub_1800817D0 @ 0x1800817D0 (sub_1800817D0.c)
 * Callees:
 *     sub_18003BCC0 @ 0x18003BCC0 (sub_18003BCC0.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18003BFA8 @ 0x18003BFA8 (sub_18003BFA8.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 */

__int64 __fastcall sub_180081898(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _QWORD *v5; // r8
  int v7; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    v8 = sub_18003CF94(a1, 2, v5);
    v9 = v8;
    if ( !v8 )
      break;
    v7 = sub_18003BFA8((__int64)&v11, (__int64)v8);
    if ( v7 < 0 )
      goto LABEL_6;
    v5 = v9;
    a1 = *(_QWORD *)(*(_QWORD *)(v9[97] + 88LL) + 88LL);
  }
  v7 = 0;
LABEL_6:
  if ( v7 >= 0 )
  {
    sub_18003BD44((__int64)&v11, 1u, 4352, a4, a5, 1);
    v7 = 0;
  }
  sub_18003BCC0((__int64)&v11);
  return (unsigned int)v7;
}
