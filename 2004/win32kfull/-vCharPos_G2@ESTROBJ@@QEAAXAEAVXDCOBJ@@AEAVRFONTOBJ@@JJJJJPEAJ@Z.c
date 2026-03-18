/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C00053B4
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007D260 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C000C758 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00E3DB0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C0118458 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C02BD82C (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G2(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        int *a9)
{
  __int64 v9; // rbx
  _DWORD *v13; // rsi
  char v14; // al
  __int64 v15; // rbx
  __int64 v16; // r13
  struct _GLYPHPOS *v17; // r8
  int v18; // esi
  unsigned __int16 *v19; // r9
  __int64 v20; // rbx
  POINTL *p_ptl; // r15
  __int64 v22; // r12
  unsigned int v23; // edx
  __int64 v24; // rax
  float v25; // r10d
  int v26; // r11d
  __int64 v27; // r14
  int *v28; // r9
  POINTL v29; // r8
  int v30; // edx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rcx
  bool v38; // zf
  unsigned int v39; // eax
  bool v40; // cc
  int v41; // ecx
  __int64 v42; // r11
  int v43; // ecx
  int v44; // edx
  int v45; // r11d
  int v46; // [rsp+48h] [rbp-49h] BYREF
  int v47; // [rsp+4Ch] [rbp-45h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-41h] BYREF
  float v49; // [rsp+54h] [rbp-3Dh] BYREF
  unsigned int v50; // [rsp+58h] [rbp-39h]
  __int64 v51; // [rsp+60h] [rbp-31h] BYREF
  __int64 v52; // [rsp+68h] [rbp-29h]
  __int64 v53; // [rsp+70h] [rbp-21h] BYREF
  __int64 v54; // [rsp+78h] [rbp-19h]
  __int64 v55; // [rsp+80h] [rbp-11h]

  v9 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 640LL) )
  {
    v48 = 0;
    if ( a6 )
    {
      v46 = 0;
      bFToL(this, &v46, 0LL);
      *((_DWORD *)this + 29) = v46;
      v9 = *(_QWORD *)a3;
      EPOINTQF::operator=(&v53, *(_QWORD *)a3 + 396LL);
      v55 = v42 * v53;
      v53 = v42 * v54;
    }
    else
    {
      v53 = v54;
      v55 = v54;
    }
    v13 = (_DWORD *)((char *)this + 120);
    v14 = bCalcBreakExtra(*(unsigned int *)(v9 + 404), a7, a8, (char *)this + 120);
    v15 = *(_QWORD *)a3;
    if ( v14 )
    {
      v43 = *(_DWORD *)(v15 + 468);
      v44 = *((_DWORD *)this + 29);
      if ( v44 + v43 + *v13 < 0 )
      {
        *v13 = -(v43 + v44);
        v15 = *(_QWORD *)a3;
      }
      EPOINTQF::operator=(&v51, v15 + 396);
      v16 = v45 * v51;
      v51 = v45 * v52;
      v48 = *(_DWORD *)(v15 + 464);
    }
    else
    {
      v51 = v52;
      v16 = v52;
    }
    v17 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v18 = 0;
    v19 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v20 = 0x80000000LL;
    v17->ptl.y = a5;
    p_ptl = &v17->ptl;
    v17->ptl.x = a4;
    v22 = 0x80000000LL;
    v23 = *(_DWORD *)this;
    v46 = 0;
    v47 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v23, v17, v19, &v47, a2, this) )
    {
      if ( v47 )
      {
        v24 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v24;
      }
      v25 = *(float *)this;
      v26 = 0;
      v27 = v51;
      v28 = a9;
      v49 = *(float *)this;
      while ( 1 )
      {
        v29 = p_ptl[-1];
        v30 = v26;
        v31 = *((unsigned int *)this + 29);
        v32 = v18 + *(_DWORD *)(*(_QWORD *)&v29 + 16LL);
        if ( v46 < v32 )
          v32 = v46;
        v26 = v18 + *(_DWORD *)(*(_QWORD *)&v29 + 20LL);
        v46 = v32;
        if ( v30 > v26 )
          v26 = v30;
        v33 = *(_DWORD *)(*(_QWORD *)&v29 + 12LL);
        v20 += *(_QWORD *)(*(_QWORD *)&v29 + 48LL);
        v18 += v33;
        v22 += *(_QWORD *)(*(_QWORD *)&v29 + 56LL);
        v50 = v26;
        if ( (_DWORD)v31 && v33 + (int)v31 > 0 )
        {
          v20 += v55;
          v18 += v31;
          v22 += v53;
        }
        v34 = *((_DWORD *)this + 30);
        if ( v34 )
        {
          v31 = v48;
          if ( p_ptl[-2].x == v48 )
          {
            v18 += v34;
            v20 += v16;
            v22 += v27;
          }
        }
        if ( v28 )
        {
          v47 = 0;
          bFToL(v31, &v47, 0LL);
          v25 = v49;
          v26 = v50;
          *a9++ = v47;
          v28 = a9;
        }
        --LODWORD(v25);
        v35 = v20 >> 32;
        v49 = v25;
        if ( v25 == 0.0 )
          break;
        p_ptl += 3;
        p_ptl->x = a4 + HIDWORD(v20);
        p_ptl->y = HIDWORD(v22) + a5;
      }
      v36 = v26 - v18;
      *((_DWORD *)this + 21) = HIDWORD(v22);
      *((_DWORD *)this + 20) = v35;
      if ( v26 - v18 <= 0 )
        v36 = 0;
      v49 = (float)((float)((float)SHIDWORD(v22) * 0.0625) * (float)((float)SHIDWORD(v22) * 0.0625))
          + (float)((float)((float)(int)v35 * 0.0625) * (float)((float)(int)v35 * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v49);
      v48 = 0;
      v38 = (unsigned int)bFToL(v37, &v48, 10LL) == 0;
      v39 = v50;
      if ( !v38 )
        v39 = v48;
      v40 = v18 < v46;
      *((_DWORD *)this + 28) = v39;
      if ( !v40 )
        v18 = v46;
      *((_DWORD *)this + 26) = v36 + v39;
      *((_DWORD *)this + 24) = v18;
      *((_DWORD *)this + 25) = *(_DWORD *)(*(_QWORD *)a3 + 316LL);
      v41 = *(_DWORD *)(*(_QWORD *)a3 + 320LL);
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 27) = v41;
    }
  }
}
