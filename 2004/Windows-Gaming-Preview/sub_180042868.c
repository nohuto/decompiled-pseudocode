/*
 * XREFs of sub_180042868 @ 0x180042868
 * Callers:
 *     sub_18003FC80 @ 0x18003FC80 (sub_18003FC80.c)
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_180042868(__int64 a1, unsigned int a2, _WORD *a3)
{
  __int64 v3; // rbp
  _WORD *v5; // rdi
  __int64 v7; // rsi
  __int64 locale; // r13
  unsigned int v9; // r15d
  bool v10; // cl
  __int16 v11; // bx
  __int16 v12; // ax

  v3 = -1LL;
  v5 = 0LL;
  do
    ++v3;
  while ( a3[v3] );
  LODWORD(v7) = 0;
  locale = o__create_locale(0LL, "C");
  if ( *a3 )
  {
    while ( (int)v3 - (int)v7 >= a2 )
    {
      v9 = 0;
      v10 = 1;
      do
      {
        if ( v9 >= a2 )
          break;
        v11 = o__towlower_l((unsigned __int16)a3[v9 + (unsigned int)v7], locale);
        v12 = o__towlower_l(*(unsigned __int16 *)(a1 + 2LL * v9), locale);
        v10 = v11 == v12;
        ++v9;
      }
      while ( v11 == v12 );
      v5 = 0LL;
      if ( v10 )
      {
        v5 = &a3[(unsigned int)v7];
        break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( !a3[v7] )
        break;
    }
  }
  o__free_locale(locale);
  return v5;
}
