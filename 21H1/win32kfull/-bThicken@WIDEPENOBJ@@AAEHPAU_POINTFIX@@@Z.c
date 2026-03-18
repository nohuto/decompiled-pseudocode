/*
 * XREFs of ?bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235895
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x2356FB (-bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?bBeginFigure@WIDEPATHOBJ@@QAEHXZ @ 0x234D6E (-bBeginFigure@WIDEPATHOBJ@@QAEHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x236568 (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QAEXXZ @ 0x236BBC (-vEndFigure@WIDEPATHOBJ@@QAEXXZ.c)
 *     ?vHalve@@YGXAAVEVECTORFX@@@Z @ 0x236C93 (-vHalve@@YGXAAVEVECTORFX@@@Z.c)
 */

int __thiscall WIDEPENOBJ::bThicken(WIDEPENOBJ *this, struct _POINTFIX *a2)
{
  FIX x; // esi
  FIX v3; // edx
  FIX y; // edi
  FIX v5; // eax
  int v6; // ecx
  FIX v7; // eax
  FIX v8; // ebx
  int v9; // ecx
  int v10; // ecx
  WIDEPATHOBJ *v11; // ebx
  int v12; // ecx
  int v13; // ecx
  struct EVECTORFX *v15; // [esp+0h] [ebp-28h]
  struct EVECTORFX *v16; // [esp+0h] [ebp-28h]
  struct _POINTFIX v17; // [esp+Ch] [ebp-1Ch]
  struct _POINTFIX v18; // [esp+14h] [ebp-14h] BYREF
  struct _POINTFIX v19; // [esp+1Ch] [ebp-Ch] BYREF
  WIDEPATHOBJ *v20; // [esp+24h] [ebp-4h]
  FIX v21; // [esp+30h] [ebp+8h]
  FIX v22; // [esp+30h] [ebp+8h]
  int v23; // [esp+30h] [ebp+8h]
  FIX v24; // [esp+30h] [ebp+8h]

  v20 = this;
  v17 = *a2;
  v18 = a2[1];
  vHalve(v15);
  vHalve(v16);
  x = v17.x;
  v3 = v17.x;
  if ( v17.x < 0 )
    v3 = -v17.x;
  y = v17.y;
  if ( v17.y >= 0 )
    v19.y = v17.y;
  else
    v19.y = -v17.y;
  if ( v18.x >= 0 )
    v21 = v18.x;
  else
    v21 = -v18.x;
  v5 = v18.y;
  if ( v18.y < 0 )
    v5 = -v18.y;
  if ( ((v3 | v19.y | v21 | v5) & 0xFFFFF000) != 0 )
    return 0;
  v19.y = v17.x * v17.x + v17.y * v17.y;
  v6 = v17.y * v18.x;
  v22 = v18.x * v18.x + v18.y * v18.y;
  if ( v19.y <= v22 )
  {
    if ( 16LL * v22 < (v6 - v17.x * v18.y) * (__int64)(v6 - v17.x * v18.y) )
      return 0;
    x = v18.x;
    y = v18.y;
    v7 = v18.x * v18.x + v18.y * v18.y;
  }
  else
  {
    if ( 16LL * v19.y < (v17.x * v18.y - v6) * (__int64)(v17.x * v18.y - v6) )
      return 0;
    v7 = v19.y;
  }
  v18.y = y;
  v18.x = x;
  v8 = 8;
  if ( v7 < 64 )
  {
    x = 8;
    y = 0;
    v18.x = 8;
    v18.y = 0;
  }
  v23 = abs32(y);
  if ( v23 <= x )
  {
    v19.x = 0;
    v24 = 0;
    v19.y = -8;
    goto LABEL_27;
  }
  if ( (int)abs32(x) > -y )
  {
    if ( v23 <= -x )
    {
      v19.x = 0;
      v24 = 0;
      v19.y = 8;
      v8 = -8;
      goto LABEL_27;
    }
    v19.x = 8;
    v24 = -8;
  }
  else
  {
    v19.x = -8;
    v24 = 8;
  }
  v19.y = 0;
  v8 = 0;
LABEL_27:
  if ( WIDEPATHOBJ::bBeginFigure(v20) )
  {
    WIDEPATHOBJ::vAddPoint(v20, &v18, v9);
    WIDEPATHOBJ::vAddPoint(v20, &v19, v10);
    v19.x = v24;
    v19.y = v8;
    v11 = v20;
    v18.x = -x;
    v18.y = -y;
    WIDEPATHOBJ::vAddPoint(v20, &v18, v12);
    WIDEPATHOBJ::vAddPoint(v11, &v19, v13);
    WIDEPATHOBJ::vEndFigure(v11);
    return 1;
  }
  return 0;
}
