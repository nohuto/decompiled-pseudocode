/*
 * XREFs of sub_18007F780 @ 0x18007F780
 * Callers:
 *     sub_18007AF20 @ 0x18007AF20 (sub_18007AF20.c)
 * Callees:
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 *     sub_18003BCC0 @ 0x18003BCC0 (sub_18003BCC0.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18003BFA8 @ 0x18003BFA8 (sub_18003BFA8.c)
 */

__int64 __fastcall sub_18007F780(__int64 a1, __int64 a2, int a3)
{
  __int64 i; // rax
  int v5; // ebx
  _QWORD *v6; // rdi
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  for ( i = (__int64)sub_18001FD20(a1); ; i = sub_180020CC0(v6) )
  {
    v6 = (_QWORD *)i;
    if ( !i )
      break;
    v5 = sub_18003BFA8((__int64)&v8, i);
    if ( v5 < 0 )
      goto LABEL_6;
  }
  v5 = 0;
LABEL_6:
  if ( v5 >= 0 )
  {
    sub_18003BD44((__int64)&v8, 3u, a3, 0LL, 0xFA0u, 0);
    v5 = 0;
  }
  sub_18003BCC0((__int64)&v8);
  return (unsigned int)v5;
}
