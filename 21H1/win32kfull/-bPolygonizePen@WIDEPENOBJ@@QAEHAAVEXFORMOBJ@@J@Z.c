/*
 * XREFs of ?bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x2356FB
 * Callers:
 *     ??0WIDENER@@QAE@AAVEPATHOBJ@@AAVEXFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234B5B (--0WIDENER@@QAE@AAVEPATHOBJ@@AAVEXFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bHobbyize@WIDEPENOBJ@@AAEHQAVEVECTORFX@@@Z @ 0x23532D (-bHobbyize@WIDEPENOBJ@@AAEHQAVEVECTORFX@@@Z.c)
 *     ?bPenFlatten@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235587 (-bPenFlatten@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235895 (-bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z.c)
 *     ?bTurnLeftRandom@@YGHPAVEVECTORFX@@0@Z @ 0x235A9B (-bTurnLeftRandom@@YGHPAVEVECTORFX@@0@Z.c)
 *     ?bValid@WIDEPATHOBJ@@QBEHXZ @ 0x235B14 (-bValid@WIDEPATHOBJ@@QBEHXZ.c)
 *     ?vHalve@@YGXAAVEVECTORFX@@@Z @ 0x236C93 (-vHalve@@YGXAAVEVECTORFX@@@Z.c)
 */

int __thiscall WIDEPENOBJ::bPolygonizePen(WIDEPENOBJ *this, struct EXFORMOBJ *a2, FIX a3)
{
  FIX x; // ecx
  FIX y; // edx
  FIX v6; // eax
  FIX v7; // esi
  int v9; // edi
  struct EVECTORFX *v10; // [esp+0h] [ebp-68h]
  struct EVECTORFX *v11; // [esp+0h] [ebp-68h]
  struct EVECTORFX *v12; // [esp+0h] [ebp-68h]
  struct EVECTORFX *v13; // [esp+4h] [ebp-64h]
  int v15; // [esp+10h] [ebp-58h]
  struct _POINTFIX v16; // [esp+1Ch] [ebp-4Ch] BYREF
  int v17; // [esp+24h] [ebp-44h]
  int v18; // [esp+28h] [ebp-40h]
  struct _POINTFIX v19; // [esp+2Ch] [ebp-3Ch] BYREF
  int v20; // [esp+34h] [ebp-34h]
  int v21; // [esp+38h] [ebp-30h]
  int v22; // [esp+3Ch] [ebp-2Ch]
  int v23; // [esp+40h] [ebp-28h]
  int v24; // [esp+44h] [ebp-24h]
  int v25; // [esp+48h] [ebp-20h]
  int v26; // [esp+4Ch] [ebp-1Ch]
  int v27; // [esp+50h] [ebp-18h]
  int v28; // [esp+54h] [ebp-14h]
  int v29; // [esp+58h] [ebp-10h]
  int v30; // [esp+5Ch] [ebp-Ch]
  int v31; // [esp+60h] [ebp-8h]

  v16.y = 0;
  v17 = 0;
  v16.x = a3;
  v18 = -a3;
  EXFORMOBJ::bXform(a2, (struct _VECTORL *)&v16, (struct _VECTORFX *)&v16, 2u);
  x = v16.x;
  y = v16.y;
  if ( v16.x == v18 && v16.y == -v17 || v16.x == -v18 && v16.y == v17 )
  {
    v6 = v16.x;
    if ( v16.x < 0 )
      v6 = -v16.x;
    v7 = v16.y;
    if ( v16.y < 0 )
      v7 = -v16.y;
    if ( v6 <= v7 )
    {
      if ( v16.y < 0 )
        y = -v16.y;
      x = y;
    }
    else if ( v16.x < 0 )
    {
      x = -v16.x;
    }
    if ( x < 104 )
    {
      if ( WIDEPENOBJ::bHobbyize(this, (struct EVECTORFX *const)&v16) )
        return 1;
      if ( !WIDEPATHOBJ::bValid(this) )
        return 0;
    }
  }
  if ( WIDEPENOBJ::bThicken(this, &v16) )
    return 1;
  if ( !WIDEPATHOBJ::bValid(this) )
    return 0;
  if ( !bTurnLeftRandom(v10, v13) )
  {
    v17 = -v17;
    v18 = -v18;
  }
  vHalve(v11);
  vHalve(v12);
  v25 = v18;
  v24 = v17;
  v15 = v16.y - ((unsigned __int64)(1922922357LL * v16.y) >> 32);
  v31 = -v16.y;
  v9 = v18 - ((unsigned __int64)(1922922357LL * v18) >> 32);
  v30 = -v16.x;
  v28 = v17 - ((unsigned __int64)(1922922357LL * v17) >> 32) - v16.x;
  v26 = v17 - (v16.x - ((unsigned __int64)(1922922357LL * v16.x) >> 32));
  v29 = v9 - v16.y;
  v22 = v17 + v16.x - ((unsigned __int64)(1922922357LL * v16.x) >> 32);
  v27 = v18 - v15;
  v23 = v15 + v18;
  v20 = v16.x + v17 - ((unsigned __int64)(1922922357LL * v17) >> 32);
  v19 = v16;
  v21 = v9 + v16.y;
  return WIDEPENOBJ::bPenFlatten((struct _POINTFIX **)this, &v19);
}
