/*
 * XREFs of ?bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z @ 0x22A5E
 * Callers:
 *     _NtGdiCreateRoundRectRgn@24 @ 0x2245E (_NtGdiCreateRoundRectRgn@24.c)
 *     _NtGdiRoundRect@28 @ 0x200D84 (_NtGdiRoundRect@28.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ?bToPOINTL@EPOINTFL@@QAEHAAU_POINTL@@@Z @ 0x22DC0 (-bToPOINTL@EPOINTFL@@QAEHAAU_POINTL@@@Z.c)
 *     ??XEPOINTFL@@QAEXVEFLOAT@@@Z @ 0x22DFC (--XEPOINTFL@@QAEXVEFLOAT@@@Z.c)
 *     ??4EPOINTFL@@QAEXAAU_POINTL@@@Z @ 0x22E22 (--4EPOINTFL@@QAEXAAU_POINTL@@@Z.c)
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     ?efHalfDiff@@YG?AVEFLOAT@@JJ@Z @ 0x22EA2 (-efHalfDiff@@YG-AVEFLOAT@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

int __userpurge bRoundRect@<eax>(
        _DWORD *a1@<edx>,
        EPATHOBJ *a2@<ecx>,
        struct EPATHOBJ *a3,
        struct EBOX *a4,
        int a5,
        int a6)
{
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // ebx
  int v12; // ebx
  int v13; // esi
  int v14; // ebx
  int v15; // edx
  int v16; // esi
  int v17; // ecx
  EPATHOBJ *v18; // esi
  int v19; // edx
  int v20; // esi
  int v21; // ecx
  EPATHOBJ *v22; // esi
  int v23; // edx
  int v24; // esi
  int v25; // ecx
  EPATHOBJ *v26; // esi
  int v27; // edx
  int v28; // esi
  int v29; // ecx
  EPATHOBJ *v30; // esi
  __int64 v32; // [esp+10h] [ebp-88h] BYREF
  int v33; // [esp+18h] [ebp-80h] BYREF
  int v34; // [esp+1Ch] [ebp-7Ch]
  int v35; // [esp+20h] [ebp-78h]
  int v36; // [esp+24h] [ebp-74h]
  int v37; // [esp+28h] [ebp-70h]
  struct _POINTL v38; // [esp+2Ch] [ebp-6Ch] BYREF
  struct _POINTL v39; // [esp+34h] [ebp-64h] BYREF
  struct _POINTL v40; // [esp+3Ch] [ebp-5Ch] BYREF
  int v41; // [esp+44h] [ebp-54h] BYREF
  int v42; // [esp+48h] [ebp-50h]
  int v43; // [esp+4Ch] [ebp-4Ch] BYREF
  int v44; // [esp+50h] [ebp-48h]
  EPATHOBJ *v45; // [esp+54h] [ebp-44h]
  int v46; // [esp+58h] [ebp-40h]
  _BYTE v47[16]; // [esp+5Ch] [ebp-3Ch] BYREF
  _BYTE v48[16]; // [esp+6Ch] [ebp-2Ch] BYREF
  struct _POINTL v49; // [esp+7Ch] [ebp-1Ch] BYREF
  int v50; // [esp+84h] [ebp-14h]
  int v51; // [esp+88h] [ebp-10h]
  int v52; // [esp+8Ch] [ebp-Ch]
  int v53; // [esp+90h] [ebp-8h]

  v45 = a2;
  v7 = efHalfDiff(a1[16], a1[18]);
  v8 = a1[17];
  v34 = HIDWORD(v7);
  HIDWORD(v7) = a1[19];
  v33 = v7;
  v9 = efHalfDiff(v8, HIDWORD(v7));
  v32 = v9;
  if ( (v33 || v34) && v9 )
  {
    v10 = abs32((int)a3);
    v11 = abs32((int)a4);
    if ( v33 < 0 )
      EFLOAT::vNegate((EFLOAT *)&v33);
    if ( (int)v32 < 0 )
      EFLOAT::vNegate((EFLOAT *)&v32);
    ltoef_c(v10, &v43);
    ltoef_c(v11, &v41);
    divff3_c(&v43, &v43, &v33);
    divff3_c(&v41, &v41, &v32);
    v12 = v44;
    v13 = v42;
  }
  else
  {
    v43 = _FP_0_0[0];
    v12 = _FP_0_0[1];
    v44 = v12;
    v41 = _FP_0_0[0];
    v13 = _FP_0_0[1];
    v42 = v13;
  }
  v46 = _FP_2_0;
  if ( EFLOAT::operator>(_FP_2_0) )
  {
    v43 = _FP_1_0[0];
    v44 = _FP_1_0[1];
  }
  else
  {
    v44 = v12 - 1;
  }
  if ( EFLOAT::operator>(v46) )
  {
    v41 = _FP_1_0[0];
    v42 = _FP_1_0[1];
  }
  else
  {
    v42 = v13 - 1;
  }
  EPOINTFL::operator=(a1 + 12);
  EPOINTFL::operator=(a1 + 14);
  EPOINTFL::operator*=(v43, v44);
  EPOINTFL::operator*=(v41, v42);
  EPOINTFL::bToPOINTL((EPOINTFL *)v48, &v39);
  EPOINTFL::bToPOINTL((EPOINTFL *)v47, &v38);
  v14 = 0;
  v37 = (unsigned __int64)(1922922357LL * v39.x) >> 32;
  v36 = (unsigned __int64)(1922922357LL * v39.y) >> 32;
  v35 = (unsigned __int64)(1922922357LL * v38.x) >> 32;
  v40.x = a1[2] - v38.x;
  v40.y = a1[3] - v38.y;
  v46 = (unsigned __int64)(1922922357LL * v38.y) >> 32;
  if ( EPATHOBJ::bMoveTo(v45, 0, &v40) )
  {
    v15 = a1[2];
    v16 = a1[3];
    v49.x = v15 - v35;
    v49.y = v16 - v46;
    v17 = v16 - v36;
    v50 = v15 - v37;
    v53 = v16 - v39.y;
    v18 = v45;
    v51 = v17;
    v52 = v15 - v39.x;
    if ( EPATHOBJ::bPolyBezierTo(v45, 0, &v49, 3u) )
    {
      v40.x = v39.x + a1[4];
      v40.y = v39.y + a1[5];
      if ( EPATHOBJ::bPolyLineTo(v18, 0, &v40, 1u) )
      {
        v19 = a1[4];
        v20 = a1[5];
        v49.x = v37 + v19;
        v49.y = v36 + v20;
        v21 = v20 - v46;
        v50 = v19 - v35;
        v53 = v20 - v38.y;
        v22 = v45;
        v51 = v21;
        v52 = v19 - v38.x;
        if ( EPATHOBJ::bPolyBezierTo(v45, 0, &v49, 3u) )
        {
          v40.x = v38.x + a1[6];
          v40.y = v38.y + a1[7];
          if ( EPATHOBJ::bPolyLineTo(v22, 0, &v40, 1u) )
          {
            v23 = a1[6];
            v24 = a1[7];
            v49.x = v35 + v23;
            v49.y = v46 + v24;
            v25 = v24;
            v50 = v37 + v23;
            v53 = v39.y + v24;
            v26 = v45;
            v51 = v36 + v25;
            v52 = v39.x + v23;
            if ( EPATHOBJ::bPolyBezierTo(v45, 0, &v49, 3u) )
            {
              v40.x = a1[8] - v39.x;
              v40.y = a1[9] - v39.y;
              if ( EPATHOBJ::bPolyLineTo(v26, 0, &v40, 1u) )
              {
                v27 = a1[8];
                v28 = a1[9];
                v49.x = v27 - v37;
                v49.y = v28 - v36;
                v29 = v28;
                v50 = v35 + v27;
                v53 = v38.y + v28;
                v30 = v45;
                v51 = v46 + v29;
                v52 = v38.x + v27;
                if ( EPATHOBJ::bPolyBezierTo(v45, 0, &v49, 3u) )
                  return EPATHOBJ::bCloseFigure(v30);
              }
            }
          }
        }
      }
    }
  }
  return v14;
}
