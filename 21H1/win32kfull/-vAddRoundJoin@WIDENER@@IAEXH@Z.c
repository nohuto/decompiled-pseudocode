/*
 * XREFs of ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B
 * Callers:
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 * Callees:
 *     ??9EVECTORFX@@QBEHABU_VECTORFX@@@Z @ 0x234D4D (--9EVECTORFX@@QBEHABU_VECTORFX@@@Z.c)
 *     ?bTurnLeftRandom@@YGHPAVEVECTORFX@@0@Z @ 0x235A9B (-bTurnLeftRandom@@YGHPAVEVECTORFX@@0@Z.c)
 *     ?cptAddRound@WIDEPENOBJ@@QAEKAAVWIDENER@@AAVLINEDATA@@1HHH@Z @ 0x235DD7 (-cptAddRound@WIDEPENOBJ@@QAEKAAVWIDENER@@AAVLINEDATA@@1HHH@Z.c)
 *     ?vAddLeft@WIDENER@@IAEXAAVEVECTORFX@@H@Z @ 0x2364C6 (-vAddLeft@WIDENER@@IAEXAAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x236568 (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23659C (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 *     ?vecInDraw@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x237984 (-vecInDraw@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x2379B6 (-vecInPerp@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 *     ?vecOutDraw@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x2379E8 (-vecOutDraw@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 *     ?vecOutPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x237A1A (-vecOutPerp@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 */

void __thiscall WIDENER::vAddRoundJoin(WIDENER *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  char *v6; // ebx
  int v7; // ecx
  struct LINEDATA *v8; // ecx
  struct WIDEPATHOBJ **v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  _BYTE v17[8]; // [esp+Ch] [ebp-24h] BYREF
  _BYTE v18[8]; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v19[2]; // [esp+1Ch] [ebp-14h] BYREF
  _DWORD v20[2]; // [esp+24h] [ebp-Ch] BYREF
  int v21; // [esp+2Ch] [ebp-4h]
  int v22; // [esp+38h] [ebp+8h]
  int v23; // [esp+38h] [ebp+8h]

  v3 = 0;
  v21 = bTurnLeftRandom((unsigned int *)(*((_DWORD *)this + 171) + 40), (int *)(*((_DWORD *)this + 172) + 40));
  if ( (*((_BYTE *)this + 24) & 0x10) != 0 || a2 )
  {
    v4 = (_DWORD *)WIDENER::vecInDraw(v18);
  }
  else
  {
    v3 = 1;
    v4 = (_DWORD *)WIDENER::vecInPerp(v19);
  }
  v20[0] = *v4;
  v20[1] = v4[1];
  if ( v3 )
    v5 = (_DWORD *)WIDENER::vecOutPerp(this, v18);
  else
    v5 = (_DWORD *)WIDENER::vecOutDraw(this, v17);
  v6 = (char *)this + 676;
  v19[0] = *v5;
  v19[1] = v5[1];
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)this + 996),
    (struct _POINTFIX *)((char *)this + 676),
    (struct EVECTORFX *)v20,
    0);
  WIDENER::vAddLeft(this, (struct EVECTORFX *)v20, v7);
  if ( EVECTORFX::operator!=(v20, v19) )
  {
    v8 = (struct LINEDATA *)*((_DWORD *)this + 172);
    v9 = (struct WIDEPATHOBJ **)*((_DWORD *)this + 171);
    if ( v21 )
    {
      v22 = WIDEPENOBJ::cptAddRound(
              (WIDENER *)((char *)this + 824),
              (int)v6,
              (struct EVECTORFX *)v3,
              this,
              v9,
              v8,
              v21,
              v3,
              v3);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 912), (struct _POINTFIX *)((char *)this + 676), v10);
      if ( (*((_BYTE *)this + 24) & 0x10) == 0 )
      {
        WIDENER::vAddLeft(this, (struct EVECTORFX *)v19, v11);
        if ( v22 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            (int)v6,
            (struct EVECTORFX *)v3,
            this,
            *((struct WIDEPATHOBJ ***)this + 172),
            *((struct LINEDATA **)this + 171),
            0,
            v3,
            v3);
        WIDENER::vAddLeft(this, (struct EVECTORFX *)v20, v12);
        WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 912), (struct _POINTFIX *)((char *)this + 676), v13);
      }
    }
    else
    {
      v23 = WIDEPENOBJ::cptAddRound(
              (WIDENER *)((char *)this + 824),
              (int)v6,
              (struct EVECTORFX *)v3,
              this,
              v9,
              v8,
              0,
              v3,
              v3);
      WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 996), (struct _POINTFIX *)((char *)this + 676), v14);
      if ( (*((_BYTE *)this + 24) & 0x10) == 0 )
      {
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 996),
          (struct _POINTFIX *)((char *)this + 676),
          (struct EVECTORFX *)v19,
          0);
        if ( v23 )
          WIDEPENOBJ::cptAddRound(
            (WIDENER *)((char *)this + 824),
            (int)v6,
            (struct EVECTORFX *)v3,
            this,
            *((struct WIDEPATHOBJ ***)this + 172),
            *((struct LINEDATA **)this + 171),
            1,
            v3,
            v3);
        WIDEPATHOBJ::vAddPoint(
          (WIDENER *)((char *)this + 996),
          (struct _POINTFIX *)((char *)this + 676),
          (struct EVECTORFX *)v20,
          0);
        WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 996), (struct _POINTFIX *)((char *)this + 676), v15);
      }
    }
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 996),
      (struct _POINTFIX *)((char *)this + 676),
      (struct EVECTORFX *)v19,
      0);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)v19, v16);
  }
}
