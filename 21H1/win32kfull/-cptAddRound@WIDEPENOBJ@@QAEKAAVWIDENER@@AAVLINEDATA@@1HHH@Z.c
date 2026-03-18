/*
 * XREFs of ?cptAddRound@WIDEPENOBJ@@QAEKAAVWIDENER@@AAVLINEDATA@@1HHH@Z @ 0x235DD7
 * Callers:
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 * Callees:
 *     ?bToLeftSide@LINEDATA@@QBEHXZ @ 0x235A82 (-bToLeftSide@LINEDATA@@QBEHXZ.c)
 *     ?vAddLeftNice@WIDENER@@IAEXPAVEVECTORFX@@H@Z @ 0x2364E6 (-vAddLeftNice@WIDENER@@IAEXPAVEVECTORFX@@H@Z.c)
 *     ?vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23650C (-vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 */

int __userpurge WIDEPENOBJ::cptAddRound@<eax>(
        WIDEPENOBJ *this@<ecx>,
        int a2@<ebx>,
        struct EVECTORFX *a3@<edi>,
        struct WIDENER *a4,
        struct WIDEPATHOBJ **a5,
        struct LINEDATA *a6,
        int a7,
        int a8,
        int a9)
{
  struct LINEDATA *v9; // edx
  struct LINEDATA *v10; // ecx
  struct WIDEPATHOBJ *v11; // esi
  struct WIDEPATHOBJ *v13; // ebx
  int v14; // edi
  struct WIDEPATHOBJ *i; // esi
  struct EVECTORFX *j; // esi
  unsigned int v17; // edx
  struct EVECTORFX *v18; // [esp-8h] [ebp-1Ch]
  int v19; // [esp-4h] [ebp-18h]
  struct WIDEPATHOBJ *v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h]
  unsigned int v23; // [esp+2Ch] [ebp+18h]
  unsigned int v24; // [esp+2Ch] [ebp+18h]

  v9 = (struct LINEDATA *)a5;
  v22 = 0;
  v10 = a6;
  v11 = a5[2];
  if ( v11 == *((struct WIDEPATHOBJ **)a6 + 2) && ((*(_BYTE *)a6 ^ *(_BYTE *)a5) & 1) == 0 )
    return 0;
  v19 = a2;
  v13 = a5[1];
  v18 = a3;
  v14 = (unsigned int)*a5 & 1;
  v21 = v13;
  if ( a7 )
  {
    if ( a8 )
    {
      if ( !LINEDATA::bToLeftSide((LINEDATA *)a5) )
      {
        vAddNice(v11, (struct _POINTFIX *)v14, v18, v19);
        v9 = (struct LINEDATA *)a5;
      }
      v10 = a6;
    }
    for ( i = (struct WIDEPATHOBJ *)((char *)v11 + 8); ; i = (struct WIDEPATHOBJ *)((char *)v13 + 24) )
    {
      if ( v13 == *((struct WIDEPATHOBJ **)v10 + 1) )
      {
        v23 = *((_DWORD *)v10 + 2);
        if ( (unsigned int)i <= v23 && v14 == (*(_DWORD *)v10 & 1) )
          break;
      }
      v24 = (unsigned int)v13 + 8 * *(_DWORD *)(*((_DWORD *)v9 + 1) + 12) + 8;
      if ( (unsigned int)i < v24 )
      {
        v22 += ((v24 - (unsigned int)i - 1) >> 3) + 1;
        do
        {
          vAddNice(i, (struct _POINTFIX *)v14, v18, v19);
          i = (struct WIDEPATHOBJ *)((char *)i + 8);
        }
        while ( (unsigned int)i < v24 );
        v13 = v21;
        v10 = a6;
        v9 = (struct LINEDATA *)a5;
      }
      v13 = *(struct WIDEPATHOBJ **)v13;
      v21 = v13;
      if ( !v13 )
      {
        v13 = *(struct WIDEPATHOBJ **)(*((_DWORD *)this + 2) + 20);
        v21 = v13;
        v14 = v14 == 0;
      }
    }
    if ( (unsigned int)i < v23 )
    {
      do
      {
        vAddNice(i, (struct _POINTFIX *)v14, v18, v19);
        v10 = a6;
        i = (struct WIDEPATHOBJ *)((char *)i + 8);
        ++v22;
      }
      while ( (unsigned int)i < *((_DWORD *)a6 + 2) );
    }
    if ( a9 && LINEDATA::bToLeftSide(v10) )
      vAddNice(i, (struct _POINTFIX *)v14, v18, v19);
  }
  else
  {
    if ( a8 )
    {
      if ( LINEDATA::bToLeftSide((LINEDATA *)a5) )
        WIDENER::vAddLeftNice(a4, v11, v14);
      v10 = a6;
    }
    for ( j = (struct WIDEPATHOBJ *)((char *)v11 - 8);
          ;
          j = (struct WIDEPATHOBJ *)((char *)v13 + 8 * *((_DWORD *)v13 + 3) + 8) )
    {
      if ( v13 == *((struct WIDEPATHOBJ **)v10 + 1) )
      {
        v17 = *((_DWORD *)v10 + 2);
        if ( (unsigned int)j >= v17 && v14 == (*(_DWORD *)v10 & 1) )
          break;
      }
      if ( j > (struct WIDEPATHOBJ *)((char *)v13 + 24) )
      {
        v22 += ((unsigned int)(j - (struct WIDEPATHOBJ *)((char *)v13 + 24) - 1) >> 3) + 1;
        do
        {
          WIDENER::vAddLeftNice(a4, j, v14);
          j = (struct EVECTORFX *)((char *)j - 8);
        }
        while ( j > (struct WIDEPATHOBJ *)((char *)v13 + 24) );
        v13 = v21;
        v10 = a6;
      }
      v13 = (struct WIDEPATHOBJ *)*((_DWORD *)v13 + 1);
      v21 = v13;
      if ( !v13 )
      {
        v13 = *(struct WIDEPATHOBJ **)(*((_DWORD *)this + 2) + 24);
        v21 = v13;
        v14 = v14 == 0;
      }
    }
    if ( (unsigned int)j > v17 )
    {
      do
      {
        WIDENER::vAddLeftNice(a4, j, v14);
        v10 = a6;
        j = (struct EVECTORFX *)((char *)j - 8);
        ++v22;
      }
      while ( (unsigned int)j > *((_DWORD *)a6 + 2) );
    }
    if ( a9 && !LINEDATA::bToLeftSide(v10) )
      WIDENER::vAddLeftNice(a4, j, v14);
  }
  return v22;
}
