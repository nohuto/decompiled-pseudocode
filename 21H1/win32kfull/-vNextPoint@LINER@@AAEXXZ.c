/*
 * XREFs of ?vNextPoint@LINER@@AAEXXZ @ 0x236DD5
 * Callers:
 *     ?vNextEvent@LINER@@QAEXXZ @ 0x236CF6 (-vNextEvent@LINER@@QAEXXZ.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bNextFigure@READER@@IAEHXZ @ 0x2354C7 (-bNextFigure@READER@@IAEHXZ.c)
 *     ?bNextPoint@READER@@IAEHAAU_POINTFIX@@@Z @ 0x23550D (-bNextPoint@READER@@IAEHAAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER@@QAEXPAU_POINTFIX@@PAU_RECTFX@@PB_J@Z @ 0x236CAE (-vInit@BEZIER@@QAEXPAU_POINTFIX@@PAU_RECTFX@@PB_J@Z.c)
 */

void __thiscall LINER::vNextPoint(LINER *this)
{
  int v2; // eax
  int v3; // edi
  BEZIER32 *v4; // ecx
  int *v5; // esi
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int *v14; // esi
  int Point; // eax
  int v16; // ecx
  struct _RECTFX *v17; // ecx
  BEZIER32 *v18; // ecx
  int v19; // eax
  _DWORD *v20; // edx
  bool v21; // zf
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // edx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  struct _POINTFIX *v33; // [esp-4h] [ebp-34h]
  struct _POINTFIX *v34; // [esp-4h] [ebp-34h]
  struct _POINTFIX v35; // [esp+Ch] [ebp-24h] BYREF
  int v36; // [esp+14h] [ebp-1Ch]
  int v37; // [esp+18h] [ebp-18h]
  struct _POINTFIX v38; // [esp+1Ch] [ebp-14h] BYREF
  struct _POINTFIX v39; // [esp+24h] [ebp-Ch] BYREF

  *((_DWORD *)this + 172) = (char *)this + 88 * (*((_DWORD *)this + 171) == (_DWORD)this + 312) + 312;
  v2 = *((_DWORD *)this + 122);
  if ( v2 < 0 )
    goto LABEL_29;
  v3 = 1;
  if ( v2 <= 1 )
  {
    if ( v2 )
    {
      *((_DWORD *)this + 122) = 0;
      v13 = 0;
    }
    else
    {
      v13 = 3;
    }
    v14 = (int *)((char *)this + 208);
    *((_DWORD *)this + 168) = v13;
    Point = READER::bNextPoint(this, (struct _POINTFIX *)this + 26);
    v16 = *((_DWORD *)this + 1);
    if ( Point )
    {
      if ( (v16 & 0x10) != 0 )
      {
        v35 = *(struct _POINTFIX *)((char *)this + 676);
        v36 = *v14;
        v37 = *((_DWORD *)this + 53);
        READER::bNextPoint(this, &v38);
        READER::bNextPoint(this, &v39);
        BEZIER::vInit((LINER *)((char *)this + 32), &v35, v17, gpeqErrorLow);
        v18 = (LINER *)((char *)this + 32);
        v34 = (struct _POINTFIX *)((char *)this + 208);
        if ( *((_DWORD *)this + 50) )
          v19 = BEZIER32::bNext(v18, v34);
        else
          v19 = BEZIER64::bNext(v18, v34);
        v20 = (_DWORD *)*((_DWORD *)this + 172);
        *v20 = 0;
        v21 = v19 == 0;
        v22 = *((_DWORD *)this + 52);
        v20[8] = v22;
        v23 = *((_DWORD *)this + 53);
        v20[9] = v23;
        v24 = v22 - *((_DWORD *)this + 169);
        v20[8] = v24;
        v25 = v23 - *((_DWORD *)this + 170);
        v20[9] = v25;
        v20[10] = v24;
        v20[11] = v25;
        if ( v21 )
        {
          *((_DWORD *)this + 122) = 0;
        }
        else
        {
          v26 = v36 - v35.x;
          qmemcpy((char *)this + 584, *((const void **)this + 172), 0x58u);
          *((_DWORD *)this + 124) = 0;
          *((_DWORD *)this + 156) = v26;
          *((_DWORD *)this + 157) = v37 - v35.y;
          *((_DWORD *)this + 132) = v39.x - v38.x;
          *((_DWORD *)this + 133) = v39.y - v38.y;
          *((_DWORD *)this + 134) = *((_DWORD *)this + 132);
          *((_DWORD *)this + 135) = *((_DWORD *)this + 133);
          *((_DWORD *)this + 172) = (char *)this + 584;
          *((_DWORD *)this + 122) = 3;
        }
        return;
      }
    }
    else
    {
      *v14 = *((_DWORD *)this + 54);
      v27 = *((_DWORD *)this + 55);
      *((_DWORD *)this + 122) = 2;
      *((_DWORD *)this + 53) = v27;
      if ( (v16 & 8) == 0 )
      {
        *((_DWORD *)this + 168) = 1;
        return;
      }
      *((_DWORD *)this + 168) = 3;
    }
LABEL_29:
    v28 = (_DWORD *)*((_DWORD *)this + 172);
    *v28 = 0;
    v29 = *((_DWORD *)this + 52);
    v28[8] = v29;
    v30 = *((_DWORD *)this + 53);
    v28[9] = v30;
    v31 = v29 - *((_DWORD *)this + 169);
    v28[8] = v31;
    v32 = v30 - *((_DWORD *)this + 170);
    v28[9] = v32;
    v28[10] = v31;
    v28[11] = v32;
    return;
  }
  if ( v2 != 2 )
  {
    if ( v2 == 3 )
    {
      v4 = (LINER *)((char *)this + 32);
      *((_DWORD *)this + 168) = 4;
      v5 = (int *)((char *)this + 208);
      v33 = (struct _POINTFIX *)((char *)this + 208);
      if ( *((_DWORD *)this + 50) )
        v6 = BEZIER32::bNext(v4, v33);
      else
        v6 = BEZIER64::bNext(v4, v33);
      if ( !v6 )
      {
        *((_DWORD *)this + 122) = 0;
        v7 = (_DWORD *)*((_DWORD *)this + 172);
        *v7 = 0;
        v8 = *v5;
        v7[8] = *v5;
        v9 = *((_DWORD *)this + 53);
        v7[9] = v9;
        v10 = v8 - *((_DWORD *)this + 169);
        v7[8] = v10;
        v11 = v9 - *((_DWORD *)this + 170);
        v7[9] = v11;
        v7[10] = v10;
        v7[11] = v11;
        v12 = *((_DWORD *)this + 172);
        *(_DWORD *)(v12 + 40) = *((_DWORD *)this + 134);
        *(_DWORD *)(v12 + 44) = *((_DWORD *)this + 135);
        return;
      }
    }
    else if ( v2 == 4 )
    {
      *((_DWORD *)this + 168) = 9;
      return;
    }
    goto LABEL_29;
  }
  *((_DWORD *)this + 168) = (*((_DWORD *)this + 1) & 8) != 0 ? 2 : 8;
  *((_DWORD *)this + 172) = (char *)this + 224;
  if ( READER::bNextFigure(this) )
  {
    READER::bNextPoint(this, (struct _POINTFIX *)this + 26);
    *((_DWORD *)this + 54) = *((_DWORD *)this + 52);
    *((_DWORD *)this + 55) = *((_DWORD *)this + 53);
  }
  else
  {
    v3 = 4;
  }
  *((_DWORD *)this + 122) = v3;
}
