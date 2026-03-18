/*
 * XREFs of ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C0142270
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007D260 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00E3DB0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C01425A0 (-bIs16@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H4(
        unsigned int *a1,
        __int64 a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        float a7,
        float a8)
{
  struct _GLYPHPOS *v8; // r13
  struct XDCOBJ *v13; // rdx
  unsigned __int16 *v14; // r9
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r14d
  int v19; // r15d
  int v20; // r11d
  int v21; // eax
  POINTL *p_ptl; // r12
  int v23; // esi
  int v24; // r9d
  int v25; // r10d
  int v26; // edi
  int v27; // r8d
  int v28; // r13d
  POINTL v29; // rdx
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // r9d
  int v35; // r8d
  bool v36; // cc
  int v37; // edx
  int v38; // esi
  int v39; // [rsp+40h] [rbp-30h] BYREF
  int v40; // [rsp+44h] [rbp-2Ch] BYREF
  int v41; // [rsp+48h] [rbp-28h]
  int v42; // [rsp+4Ch] [rbp-24h]
  int v43; // [rsp+50h] [rbp-20h]
  int v44; // [rsp+54h] [rbp-1Ch]
  int v45; // [rsp+58h] [rbp-18h]
  int v46; // [rsp+5Ch] [rbp-14h]
  int v47; // [rsp+60h] [rbp-10h]
  int v50; // [rsp+C8h] [rbp+58h]

  v8 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v44 = EFLOAT::bIs16((EFLOAT *)&a7);
  v39 = 0;
  v45 = EFLOAT::bIs16((EFLOAT *)&a8);
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, (struct RFONTOBJ *)*a1, v8, v14, &v39, v13, (struct ESTROBJ *)a1);
  if ( (_DWORD)result )
  {
    if ( v39 )
    {
      v16 = *((_QWORD *)a1 + 8);
      a1[58] |= 2u;
      *((_QWORD *)a1 + 4) = v16;
    }
    v17 = *(_QWORD *)a3;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
    {
      v18 = -*(_DWORD *)(v17 + 320);
      v19 = -*(_DWORD *)(v17 + 316);
    }
    else
    {
      v18 = *(_DWORD *)(v17 + 316);
      v19 = *(_DWORD *)(v17 + 320);
    }
    v41 = 0;
    v39 = 0;
    v50 = a4 + 8;
    v20 = 0;
    v21 = a4 + 8;
    p_ptl = &v8->ptl;
    v23 = 0;
    v8->ptl.x = v21 >> 4;
    v24 = 0;
    v46 = a5 + 8;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v8->ptl.y = (a5 + 8) >> 4;
    v28 = v41;
    v43 = *a1;
    while ( 1 )
    {
      v29 = p_ptl[-1];
      v30 = v18 + v27;
      v31 = v26 + *(_DWORD *)(*(_QWORD *)&v29 + 16LL);
      if ( v31 >= v39 )
        v31 = v39;
      v39 = v31;
      v32 = v26 + *(_DWORD *)(*(_QWORD *)&v29 + 20LL);
      if ( v32 <= v20 )
        v32 = v20;
      v41 = v32;
      if ( v30 <= v28 )
        v30 = v28;
      v28 = v30;
      v33 = v19 + v27;
      if ( v19 + v27 >= v23 )
        v33 = v23;
      v23 = v33;
      v34 = *a6 + v24;
      v25 += a6[1];
      v47 = v34;
      v42 = v25;
      a6 += 2;
      if ( v44 )
      {
        v26 = 16 * v34;
      }
      else
      {
        v40 = 0;
        bFToL((float)v34 * a7, &v40, 0);
        v25 = v42;
        v26 = v40;
      }
      if ( v45 )
      {
        v27 = 16 * v25;
      }
      else
      {
        v40 = 0;
        bFToL((float)v25 * a8, &v40, 0);
        v25 = v42;
        v27 = v40;
      }
      if ( !--v43 )
        break;
      v24 = v47;
      v20 = v41;
      p_ptl += 3;
      p_ptl->x = (v26 + v50) >> 4;
      p_ptl->y = (v46 - v27) >> 4;
    }
    v35 = -v27;
    v36 = v26 <= v41;
    a1[24] = v39;
    a1[20] = v26;
    if ( v36 )
      v26 = v41;
    a1[21] = v35;
    a1[26] = v26;
    result = (unsigned int)-v28;
    v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40;
    if ( !v37 )
      result = (unsigned int)v23;
    v38 = -v23;
    if ( !v37 )
      v38 = v28;
    a1[25] = v38;
    a1[27] = result;
    a1[58] |= 4u;
  }
  return result;
}
