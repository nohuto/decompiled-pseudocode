/*
 * XREFs of ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0137A94
 * Callers:
 *     NtGdiRoundRect @ 0x1C0137D50 (NtGdiRoundRect.c)
 *     GreRectangle @ 0x1C0139384 (GreRectangle.c)
 *     NtGdiEllipse @ 0x1C029FCB0 (NtGdiEllipse.c)
 *     NtGdiArcInternal @ 0x1C02B0210 (NtGdiArcInternal.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C0063F68 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C012E6AC (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  ERECTL *v6; // rdi
  int *v7; // r8
  __int64 v10; // rdx
  int v12; // ecx
  __int64 v13; // rax
  int v14; // r9d
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r15
  int v19; // r14d
  _DWORD *v20; // r15
  LONG v21; // r11d
  LONG v22; // r13d
  LONG y; // r9d
  LONG x; // r10d
  int v25; // r12d
  __int64 v26; // rcx
  signed int v27; // r11d
  LONG v28; // r9d
  LONG v29; // r10d
  LONG v30; // ecx
  LONG v31; // r8d
  int v32; // edi
  int *v33; // rsi
  int v35; // ecx
  float v36; // xmm2_4
  int v37; // r9d
  int v38; // r11d
  int v39; // edx
  int v40; // eax
  int v41; // r11d
  int v42; // r9d
  int v43; // r8d
  int v44; // r10d
  int v45; // ecx
  int v46; // r8d
  int v47; // edx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  float v52; // [rsp+20h] [rbp-40h] BYREF
  float v53; // [rsp+24h] [rbp-3Ch] BYREF
  int v54; // [rsp+28h] [rbp-38h] BYREF
  int v55; // [rsp+2Ch] [rbp-34h]
  int v56; // [rsp+30h] [rbp-30h]
  int v57; // [rsp+34h] [rbp-2Ch]
  _BYTE v58[16]; // [rsp+38h] [rbp-28h] BYREF
  struct _POINTL v59; // [rsp+48h] [rbp-18h] BYREF
  LONG v60; // [rsp+50h] [rbp-10h]
  LONG v61; // [rsp+54h] [rbp-Ch]

  v5 = (__int128)*a3;
  *(_DWORD *)this = 0;
  v6 = (EBOX *)((char *)this + 64);
  *((_DWORD *)this + 1) = 0;
  v7 = (int *)((char *)this + 72);
  *((_OWORD *)this + 4) = v5;
  v10 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 976) + 108LL) & 1) != 0 )
  {
    --*(_DWORD *)v6;
    --*v7;
    v10 = *(_QWORD *)a2;
    v12 = *(_DWORD *)v6;
  }
  else
  {
    v12 = *((_DWORD *)this + 16);
  }
  v13 = *(_QWORD *)(v10 + 976);
  if ( *(_DWORD *)(v13 + 208) == 2 )
  {
    ERECTL::vOrder(v6);
    goto LABEL_9;
  }
  v14 = *(_DWORD *)(v13 + 340) & 0x100;
  if ( v14 && (v15 = *v7, v12 < *v7) || !v14 && (v15 = *((_DWORD *)this + 18), v12 > v15) )
  {
    *(_DWORD *)v6 = v15;
    *v7 = v12;
    v10 = *(_QWORD *)a2;
  }
  v16 = *((_DWORD *)this + 19);
  v17 = *((_DWORD *)this + 17);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 976) + 340LL) & 0x200) != 0 )
  {
    if ( v17 >= v16 )
      goto LABEL_9;
  }
  else if ( v17 <= v16 )
  {
    goto LABEL_9;
  }
  *((_DWORD *)this + 19) = v17;
  *((_DWORD *)this + 17) = v16;
LABEL_9:
  v18 = *(_QWORD *)a2;
  v19 = 4;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 4) != 0 )
  {
    v35 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 19) = v35;
    v18 = *(_QWORD *)a2;
  }
  v59 = *(struct _POINTL *)v6;
  v60 = *((_DWORD *)v6 + 2);
  v61 = *((_DWORD *)v6 + 3);
  v20 = *(_DWORD **)(v18 + 144);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v58, a2, 516);
  v21 = v61;
  v22 = v60;
  y = v59.y;
  x = v59.x;
  if ( (v20[10] & 0x10000) == 0 || (a4->fl & 1) == 0 )
    goto LABEL_12;
  v25 = 1;
  v36 = (float)(v20[42] >> 1);
  if ( (v20[42] & 1) != 0 )
    v36 = FP_0_5 + v36;
  LODWORD(v52) = efHalfDiff(v59.x, v60);
  LODWORD(v53) = efHalfDiff(v37, v38);
  EFLOAT::vAbs((EFLOAT *)&v52);
  EFLOAT::vAbs((EFLOAT *)&v53);
  if ( v36 > v52 || v36 > v53 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_12:
    v25 = 0;
  }
  v26 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  if ( *(_DWORD *)(v26 + 208) == 2 || v25 || *((_DWORD *)this + 1) || (*(_DWORD *)(v26 + 340) & 0x20) != 0 )
  {
    v33 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 2) = v22;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v21;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v58, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    if ( a5 )
    {
      if ( v20[44] == 5 )
      {
        v41 = *v33;
        v42 = *((_DWORD *)this + 3);
        v43 = *((_DWORD *)this + 6);
        v44 = *((_DWORD *)this + 7);
        if ( (((unsigned __int8)v44 | (unsigned __int8)(v43 | v42 | *(_BYTE *)v33)) & 0xF) == 0 )
        {
          v45 = 4;
          if ( v41 <= v43 )
            v45 = -4;
          *((_DWORD *)this + 4) -= v45;
          *((_DWORD *)this + 6) = v43 - v45;
          if ( v44 <= v42 )
            v19 = -4;
          *v33 = v41 + v45;
          *((_DWORD *)this + 5) -= v19;
          *((_DWORD *)this + 3) = v42 - v19;
          *((_DWORD *)this + 7) = v19 + v44;
        }
      }
    }
    if ( v25 )
    {
      v46 = v20[42];
      v47 = v46;
      v48 = *(_DWORD *)v6;
      v56 = v46;
      if ( *((_DWORD *)this + 18) < v48 )
      {
        v47 = -v46;
        v56 = -v46;
      }
      if ( *((_DWORD *)this + 19) < *((_DWORD *)this + 17) )
        v46 = -v46;
      v54 = -v47;
      v57 = v46;
      v55 = v46;
      EXFORMOBJ::bXform((EXFORMOBJ *)v58, (struct _VECTORL *)&v54, (struct _VECTORFX *)&v54, 2uLL);
      v49 = v56;
      v50 = v55 + 1;
      v51 = (v54 + 1) >> 1;
      *v33 += v51;
      *((_DWORD *)this + 6) -= v51;
      v50 >>= 1;
      *((_DWORD *)this + 3) += v50;
      *((_DWORD *)this + 4) += (v49 + 1) >> 1;
      *((_DWORD *)this + 5) += (v57 + 1) >> 1;
      *((_DWORD *)this + 7) -= v50;
    }
  }
  else
  {
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v58, &v59, (struct _POINTFIX *)&v59, 2uLL);
    v27 = 16;
    if ( a5 && v20[44] == 5 )
    {
      v30 = v59.y;
      v28 = v61;
      v31 = v59.x;
      v29 = v60;
      if ( (((unsigned __int8)v60 | (unsigned __int8)(LOBYTE(v59.x) | v61 | LOBYTE(v59.y))) & 0xF) == 0 )
      {
        v39 = -4;
        v40 = -4;
        v27 = 32;
        if ( v60 > v59.x )
          v40 = 4;
        v29 = v40 + v60;
        v31 = v59.x - v40;
        if ( v61 > v59.y )
          v39 = 4;
        v30 = v59.y - v39;
        v28 = v39 + v61;
      }
    }
    else
    {
      v28 = v61;
      v29 = v60;
      v30 = v59.y;
      v31 = v59.x;
    }
    v32 = v28 - v30;
    if ( (int)abs32(v29 - v31) < v27 || (int)abs32(v32) < v27 )
    {
      *(_DWORD *)this = 1;
      return this;
    }
    if ( v29 - v31 <= 0 )
      v31 -= v27;
    else
      v29 -= v27;
    if ( v32 <= 0 )
      v30 -= v27;
    else
      v28 -= v27;
    v33 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = v30;
    *((_DWORD *)this + 2) = v29;
    *((_DWORD *)this + 4) = v31;
    *((_DWORD *)this + 5) = v30;
    *((_DWORD *)this + 6) = v31;
    *((_DWORD *)this + 7) = v28;
  }
  *((_QWORD *)this + 6) = *(_QWORD *)v33;
  *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
  *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
  *((_QWORD *)this + 7) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
  *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
  *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
  *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
  *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
  *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
  return this;
}
