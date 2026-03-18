/*
 * XREFs of sub_1C001C87C @ 0x1C001C87C
 * Callers:
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 * Callees:
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C001C87C(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  int v5; // eax
  int v6; // r10d
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  sub_1C000FD80(*(_QWORD *)(a2 + 16), 4, 1666667569, 0LL, *(unsigned __int16 *)(a2 + 4));
  v5 = sub_1C00038F0(a1, (void *)(a2 + 768), 5000, 1667323697, (unsigned int)v4 & v7, v4 & v8);
  sub_1C000FD80(*(_QWORD *)(a2 + 16), 4, 1666667570, v5, *(unsigned __int16 *)(a2 + 4));
  if ( v6 == 258 )
    sub_1C000FD80(a1, 4, 1953448769, *(unsigned __int16 *)(a2 + 4), a2);
}
