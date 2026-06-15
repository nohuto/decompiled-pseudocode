/*
 * XREFs of sub_18013A4D4 @ 0x18013A4D4
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_1800F2AF0 @ 0x1800F2AF0 (sub_1800F2AF0.c)
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 *     sub_18013909C @ 0x18013909C (sub_18013909C.c)
 * Callees:
 *     sub_1800C3630 @ 0x1800C3630 (sub_1800C3630.c)
 *     sub_180138FC8 @ 0x180138FC8 (sub_180138FC8.c)
 */

char __fastcall sub_18013A4D4(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  char result; // al

  v2 = 0LL;
  if ( !a2 )
  {
    if ( *a1 )
    {
      _o_free(*a1);
      *a1 = 0LL;
    }
    a1[2] = 0LL;
    goto LABEL_9;
  }
  if ( a2 <= a1[2] )
  {
    if ( a2 <= a1[1] )
    {
LABEL_8:
      v2 = a2;
LABEL_9:
      a1[1] = v2;
      return 1;
    }
LABEL_7:
    sub_180138FC8();
    goto LABEL_8;
  }
  result = sub_1800C3630((__int64)a1, a2);
  if ( result )
    goto LABEL_7;
  return result;
}
