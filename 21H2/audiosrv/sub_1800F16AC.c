/*
 * XREFs of sub_1800F16AC @ 0x1800F16AC
 * Callers:
 *     sub_1800F08F0 @ 0x1800F08F0 (sub_1800F08F0.c)
 * Callees:
 *     sub_1800EFEC4 @ 0x1800EFEC4 (sub_1800EFEC4.c)
 *     sub_1800F0804 @ 0x1800F0804 (sub_1800F0804.c)
 */

void ***__fastcall sub_1800F16AC(__int64 a1, void ***a2, void **a3, void **a4)
{
  void **v4; // rbp
  void **v5; // rsi
  void **v9; // rdi
  void ***result; // rax

  v4 = *(void ***)(a1 + 8);
  v5 = a4;
  v9 = a3;
  if ( a4 != v4 )
  {
    do
      sub_1800F0804(v9++, v5++);
    while ( v5 != v4 );
    v4 = *(void ***)(a1 + 8);
  }
  sub_1800EFEC4(v9, v4);
  result = a2;
  *a2 = a3;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
