/*
 * XREFs of ?bEllipse@@YGHAAVEPATHOBJ@@AAVEBOX@@@Z @ 0x214AD5
 * Callers:
 *     _NtGdiCreateEllipticRgn@16 @ 0x1FDFC4 (_NtGdiCreateEllipticRgn@16.c)
 *     _NtGdiEllipse@20 @ 0x200B61 (_NtGdiEllipse@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __fastcall bEllipse(EPATHOBJ *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  int v6; // ebx
  LONG v7; // eax
  int v9; // edx
  int v10; // esi
  int v11; // edx
  int v12; // esi
  int v13; // edx
  int v14; // esi
  int v15; // ebx
  int v16; // edi
  int v17; // esi
  int v18; // edx
  int v19; // esi
  int v20; // edx
  int v21; // eax
  int v22; // edx
  EPATHOBJ *v23; // ebx
  int v24; // ecx
  int v25; // esi
  int v27; // [esp+Ch] [ebp-88h]
  struct _POINTL v28; // [esp+10h] [ebp-84h] BYREF
  EPATHOBJ *v29; // [esp+18h] [ebp-7Ch]
  int v30; // [esp+1Ch] [ebp-78h]
  int v31; // [esp+20h] [ebp-74h]
  int v32; // [esp+24h] [ebp-70h]
  int v33; // [esp+28h] [ebp-6Ch]
  _DWORD *v34; // [esp+2Ch] [ebp-68h]
  struct _POINTL v35; // [esp+30h] [ebp-64h] BYREF
  int v36; // [esp+38h] [ebp-5Ch]
  int v37; // [esp+3Ch] [ebp-58h]
  int v38; // [esp+40h] [ebp-54h]
  int v39; // [esp+44h] [ebp-50h]
  int v40; // [esp+48h] [ebp-4Ch]
  int v41; // [esp+4Ch] [ebp-48h]
  int v42; // [esp+50h] [ebp-44h]
  int v43; // [esp+54h] [ebp-40h]
  int v44; // [esp+58h] [ebp-3Ch]
  int v45; // [esp+5Ch] [ebp-38h]
  int v46; // [esp+60h] [ebp-34h]
  int v47; // [esp+64h] [ebp-30h]
  int v48; // [esp+68h] [ebp-2Ch]
  int v49; // [esp+6Ch] [ebp-28h]
  int v50; // [esp+70h] [ebp-24h]
  int v51; // [esp+74h] [ebp-20h]
  int v52; // [esp+78h] [ebp-1Ch]
  int v53; // [esp+7Ch] [ebp-18h]
  int v54; // [esp+80h] [ebp-14h]
  int v55; // [esp+84h] [ebp-10h]
  int v56; // [esp+88h] [ebp-Ch]
  int v57; // [esp+8Ch] [ebp-8h]

  v29 = a1;
  v34 = a2;
  v2 = a2[14];
  v3 = a2[13];
  v33 = (unsigned __int64)(1922922357LL * (int)a2[12]) >> 32;
  v32 = (unsigned __int64)(1922922357LL * v3) >> 32;
  v4 = a2[15];
  v5 = (unsigned __int64)(1922922357LL * v2) >> 32;
  v6 = (unsigned __int64)(1922922357LL * v4) >> 32;
  v31 = v5;
  v30 = v6;
  v7 = v2 + a2[8];
  v28.x = v7;
  v28.y = v4 + a2[9];
  EPATHOBJ::bMoveTo(v29, 0, &v28);
  v9 = a2[2];
  v10 = a2[3];
  v35.x = v9 - v5;
  v35.y = v10 - v6;
  v37 = v10 - v32;
  v36 = v9 - v33;
  v11 = v9 - v34[12];
  v27 = v34[12];
  v12 = v10 - v34[13];
  v28.y = v34[13];
  v38 = v11;
  v13 = v34[4];
  v40 = v33 + v13;
  v39 = v12;
  v14 = v34[5];
  v42 = v13 - v5;
  v41 = v32 + v14;
  v43 = v14 - v6;
  v15 = v34[14];
  v16 = v34[15];
  v44 = v13 - v15;
  v45 = v14 - v16;
  v17 = v34[7];
  v18 = v34[6];
  v46 = v31 + v18;
  v47 = v30 + v17;
  v48 = v33 + v18;
  v51 = v28.y + v17;
  v50 = v27 + v18;
  v49 = v32 + v17;
  v19 = v34[9];
  v20 = v34[8];
  v52 = v20 - v33;
  v21 = v31 + v20;
  v22 = v15 + v20;
  v23 = v29;
  v53 = v19 - v32;
  v24 = v30 + v19;
  v54 = v21;
  v57 = v16 + v19;
  v25 = 0;
  v55 = v24;
  v56 = v22;
  if ( EPATHOBJ::bPolyBezierTo(v29, 0, &v35, 0xCu) )
    return EPATHOBJ::bCloseFigure(v23) != 0;
  return v25;
}
