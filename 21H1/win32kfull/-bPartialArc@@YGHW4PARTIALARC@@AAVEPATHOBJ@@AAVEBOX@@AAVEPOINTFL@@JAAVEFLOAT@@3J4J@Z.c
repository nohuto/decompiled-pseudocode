/*
 * XREFs of ?bPartialArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@JAAVEFLOAT@@3J4J@Z @ 0x214C67
 * Callers:
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z @ 0x214E87 (-bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z.c)
 */

int __fastcall bPartialArc(int a1, EPATHOBJ *a2, _DWORD *a3, int a4, char a5, int a6, int a7, int a8, int a9, int a10)
{
  int v12; // ebx
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // esi
  int v20; // edx
  int v21; // esi
  int v22; // edx
  int v23; // esi
  int v24; // edx
  int v25; // esi
  int v26; // ecx
  int v29; // [esp+20h] [ebp-40h]
  int v30; // [esp+24h] [ebp-3Ch]
  int v31; // [esp+28h] [ebp-38h]
  int v32; // [esp+2Ch] [ebp-34h]
  int v33; // [esp+30h] [ebp-30h]
  int v34; // [esp+34h] [ebp-2Ch] BYREF
  int v35; // [esp+38h] [ebp-28h]
  int v36; // [esp+3Ch] [ebp-24h]
  int v37; // [esp+40h] [ebp-20h]
  struct _POINTL v38; // [esp+44h] [ebp-1Ch] BYREF
  int v39; // [esp+4Ch] [ebp-14h]
  int v40; // [esp+50h] [ebp-10h]
  int v41; // [esp+54h] [ebp-Ch]
  int v42; // [esp+58h] [ebp-8h]

  if ( a10 )
  {
    v12 = (a5 + 1) & 3;
    v13 = ((_BYTE)v12 + 1) & 3;
    v34 = _gaefAxisCoord[2 * v13];
    v35 = _gaefAxisCoord[2 * v13 + 1];
    v36 = _gaefAxisCoord[2 * v12];
    v37 = _gaefAxisCoord[2 * v12 + 1];
    v31 = bPartialQuadrantArc(a1, a2, a3, a4, a6, &v34, (char *)&_gaefAxisAngle + 8 * v12);
    if ( v12 == a8 )
    {
LABEL_15:
      v26 = ((_BYTE)a8 + 1) & 3;
      v34 = _gaefAxisCoord[2 * v26];
      v35 = _gaefAxisCoord[2 * v26 + 1];
      v36 = _gaefAxisCoord[2 * a8];
      v37 = _gaefAxisCoord[2 * a8 + 1];
      return bPartialQuadrantArc(0, a2, a3, &v34, (char *)&_gaefAxisAngle + 8 * a8, a7, a9) & v31;
    }
    v33 = (unsigned __int64)(1922922357LL * (int)a3[12]) >> 32;
    v32 = (unsigned __int64)(1922922357LL * (int)a3[13]) >> 32;
    v30 = (unsigned __int64)(1922922357LL * (int)a3[14]) >> 32;
    v29 = (unsigned __int64)(1922922357LL * (int)a3[15]) >> 32;
    while ( 1 )
    {
      if ( !v12 )
      {
        v24 = a3[2];
        v25 = a3[3];
        v38.x = v24 - v30;
        v16 = v24 - v33;
        v17 = v24 - a3[12];
        v38.y = v25 - v29;
        v18 = v25 - v32;
        v19 = v25 - a3[13];
        goto LABEL_13;
      }
      if ( v12 == 1 )
      {
        v22 = a3[4];
        v23 = a3[5];
        v38.x = v33 + v22;
        v16 = v22 - v30;
        v17 = v22 - a3[14];
        v38.y = v32 + v23;
        v18 = v23 - v29;
        v19 = v23 - a3[15];
        goto LABEL_13;
      }
      if ( v12 == 2 )
        break;
      if ( v12 == 3 )
      {
        v14 = a3[8];
        v15 = a3[9];
        v38.x = v14 - v33;
        v16 = v30 + v14;
        v17 = a3[14] + v14;
        v38.y = v15 - v32;
        v18 = v29 + v15;
        v19 = a3[15] + v15;
LABEL_13:
        v42 = v19;
        v41 = v17;
        v40 = v18;
        v39 = v16;
      }
      v31 &= EPATHOBJ::bPolyBezierTo(a2, 0, &v38, 3u);
      v12 = ((_BYTE)v12 + 1) & 3;
      if ( v12 == a8 )
        goto LABEL_15;
    }
    v20 = a3[6];
    v21 = a3[7];
    v38.x = v30 + v20;
    v16 = v33 + v20;
    v17 = a3[12] + v20;
    v38.y = v29 + v21;
    v18 = v32 + v21;
    v19 = a3[13] + v21;
    goto LABEL_13;
  }
  return bPartialQuadrantArc(a1, a2, a3, a4, a6, a7, a9);
}
