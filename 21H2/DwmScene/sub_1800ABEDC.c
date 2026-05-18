/*
 * XREFs of sub_1800ABEDC @ 0x1800ABEDC
 * Callers:
 *     sub_1800AD52C @ 0x1800AD52C (sub_1800AD52C.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1800ABEDC(char *a1, char *a2, __int64 a3)
{
  char *v4; // rax
  char *v5; // r9
  __int64 v6; // rdx
  signed __int64 v7; // r9
  unsigned __int16 v8; // r10
  int v9; // eax

  for ( ; a1 != a2; a1 += 32 )
  {
    v4 = (char *)a3;
    if ( *(_QWORD *)(a3 + 24) >= 8uLL )
      v4 = *(char **)a3;
    v5 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v5 = *(char **)a1;
    v6 = *((_QWORD *)a1 + 2);
    if ( v6 == *(_QWORD *)(a3 + 16) )
    {
      if ( v6 )
      {
        v7 = v5 - v4;
        while ( 1 )
        {
          v8 = *(_WORD *)&v4[v7];
          if ( v8 != *(_WORD *)v4 )
            break;
          v4 += 2;
          if ( !--v6 )
            goto LABEL_11;
        }
        v9 = v8 < *(_WORD *)v4 ? -1 : 1;
      }
      else
      {
LABEL_11:
        v9 = 0;
      }
      if ( !v9 )
        break;
    }
  }
  return a1;
}
