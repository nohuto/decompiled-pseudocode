/*
 * XREFs of ?vAddEndCap@WIDENER@@IAEXXZ @ 0x2361D5
 * Callers:
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23659C (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@@QAEXAAVWIDENER@@AAVLINEDATA@@HH@Z @ 0x2365ED (-vAddRoundEndCap@WIDEPENOBJ@@QAEXAAVWIDENER@@AAVLINEDATA@@HH@Z.c)
 *     ?vVecSquareCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x2377B1 (-vVecSquareCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 *     ?vecInDraw@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x237984 (-vecInDraw@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x2379B6 (-vecInPerp@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 */

void __thiscall WIDENER::vAddEndCap(struct LINEDATA **this)
{
  struct LINEDATA *v2; // eax
  int v3; // eax
  int *v4; // eax
  struct _POINTFIX *v5; // esi
  WIDEPATHOBJ *v6; // edi
  int v7; // ecx
  struct LINEDATA *v8; // edi
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // esi
  WIDENER *v14; // edi
  _DWORD *v15; // eax
  int v16; // ebx
  int *v17; // eax
  _BYTE v18[8]; // [esp+10h] [ebp-20h] BYREF
  _DWORD v19[2]; // [esp+18h] [ebp-18h] BYREF
  int v20; // [esp+20h] [ebp-10h] BYREF
  int v21; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h] BYREF
  WIDENER *v23; // [esp+2Ch] [ebp-4h]

  v23 = (WIDENER *)this;
  v2 = this[271];
  if ( !v2 )
  {
    if ( ((_BYTE)this[6] & 0x10) != 0 )
      v17 = (int *)WIDENER::vecInDraw(v18);
    else
      v17 = (int *)WIDENER::vecInPerp(v18);
    v5 = (struct _POINTFIX *)(this + 169);
    v6 = (WIDEPATHOBJ *)(this + 249);
    v20 = *v17;
    v21 = v17[1];
    WIDEPATHOBJ::vAddPoint((WIDEPATHOBJ *)(this + 249), (struct _POINTFIX *)(this + 169), (struct EVECTORFX *)&v20, 0);
    WIDEPENOBJ::vAddRoundEndCap(
      (WIDEPENOBJ *)(this + 206),
      (struct WIDENER *)this,
      this[171],
      0,
      (unsigned int)this[6] & 0x10);
LABEL_12:
    WIDEPATHOBJ::vAddPoint(v6, v5, (struct EVECTORFX *)&v20, 1);
    return;
  }
  v3 = (int)v2 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return;
    v4 = (int *)WIDENER::vecInPerp(v19);
    v5 = (struct _POINTFIX *)(this + 169);
    v6 = (WIDEPATHOBJ *)(this + 249);
    v7 = *v4;
    v21 = v4[1];
    v20 = v7;
    WIDEPATHOBJ::vAddPoint((WIDEPATHOBJ *)(this + 249), (struct _POINTFIX *)(this + 169), (struct EVECTORFX *)&v20, 0);
    goto LABEL_12;
  }
  v8 = this[171];
  if ( (*(_BYTE *)v8 & 2) == 0 )
  {
    WIDENER::vVecSquareCompute((WIDENER *)this, this[171]);
    v8 = this[171];
  }
  v9 = *((_DWORD *)v8 + 12);
  v10 = *((_DWORD *)v8 + 13);
  v11 = v9;
  v21 = v10;
  v12 = (_DWORD *)WIDENER::vecInPerp(v18);
  v13 = *v12 + v9;
  v19[1] = v12[1] + v10;
  v14 = v23;
  v19[0] = v13;
  v15 = (_DWORD *)WIDENER::vecInPerp(v18);
  v16 = v11 - *v15;
  v23 = (WIDENER *)(v21 - v15[1]);
  v22 = v16;
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)v14 + 996),
    (struct _POINTFIX *)((char *)v14 + 676),
    (struct EVECTORFX *)v19,
    0);
  WIDEPATHOBJ::vAddPoint(
    (WIDENER *)((char *)v14 + 996),
    (struct _POINTFIX *)((char *)v14 + 676),
    (struct EVECTORFX *)&v22,
    0);
}
