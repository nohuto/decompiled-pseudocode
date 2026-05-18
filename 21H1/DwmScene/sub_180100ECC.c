/*
 * XREFs of sub_180100ECC @ 0x180100ECC
 * Callers:
 *     sub_180100C74 @ 0x180100C74 (sub_180100C74.c)
 * Callees:
 *     sub_1801015BC @ 0x1801015BC (sub_1801015BC.c)
 */

void *__fastcall sub_180100ECC(char *Src, __int64 a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdi
  char *v12; // rdi

  v5 = a5;
  if ( a4 < a5 )
  {
    v9 = 2 * a4;
    do
    {
      v10 = v5 - a4;
      v11 = a4;
      if ( v10 < a4 )
        v11 = v10;
      v5 = v10 - v11;
      v12 = &Src[16 * v11 + 8 * v9];
      a3 = (void *)sub_1801015BC(Src);
      Src = v12;
    }
    while ( a4 < v5 );
  }
  return memmove(a3, Src, a2 - (_QWORD)Src);
}
