/*
 * XREFs of ?vAddRoundEndCap@WIDEPENOBJ@@QAEXAAVWIDENER@@AAVLINEDATA@@HH@Z @ 0x2365ED
 * Callers:
 *     ?vAddEndCap@WIDENER@@IAEXXZ @ 0x2361D5 (-vAddEndCap@WIDENER@@IAEXXZ.c)
 *     ?vAddStartCap@WIDENER@@IAEXXZ @ 0x2368E0 (-vAddStartCap@WIDENER@@IAEXXZ.c)
 * Callees:
 *     ?bToLeftSide@LINEDATA@@QBEHXZ @ 0x235A82 (-bToLeftSide@LINEDATA@@QBEHXZ.c)
 *     ?vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23650C (-vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 */

void __thiscall WIDEPENOBJ::vAddRoundEndCap(
        WIDEPENOBJ *this,
        struct WIDENER *a2,
        struct WIDEPATHOBJ **a3,
        int a4,
        int a5)
{
  struct LINEDATA *v5; // ebx
  int v6; // edi
  struct WIDEPATHOBJ *v7; // ecx
  struct WIDEPATHOBJ *v8; // esi
  struct WIDEPATHOBJ *i; // esi
  struct WIDEPATHOBJ *v10; // edx
  char *v11; // ecx
  WIDEPATHOBJ *v12; // eax
  struct WIDENER *v13; // edx
  WIDEPATHOBJ *v14; // eax
  int v15; // edx
  struct EVECTORFX *v16; // [esp+0h] [ebp-1Ch]
  int v17; // [esp+4h] [ebp-18h]
  unsigned int v19; // [esp+10h] [ebp-Ch]
  struct WIDEPATHOBJ *v20; // [esp+18h] [ebp-4h]
  struct WIDENER *v21; // [esp+24h] [ebp+8h]
  WIDEPATHOBJ *v22; // [esp+28h] [ebp+Ch]
  int v23; // [esp+2Ch] [ebp+10h]

  v5 = (struct LINEDATA *)a3;
  v6 = (unsigned int)*a3 & 1;
  if ( a4 )
    v6 = !(*(_BYTE *)a3 & 1);
  v7 = a3[1];
  v8 = a3[2];
  v23 = (int)v7;
  if ( !a5 )
  {
    if ( !LINEDATA::bToLeftSide((LINEDATA *)a3) )
      vAddNice((int)a2 + 676, (struct WIDENER *)((char *)a2 + 996), v8, (struct _POINTFIX *)v6, v16, v17);
    v7 = (struct WIDEPATHOBJ *)v23;
  }
  for ( i = (struct WIDEPATHOBJ *)((char *)v8 + 8); ; i = (struct WIDEPATHOBJ *)((char *)v7 + 24) )
  {
    v10 = (struct WIDEPATHOBJ *)*((_DWORD *)v5 + 1);
    if ( v7 == v10 )
    {
      v19 = *((_DWORD *)v5 + 2);
      if ( (unsigned int)i <= v19 )
        break;
    }
    v20 = (struct WIDEPATHOBJ *)((char *)v7 + 8 * *((_DWORD *)v10 + 3) + 8);
    if ( i < v20 )
    {
      v11 = (char *)a2 + 676;
      v12 = (struct WIDENER *)((char *)a2 + 996);
      do
      {
        vAddNice((int)v11, v12, i, (struct _POINTFIX *)v6, v16, v17);
        v11 = (char *)a2 + 676;
        i = (struct WIDEPATHOBJ *)((char *)i + 8);
        v12 = (struct WIDENER *)((char *)a2 + 996);
      }
      while ( i < v20 );
      v5 = (struct LINEDATA *)a3;
      v7 = (struct WIDEPATHOBJ *)v23;
    }
    v7 = *(struct WIDEPATHOBJ **)v7;
    v23 = (int)v7;
    if ( !v7 )
    {
      v7 = *(struct WIDEPATHOBJ **)(*((_DWORD *)this + 2) + 20);
      v23 = (int)v7;
      v6 = v6 == 0;
    }
  }
  v13 = (struct WIDENER *)((char *)a2 + 676);
  v14 = (struct WIDENER *)((char *)a2 + 996);
  v21 = (struct WIDENER *)((char *)a2 + 676);
  v22 = v14;
  if ( (unsigned int)i < v19 )
  {
    do
    {
      vAddNice((int)v13, v14, i, (struct _POINTFIX *)v6, v16, v17);
      v13 = v21;
      i = (struct WIDEPATHOBJ *)((char *)i + 8);
      v14 = v22;
    }
    while ( (unsigned int)i < *((_DWORD *)v5 + 2) );
  }
  if ( !a5 && LINEDATA::bToLeftSide(v5) )
    vAddNice(v15, v22, i, (struct _POINTFIX *)v6, v16, v17);
}
