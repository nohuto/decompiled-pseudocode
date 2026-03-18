/*
 * XREFs of ?vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23650C
 * Callers:
 *     ?cptAddRound@WIDEPENOBJ@@QAEKAAVWIDENER@@AAVLINEDATA@@1HHH@Z @ 0x235DD7 (-cptAddRound@WIDEPENOBJ@@QAEKAAVWIDENER@@AAVLINEDATA@@1HHH@Z.c)
 *     ?vAddLeftNice@WIDENER@@IAEXPAVEVECTORFX@@H@Z @ 0x2364E6 (-vAddLeftNice@WIDENER@@IAEXPAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QAEXAAVWIDENER@@AAVLINEDATA@@HH@Z @ 0x2365ED (-vAddRoundEndCap@WIDEPENOBJ@@QAEXAAVWIDENER@@AAVLINEDATA@@HH@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23659C (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 */

void __userpurge vAddNice(
        int a1@<edx>,
        WIDEPATHOBJ *a2@<ecx>,
        struct WIDEPATHOBJ *a3,
        struct _POINTFIX *a4,
        struct EVECTORFX *a5,
        int a6)
{
  struct _POINTFIX *v6; // esi
  struct EVECTORFX *v7; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v6 = a4;
  v7 = a3;
  if ( ((*(_BYTE *)a1 | *(_BYTE *)(a1 + 4)) & 0xF) == 0 )
  {
    v9 = *(_DWORD *)a3;
    v10 = *((_DWORD *)a3 + 1);
    if ( a4 )
    {
      v9 = -v9;
      v10 = -v10;
      v6 = 0;
    }
    v14 = v10;
    v13 = v9;
    if ( v9 <= 0 )
    {
      if ( v9 >= 0 )
        goto LABEL_9;
      v11 = v9 + 1;
    }
    else
    {
      v11 = v9 - 1;
    }
    v13 = v11;
LABEL_9:
    if ( v10 <= 0 )
    {
      if ( v10 >= 0 )
      {
LABEL_14:
        v7 = (struct EVECTORFX *)&v13;
        goto LABEL_15;
      }
      v12 = v10 + 1;
    }
    else
    {
      v12 = v10 - 1;
    }
    v14 = v12;
    goto LABEL_14;
  }
LABEL_15:
  WIDEPATHOBJ::vAddPoint(a2, (struct _POINTFIX *)a1, v7, (int)v6);
}
