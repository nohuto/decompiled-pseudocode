/*
 * XREFs of ?vDetermineDrawVertex@WIDEPENOBJ@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@@@Z @ 0x1C01340D8
 * Callers:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0134060 (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDEPENOBJ::vDetermineDrawVertex(WIDEPENOBJ *this, struct EVECTORFX *a2, struct LINEDATA *a3)
{
  _DWORD *v4; // r9
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r11
  char *v7; // rdi
  unsigned int v8; // ecx
  char *j; // rbx
  char *v10; // r8
  unsigned __int64 v11; // r9
  _DWORD *i; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8

  v4 = *(_DWORD **)(*((_QWORD *)this + 1) + 32LL);
  *((_QWORD *)a3 + 1) = v4;
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) )
  {
    v5 = *(int *)a2 * (__int64)(v4[9] - v4[7]) - *((int *)a2 + 1) * (__int64)(v4[8] - v4[6]);
    *((_QWORD *)a3 + 3) = v5;
    *((_QWORD *)a3 + 4) = -(__int64)v5;
    v6 = v5 >> 63;
  }
  else
  {
    for ( i = v4; ; v4 = i )
    {
      v13 = *(int *)a2 * (__int64)(i[9] - i[7]) - *((int *)a2 + 1) * (__int64)(i[8] - i[6]);
      *((_QWORD *)a3 + 3) = v13;
      LODWORD(v6) = v13 >> 63;
      v14 = *(int *)a2 * (__int64)(i[2 * (i[5] - 2) + 9] - i[2 * (i[5] - 2) + 7])
          - *((int *)a2 + 1) * (__int64)(i[2 * (i[5] - 2) + 8] - i[2 * (i[5] - 2) + 6]);
      *((_QWORD *)a3 + 4) = v14;
      if ( (unsigned int)v6 != v14 >> 63 )
        break;
      i = *(_DWORD **)i;
      if ( !i )
        break;
      *((_QWORD *)a3 + 1) = i;
    }
  }
  v7 = (char *)(v4 + 6);
  v8 = *(_DWORD *)a3 | 1;
  if ( !(_DWORD)v6 )
    v8 = *(_DWORD *)a3 & 0xFFFFFFFE;
  *(_DWORD *)a3 = v8;
  for ( j = (char *)&v4[2 * (v4[5] - 2) + 6]; ; v7 += 8 * ((j - v7) >> 4) )
  {
    while ( 1 )
    {
      v10 = &v7[8 * ((j - v7) >> 4)];
      v11 = *(int *)a2 * (__int64)(*((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1))
          - *((int *)a2 + 1) * (__int64)(*((_DWORD *)v10 + 2) - *(_DWORD *)v10);
      if ( v11 >> 63 == (_DWORD)v6 )
        break;
      *((_QWORD *)a3 + 4) = v11;
      if ( v10 == v7 + 8 )
        goto LABEL_8;
      j = &v7[8 * ((j - v7) >> 4)];
    }
    *((_QWORD *)a3 + 3) = v11;
    if ( j == v10 + 8 )
      break;
  }
  v10 = j;
LABEL_8:
  *((_QWORD *)a3 + 2) = v10;
  *((_QWORD *)a3 + 3) = abs64(*((_QWORD *)a3 + 3));
  *((_QWORD *)a3 + 4) = abs64(*((_QWORD *)a3 + 4));
}
