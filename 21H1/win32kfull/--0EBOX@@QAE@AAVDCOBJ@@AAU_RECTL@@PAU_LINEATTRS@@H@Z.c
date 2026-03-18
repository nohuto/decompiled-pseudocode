/*
 * XREFs of ??0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z @ 0x214527
 * Callers:
 *     _GreRectangle@20 @ 0xBB904 (_GreRectangle@20.c)
 *     _NtGdiEllipse@20 @ 0x200B61 (_NtGdiEllipse@20.c)
 *     _NtGdiRoundRect@28 @ 0x200D84 (_NtGdiRoundRect@28.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     ?efHalfDiff@@YG?AVEFLOAT@@JJ@Z @ 0x22EA2 (-efHalfDiff@@YG-AVEFLOAT@@JJ@Z.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?efHalf@@YG?AVEFLOAT@@K@Z @ 0x21522E (-efHalf@@YG-AVEFLOAT@@K@Z.c)
 */

EBOX *__thiscall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  ERECTL *v6; // edx
  LONG *v7; // esi
  int v8; // ecx
  LONG v9; // eax
  int v10; // eax
  int v11; // eax
  LONG v12; // eax
  signed int v13; // esi
  int v14; // esi
  int v15; // ecx
  _DWORD *v16; // esi
  int v17; // ecx
  __int64 v18; // kr00_8
  __int64 v19; // rax
  signed int v20; // ecx
  int v21; // eax
  LONG v22; // ecx
  LONG v23; // edi
  LONG v24; // esi
  LONG v25; // edx
  int v26; // eax
  int v27; // eax
  LONG v28; // eax
  _DWORD *v29; // esi
  LONG y; // ecx
  LONG x; // eax
  LONG v32; // edx
  LONG v33; // ecx
  int v34; // edi
  int v35; // eax
  int v36; // ecx
  int v37; // edi
  LONG v38; // ecx
  bool v39; // zf
  bool v40; // sf
  bool v41; // of
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // edi
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // ecx
  _BYTE v53[12]; // [esp+10h] [ebp-48h] BYREF
  int v54; // [esp+1Ch] [ebp-3Ch] BYREF
  int v55; // [esp+20h] [ebp-38h]
  __int64 v56; // [esp+24h] [ebp-34h] BYREF
  __int64 v57; // [esp+2Ch] [ebp-2Ch] BYREF
  __int64 v58; // [esp+34h] [ebp-24h] BYREF
  signed int v59; // [esp+3Ch] [ebp-1Ch]
  LONG v60; // [esp+40h] [ebp-18h]
  struct _POINTL v61; // [esp+44h] [ebp-14h] BYREF
  LONG v62; // [esp+4Ch] [ebp-Ch]
  LONG v63; // [esp+50h] [ebp-8h]

  v6 = (EBOX *)((char *)this + 64);
  *((struct _RECTL *)this + 4) = *a3;
  *(_DWORD *)this = 0;
  v7 = (LONG *)((char *)this + 72);
  *((_DWORD *)this + 1) = 0;
  v8 = *(_DWORD *)a2;
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 148) & 1) != 0 )
  {
    --*(_DWORD *)v6;
    --*v7;
    v9 = *(_DWORD *)v6;
    v8 = *(_DWORD *)a2;
  }
  else
  {
    v9 = *((_DWORD *)this + 16);
  }
  v60 = v9;
  v10 = *(_DWORD *)(v8 + 1020);
  if ( *(_DWORD *)(v10 + 228) == 2 )
  {
    ERECTL::vOrder(v6);
    v6 = (EBOX *)((char *)this + 64);
    goto LABEL_17;
  }
  v11 = *(_DWORD *)(v10 + 340) & 0x100;
  HIDWORD(v58) = v11;
  if ( v11 )
  {
    v12 = *v7;
    if ( v60 < *v7 )
    {
LABEL_11:
      *(_DWORD *)v6 = v12;
      *v7 = v60;
      v8 = *(_DWORD *)a2;
      goto LABEL_12;
    }
    v11 = HIDWORD(v58);
  }
  if ( !v11 )
  {
    v12 = *((_DWORD *)this + 18);
    if ( v60 > v12 )
      goto LABEL_11;
  }
LABEL_12:
  v13 = *((_DWORD *)this + 19);
  v59 = *((_DWORD *)this + 17);
  if ( (*(_DWORD *)(*(_DWORD *)(v8 + 1020) + 340) & 0x200) == 0 )
  {
    if ( v59 <= v13 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( v59 < v13 )
  {
LABEL_16:
    *((_DWORD *)this + 19) = v59;
    *((_DWORD *)this + 17) = v13;
  }
LABEL_17:
  v14 = *(_DWORD *)a2;
  if ( (*(_BYTE *)(*(_DWORD *)a2 + 172) & 4) != 0 )
  {
    v15 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 19) = v15;
    v14 = *(_DWORD *)a2;
  }
  v61 = *(struct _POINTL *)v6;
  v62 = *((_DWORD *)v6 + 2);
  v63 = *((_DWORD *)v6 + 3);
  v16 = *(_DWORD **)(v14 + 96);
  v60 = (LONG)v16;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v53, a2, 516);
  if ( (v16[6] & 0x10000) != 0 && (a4->fl & 1) != 0 )
  {
    v17 = v16[29];
    v59 = 1;
    v56 = efHalf(v17);
    v18 = efHalfDiff(v61.x, v62);
    v58 = v18;
    v19 = efHalfDiff(v61.y, v63);
    v57 = v19;
    if ( (int)v18 < 0 )
    {
      EFLOAT::vNegate((EFLOAT *)&v58);
      LODWORD(v19) = v57;
    }
    if ( (int)v19 < 0 )
      EFLOAT::vNegate((EFLOAT *)&v57);
    if ( EFLOAT::operator>((int *)&v56, (int *)&v58) || EFLOAT::operator>((int *)&v56, (int *)&v57) )
    {
      v20 = 0;
      *((_DWORD *)this + 1) = 1;
      v59 = 0;
    }
    else
    {
      v20 = v59;
    }
    v16 = (_DWORD *)v60;
  }
  else
  {
    v20 = 0;
    v59 = 0;
  }
  v21 = *(_DWORD *)(*(_DWORD *)a2 + 1020);
  if ( *(_DWORD *)(v21 + 228) == 2 || v20 || *((_DWORD *)this + 1) || (*(_BYTE *)(v21 + 340) & 0x20) != 0 )
  {
    v29 = (_DWORD *)((char *)this + 8);
    y = v61.y;
    *((_DWORD *)this + 2) = v62;
    x = v61.x;
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v63;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v53, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3u);
    v32 = v60;
    if ( a5 )
    {
      if ( *(_DWORD *)(v60 + 124) == 5 )
      {
        v33 = *((_DWORD *)this + 3);
        v34 = *((_DWORD *)this + 6);
        HIDWORD(v58) = *((_DWORD *)this + 7);
        HIDWORD(v57) = *v29;
        v60 = v33;
        if ( ((BYTE4(v58) | (unsigned __int8)(v34 | v33 | BYTE4(v57))) & 0xF) == 0 )
        {
          v35 = HIDWORD(v57);
          v36 = 8 * (SHIDWORD(v57) > v34) - 4;
          *((_DWORD *)this + 4) -= v36;
          v37 = v34 - v36;
          *v29 = v36 + v35;
          v38 = v60;
          v41 = __OFSUB__(HIDWORD(v58), v60);
          v39 = HIDWORD(v58) == v60;
          v40 = HIDWORD(v58) - v60 < 0;
          *((_DWORD *)this + 6) = v37;
          v42 = 8 * !(v40 ^ v41 | v39) - 4;
          *((_DWORD *)this + 5) -= v42;
          v43 = v38 - v42;
          v44 = HIDWORD(v58) + v42;
          *((_DWORD *)this + 3) = v43;
          *((_DWORD *)this + 7) = v44;
        }
      }
    }
    if ( v59 )
    {
      v45 = *(_DWORD *)(v32 + 116);
      v46 = v45;
      v47 = *((_DWORD *)this + 18);
      v48 = -v45;
      HIDWORD(v56) = v45;
      LODWORD(v56) = v45;
      if ( v47 < *((_DWORD *)this + 16) )
      {
        v46 = -v45;
        LODWORD(v56) = -v45;
      }
      if ( *((_DWORD *)this + 19) < *((_DWORD *)this + 17) )
      {
        v45 = -v45;
        HIDWORD(v56) = v48;
      }
      v55 = v45;
      v54 = -v46;
      EXFORMOBJ::bXform((EXFORMOBJ *)v53, (struct _VECTORL *)&v54, (struct _VECTORFX *)&v54, 2u);
      v49 = v56;
      v50 = (v54 + 1) >> 1;
      v51 = v55 + 1;
      *v29 += v50;
      *((_DWORD *)this + 6) -= v50;
      v51 >>= 1;
      *((_DWORD *)this + 3) += v51;
      *((_DWORD *)this + 4) += (v49 + 1) >> 1;
      *((_DWORD *)this + 5) += (HIDWORD(v56) + 1) >> 1;
      *((_DWORD *)this + 7) -= v51;
    }
    goto LABEL_61;
  }
  EXFORMOBJ::bXformRound((EXFORMOBJ *)v53, &v61, (struct _POINTFIX *)&v61, 2u);
  v59 = 16;
  if ( !a5 || v16[31] != 5 )
  {
    v23 = v63;
    v25 = v62;
    v22 = v61.y;
    v24 = v61.x;
    goto LABEL_40;
  }
  v22 = v61.y;
  v23 = v63;
  v24 = v61.x;
  v25 = v62;
  v60 = v62;
  if ( (((unsigned __int8)v62 | (unsigned __int8)(LOBYTE(v61.x) | v63 | LOBYTE(v61.y))) & 0xF) == 0 )
  {
    v59 = 32;
    v26 = 8 * (v62 > v61.x) - 4;
    v25 = v26 + v62;
    v24 = v61.x - v26;
    v27 = 8 * (v63 > v61.y) - 4;
    v22 = v61.y - v27;
    v23 = v27 + v63;
LABEL_40:
    v60 = v25;
  }
  HIDWORD(v57) = v25 - v24;
  HIDWORD(v58) = v23 - v22;
  if ( (int)abs32(v25 - v24) >= v59 && (int)abs32(SHIDWORD(v58)) >= v59 )
  {
    v28 = v60;
    if ( SHIDWORD(v57) <= 0 )
      v24 -= v59;
    else
      v28 = v60 - v59;
    if ( SHIDWORD(v58) <= 0 )
      v22 -= v59;
    else
      v23 -= v59;
    *((_DWORD *)this + 4) = v24;
    *((_DWORD *)this + 6) = v24;
    v29 = (_DWORD *)((char *)this + 8);
    *((_DWORD *)this + 2) = v28;
    *((_DWORD *)this + 3) = v22;
    *((_DWORD *)this + 5) = v22;
    *((_DWORD *)this + 7) = v23;
LABEL_61:
    *((_DWORD *)this + 12) = *v29;
    *((_DWORD *)this + 13) = v29[1];
    *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
    *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
    *((_DWORD *)this + 14) = *((_DWORD *)this + 4);
    *((_DWORD *)this + 15) = *((_DWORD *)this + 5);
    *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
    *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
    *((_DWORD *)this + 8) = *((_DWORD *)this + 6);
    *((_DWORD *)this + 9) = *((_DWORD *)this + 7);
    *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
    *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
    *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
    *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
    *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
    *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
    *((_DWORD *)this + 10) = *((_DWORD *)this + 6);
    *((_DWORD *)this + 11) = *((_DWORD *)this + 7);
    *((_DWORD *)this + 10) += *((_DWORD *)this + 12);
    *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
    *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
    *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
    return this;
  }
  *(_DWORD *)this = 1;
  return this;
}
