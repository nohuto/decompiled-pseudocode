/*
 * XREFs of sub_1C0043FF0 @ 0x1C0043FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C003B9C4 @ 0x1C003B9C4 (sub_1C003B9C4.c)
 *     sub_1C0043DE0 @ 0x1C0043DE0 (sub_1C0043DE0.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 */

__int64 __fastcall sub_1C0043FF0(ULONG_PTR a1, int a2)
{
  __int64 v2; // rdi
  int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // r10d
  int v7; // edi
  __int64 v8; // rcx

  v2 = a2;
  sub_1C003B9C4(a1);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 2001882454, a1, 1LL);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), v5, v4, v2, v5);
  v7 = v2 - v6;
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( v7 != 1 )
      sub_1C002DC78(v8, a1);
    sub_1C0043DE0(v8, 4, 3);
    sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
  }
  else
  {
    sub_1C00446D4(a1, v6);
  }
  return 0LL;
}
