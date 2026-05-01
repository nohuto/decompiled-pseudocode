/*
 * XREFs of sub_1800640A4 @ 0x1800640A4
 * Callers:
 *     sub_180066090 @ 0x180066090 (sub_180066090.c)
 * Callees:
 *     sub_180065FA8 @ 0x180065FA8 (sub_180065FA8.c)
 */

char *__fastcall sub_1800640A4(char *Destination, char *a2, _WORD *a3, _QWORD *a4)
{
  rsize_t v6; // rax
  const void *v7; // r8
  __int64 v8; // r10
  rsize_t v9; // r10
  rsize_t v10; // rsi

  if ( Destination != a2 && a3 && *a3 && (v6 = sub_180065FA8(a3), v9 = v8 - (_QWORD)Destination, v10 = v6, v9 >= v6) )
  {
    memcpy_s(Destination, v9, v7, v6);
    if ( a4 )
      *a4 = Destination;
    return &Destination[v10];
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return Destination;
  }
}
