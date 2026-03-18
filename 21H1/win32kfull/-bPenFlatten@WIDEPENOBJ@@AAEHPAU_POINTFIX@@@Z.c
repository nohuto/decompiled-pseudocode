/*
 * XREFs of ?bPenFlatten@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235587
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x2356FB (-bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bGrowPath@WIDEPATHOBJ@@IAEHXZ @ 0x235295 (-bGrowPath@WIDEPATHOBJ@@IAEHXZ.c)
 *     ?vInit@BEZIER@@QAEXPAU_POINTFIX@@PAU_RECTFX@@PB_J@Z @ 0x236CAE (-vInit@BEZIER@@QAEXPAU_POINTFIX@@PAU_RECTFX@@PB_J@Z.c)
 */

int __thiscall WIDEPENOBJ::bPenFlatten(struct _POINTFIX **this, struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // edi
  struct _POINTFIX *v4; // eax
  struct _RECTFX *v5; // ecx
  int i; // ebx
  struct _POINTFIX *v7; // ecx
  struct _POINTFIX *v8; // ecx
  struct _POINTFIX *v9; // ecx
  struct _POINTFIX *v10; // ecx
  bool v11; // zf
  int v12; // eax
  int result; // eax
  struct _POINTFIX *v14; // [esp+10h] [ebp-C4h]
  struct _POINTFIX *v15; // [esp+14h] [ebp-C0h]
  _BYTE v16[168]; // [esp+18h] [ebp-BCh] BYREF
  int v17; // [esp+C0h] [ebp-14h]

  v2 = a2;
  if ( !WIDEPATHOBJ::bGrowPath((WIDEPATHOBJ *)this) )
    return 0;
  *(_DWORD *)(this[2][3].x + 8) = 1;
  v4 = this[18];
  --this[19];
  v14 = v4;
  v5 = (struct _RECTFX *)&v4[1];
  this[18] = v4 + 1;
  v4[1] = *a2;
  ++this[18];
  for ( i = 0; i <= 1; ++i )
  {
    BEZIER::vInit((BEZIER *)v16, v2, v5, gpeqErrorLow);
    do
    {
      v7 = this[18];
      if ( v7 > this[19] )
      {
        v15 = v7 - 2;
        *(_DWORD *)(this[2][3].x + 12) = ((int)&v7[-2] - this[2][3].x) >> 3;
        *(_DWORD *)(this[2][2].x + 4) = this[2][3].x + 8 * *(_DWORD *)(this[2][3].x + 12) + 16;
        if ( !WIDEPATHOBJ::bGrowPath((WIDEPATHOBJ *)this) )
          return 0;
        *(_DWORD *)(this[2][3].x + 8) = 0;
        v8 = this[18];
        v8->x = v15->x;
        v8->y = v15->y;
        v9 = ++this[18];
        v9->x = v15[1].x;
        v9->y = v15[1].y;
        v10 = this[18];
        --this[19];
        v7 = v10 + 1;
      }
      v11 = v17 == 0;
      this[18] = v7 + 1;
      if ( v11 )
        v12 = BEZIER64::bNext((BEZIER64 *)v16, v7);
      else
        v12 = BEZIER32::bNext((BEZIER32 *)v16, v7);
    }
    while ( v12 );
    v2 += 3;
  }
  v14->x = -this[18][-2].x;
  v14->y = -this[18][-2].y;
  *(_DWORD *)(this[2][3].x + 8) |= 2u;
  result = 1;
  *(_DWORD *)(this[2][3].x + 12) = ((int)&this[18][-2] - this[2][3].x) >> 3;
  return result;
}
