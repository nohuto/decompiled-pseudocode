/*
 * XREFs of sub_180042798 @ 0x180042798
 * Callers:
 *     sub_18003FC80 @ 0x18003FC80 (sub_18003FC80.c)
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 *     sub_180040C3C @ 0x180040C3C (sub_180040C3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180042798(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 locale; // r15
  int v11; // ebx
  unsigned __int16 v12; // ax

  v6 = 0;
  v7 = 0LL;
  locale = o__create_locale(0LL, "C");
  do
  {
    if ( (unsigned int)v7 >= a2 )
      break;
    if ( (unsigned int)v7 >= a4 )
      break;
    v11 = (unsigned __int16)o__towlower_l(*(unsigned __int16 *)(a1 + 2 * v7), locale);
    v12 = o__towlower_l(*(unsigned __int16 *)(a3 + 2 * v7), locale);
    v7 = (unsigned int)(v7 + 1);
    v6 = v11 - v12;
  }
  while ( !v6 );
  if ( !v6 )
  {
    if ( (_DWORD)v7 == a2 )
    {
      if ( (_DWORD)v7 != a4 )
        v6 = -1;
    }
    else
    {
      v6 = 1;
    }
  }
  o__free_locale(locale);
  return v6;
}
