/*
 * XREFs of sub_1800220B0 @ 0x1800220B0
 * Callers:
 *     sub_180021E3C @ 0x180021E3C (sub_180021E3C.c)
 * Callees:
 *     sub_180022584 @ 0x180022584 (sub_180022584.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

int __fastcall sub_1800220B0(__int64 a1, LPVOID *a2)
{
  int result; // eax
  __int64 v4; // rcx
  bool v5; // zf

  result = qword_18004FF68;
  v4 = qword_18004FF68;
  if ( qword_18004FF68 )
  {
    while ( *(LPVOID **)(v4 + 16) != a2 )
    {
      v4 = *(_QWORD *)v4;
      if ( !v4 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v4 = 0LL;
  }
  if ( v4 )
  {
    if ( v4 == qword_18004FF68 )
      qword_18004FF68 = *(_QWORD *)v4;
    else
      **(_QWORD **)(v4 + 8) = *(_QWORD *)v4;
    if ( v4 == (_QWORD)xmmword_18004FF70 )
      *(_QWORD *)&xmmword_18004FF70 = *(_QWORD *)(v4 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v4 + 8LL) = *(_QWORD *)(v4 + 8);
    result = DWORD2(xmmword_18004FF80);
    *(_QWORD *)v4 = *((_QWORD *)&xmmword_18004FF80 + 1);
    v5 = (*((_QWORD *)&xmmword_18004FF70 + 1))-- == 1LL;
    *((_QWORD *)&xmmword_18004FF80 + 1) = v4;
    if ( v5 )
      result = sub_180022584(&qword_18004FF68);
    if ( a2 )
    {
      if ( *a2 )
      {
        CoTaskMemFree(*a2);
        *a2 = 0LL;
      }
      return sub_180039D98(a2);
    }
  }
  return result;
}
