/*
 * XREFs of sub_1800828B4 @ 0x1800828B4
 * Callers:
 *     sub_180081F90 @ 0x180081F90 (sub_180081F90.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180124018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall sub_1800828B4(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  void *v5; // rax

  v2 = a2;
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL || a2 <= 0 )
  {
LABEL_6:
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  else
  {
    v4 = a2;
    while ( 1 )
    {
      v5 = operator new(16 * v4, (const struct std::nothrow_t *)&unk_1801DE028);
      if ( v5 )
        break;
      v4 /= 2LL;
      v2 = v4;
      if ( v4 <= 0 )
        goto LABEL_6;
    }
    *a1 = v5;
    a1[1] = v2;
  }
  return a1;
}
