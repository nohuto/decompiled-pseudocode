/*
 * XREFs of sub_1800AA2C4 @ 0x1800AA2C4
 * Callers:
 *     sub_1800A5BE8 @ 0x1800A5BE8 (sub_1800A5BE8.c)
 * Callees:
 *     sub_1800F53F4 @ 0x1800F53F4 (sub_1800F53F4.c)
 */

__int64 __fastcall sub_1800AA2C4(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 256);
  v2 = (_QWORD *)(a1 + 416);
  while ( v1 != v2 )
  {
    if ( *v1 )
      result = sub_1800F53F4();
    v1 += 2;
  }
  return result;
}
