/*
 * XREFs of ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1C0142950
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C00940E0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C0142AD4 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 */

void __fastcall BEZIER64::vInit(struct _RECTFX *this, struct _POINTFIX *a2, struct _RECTFX *a3, const __int64 *a4)
{
  struct _RECTFX *v8; // rax
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // rax

  this[10].yTop = 0;
  this[10].xLeft = 1;
  HFDBASIS64::vInit((HFDBASIS64 *)&this[4], a2->x, a2[1].x, a2[2].x, a2[3].x);
  HFDBASIS64::vInit((HFDBASIS64 *)&this[6], a2->y, a2[1].y, a2[2].y, a2[3].y);
  *(_QWORD *)&this[8].xLeft = *a4;
  if ( a3 )
  {
    v8 = this + 9;
    this[9] = *a3;
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)&this[8].xRight = v8;
  v9 = *(_QWORD *)&this[5].xLeft;
  v10 = *(_QWORD *)&this[5].xRight;
  v11 = *(_QWORD *)&this[7].xLeft;
  v12 = *(_QWORD *)&this[7].xRight;
  while ( 1 )
  {
    v13 = -v9;
    v14 = -v10;
    if ( v9 >= 0 )
      v13 = v9;
    if ( v10 >= 0 )
      v14 = v10;
    if ( v13 <= v14 )
    {
      v13 = v10;
      if ( v10 < 0 )
        v13 = -v10;
    }
    if ( v13 <= geqErrorHigh )
    {
      v15 = -v11;
      v16 = -v12;
      if ( v11 >= 0 )
        v15 = v11;
      if ( v12 >= 0 )
        v16 = v12;
      if ( v15 <= v16 )
      {
        v15 = v12;
        if ( v12 < 0 )
          v15 = -v12;
      }
      if ( v15 <= geqErrorHigh )
        break;
    }
    v17 = *(_QWORD *)&this[5].xRight;
    v18 = *(_QWORD *)&this[7].xRight;
    v19 = *(_QWORD *)&this[4].xRight;
    v20 = v17 + *(_QWORD *)&this[5].xLeft;
    v21 = *(_QWORD *)&this[7].xLeft;
    this[10].xLeft *= 2;
    v9 = v20 >> 3;
    v11 = (v18 + v21) >> 3;
    *(_QWORD *)&this[4].xRight = (v19 - v9) >> 1;
    v10 = v17 >> 2;
    v22 = (*(_QWORD *)&this[6].xRight - v11) >> 1;
    v12 = v18 >> 2;
    *(_QWORD *)&this[7].xRight = v12;
    *(_QWORD *)&this[5].xLeft = v9;
    *(_QWORD *)&this[5].xRight = v10;
    *(_QWORD *)&this[7].xLeft = v11;
    *(_QWORD *)&this[6].xRight = v22;
  }
}
