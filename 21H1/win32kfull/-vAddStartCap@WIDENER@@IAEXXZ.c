/*
 * XREFs of ?vAddStartCap@WIDENER@@IAEXXZ @ 0x2368E0
 * Callers:
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23659C (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QAEXAAVWIDENER@@AAVLINEDATA@@HH@Z @ 0x2365ED (-vAddRoundEndCap@WIDEPENOBJ@@QAEXAAVWIDENER@@AAVLINEDATA@@HH@Z.c)
 *     ?vVecSquareCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x2377B1 (-vVecSquareCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 *     ?vecOutDraw@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x2379E8 (-vecOutDraw@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 *     ?vecOutPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x237A1A (-vecOutPerp@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 */

void __thiscall WIDENER::vAddStartCap(WIDENER *this)
{
  int v2; // eax
  int v3; // eax
  int *v4; // eax
  struct _POINTFIX *v5; // esi
  WIDEPATHOBJ *v6; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edi
  int *v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // edi
  struct EVECTORFX *v16; // eax
  int *v17; // eax
  _BYTE v18[8]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v19[2]; // [esp+18h] [ebp-10h] BYREF
  int v20; // [esp+20h] [ebp-8h] BYREF
  int v21; // [esp+24h] [ebp-4h]

  v2 = *((_DWORD *)this + 271);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      v8 = *((_DWORD *)this + 172);
      if ( (*(_BYTE *)v8 & 2) == 0 )
      {
        WIDENER::vVecSquareCompute(this, *((struct LINEDATA **)this + 172));
        v8 = *((_DWORD *)this + 172);
      }
      v9 = -*(_DWORD *)(v8 + 48);
      v10 = -*(_DWORD *)(v8 + 52);
      v11 = (int *)WIDENER::vecOutPerp(this, &v20);
      v12 = *v11;
      v13 = v11[1];
      v19[0] = v9 + v12;
      v19[1] = v10 + v13;
      v14 = (_DWORD *)WIDENER::vecOutPerp(this, v18);
      v15 = v10 - v14[1];
      v20 = v9 - *v14;
      v5 = (struct _POINTFIX *)((char *)this + 676);
      v21 = v15;
      v6 = (WIDENER *)((char *)this + 996);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 996),
        (struct _POINTFIX *)((char *)this + 676),
        (struct EVECTORFX *)&v20,
        0);
      v16 = (struct EVECTORFX *)v19;
      goto LABEL_13;
    }
    if ( v3 != 1 )
      return;
    v4 = (int *)WIDENER::vecOutPerp(this, v19);
    v5 = (struct _POINTFIX *)((char *)this + 676);
    v6 = (WIDENER *)((char *)this + 996);
    v7 = *v4;
    v21 = v4[1];
    v20 = v7;
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 996),
      (struct _POINTFIX *)((char *)this + 676),
      (struct EVECTORFX *)&v20,
      1);
  }
  else
  {
    if ( (*((_BYTE *)this + 24) & 0x10) != 0 )
      v17 = (int *)WIDENER::vecOutDraw(this, v18);
    else
      v17 = (int *)WIDENER::vecOutPerp(this, v18);
    v5 = (struct _POINTFIX *)((char *)this + 676);
    v6 = (WIDENER *)((char *)this + 996);
    v20 = *v17;
    v21 = v17[1];
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 996),
      (struct _POINTFIX *)((char *)this + 676),
      (struct EVECTORFX *)&v20,
      1);
    WIDEPENOBJ::vAddRoundEndCap(
      (WIDENER *)((char *)this + 824),
      this,
      *((struct WIDEPATHOBJ ***)this + 172),
      1,
      *((_DWORD *)this + 6) & 0x10);
  }
  v16 = (struct EVECTORFX *)&v20;
LABEL_13:
  WIDEPATHOBJ::vAddPoint(v6, v5, v16, 0);
}
