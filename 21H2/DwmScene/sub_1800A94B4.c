/*
 * XREFs of sub_1800A94B4 @ 0x1800A94B4
 * Callers:
 *     sub_1800F6F94 @ 0x1800F6F94 (sub_1800F6F94.c)
 * Callees:
 *     sub_1800F46B8 @ 0x1800F46B8 (sub_1800F46B8.c)
 */

__int64 __fastcall sub_1800A94B4(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rsi
  unsigned int i; // edi
  __int64 result; // rax

  v4 = (_QWORD *)(a1 + 256);
  for ( i = 0; i < 0xA; ++i )
  {
    if ( (i & 0xFFFFFFFC) != 0 || i == 1 )
    {
      if ( *v4 )
        result = sub_1800F46B8(*v4, a2, a3);
    }
    v4 += 2;
  }
  return result;
}
