/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z @ 0x2246AB
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YGEVEFLOAT@@JJPAJ@Z @ 0xE29E4 (-bCalcBreakExtra@@YGEVEFLOAT@@JJPAJ@Z.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _fxtoef_c@8 @ 0xEEE93 (_fxtoef_c@8.c)
 *     _eftofx_c@8 @ 0xEEF3A (_eftofx_c@8.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _sqrtf2_c@8 @ 0xEF21B (_sqrtf2_c@8.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ??4EPOINTQF@@QAEXAAVEPOINTFL@@@Z @ 0x223A5A (--4EPOINTQF@@QAEXAAVEPOINTFL@@@Z.c)
 */

void __thiscall ESTROBJ::vCharPos_G2(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        int a8,
        int *a9)
{
  struct RFONTOBJ *v9; // esi
  int v11; // eax
  int v12; // eax
  int *v13; // edi
  bool v14; // al
  int *v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  struct _GLYPHPOS *v19; // ecx
  unsigned __int16 *v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // esi
  int v24; // ecx
  __int64 v25; // rax
  struct XDCOBJ *v26; // esi
  unsigned __int64 v27; // kr00_8
  unsigned __int64 v28; // kr08_8
  int *v29; // ecx
  POINTL *v30; // esi
  __int64 v31; // rax
  bool v32; // zf
  int *v33; // eax
  int v34; // ecx
  char *v35; // eax
  int v36; // eax
  unsigned int v37; // [esp-18h] [ebp-80h]
  __int64 v38; // [esp+10h] [ebp-58h] BYREF
  __int64 v39; // [esp+18h] [ebp-50h]
  __int64 v40; // [esp+20h] [ebp-48h] BYREF
  __int64 v41; // [esp+28h] [ebp-40h]
  int v42[2]; // [esp+30h] [ebp-38h] BYREF
  int v43[2]; // [esp+38h] [ebp-30h] BYREF
  int v44; // [esp+40h] [ebp-28h]
  int v45; // [esp+44h] [ebp-24h]
  int v46; // [esp+48h] [ebp-20h]
  int v47; // [esp+4Ch] [ebp-1Ch]
  int v48; // [esp+50h] [ebp-18h]
  int v49; // [esp+54h] [ebp-14h] BYREF
  int v50; // [esp+58h] [ebp-10h]
  POINTL *p_ptl; // [esp+5Ch] [ebp-Ch]
  unsigned __int64 v52; // [esp+60h] [ebp-8h]
  struct XDCOBJ *y; // [esp+70h] [ebp+8h]
  struct XDCOBJ *v54; // [esp+70h] [ebp+8h]
  int v55; // [esp+78h] [ebp+10h]
  int v56; // [esp+80h] [ebp+18h]
  int v57; // [esp+80h] [ebp+18h]
  int v58; // [esp+84h] [ebp+1Ch]
  int v59; // [esp+88h] [ebp+20h]

  v9 = a3;
  v11 = *(_DWORD *)a3;
  if ( !*(_DWORD *)(*(_DWORD *)a3 + 640) )
  {
    v48 = 0;
    if ( a6 )
    {
      *((_DWORD *)this + 24) = lCvt(*(_DWORD *)(v11 + 416), *(_DWORD *)(v11 + 420), a6);
      EPOINTQF::operator=(&v40, (int *)(*(_DWORD *)a3 + 400));
      v12 = *((_DWORD *)this + 24);
      v40 *= v12;
      v9 = a3;
      v41 *= v12;
      v11 = *(_DWORD *)a3;
    }
    v13 = (int *)((char *)this + 100);
    v14 = bCalcBreakExtra(a7, a8, (int *)this + 25, *(_DWORD *)(v11 + 416), *(_DWORD *)(v11 + 420));
    v15 = *(int **)v9;
    if ( v14 )
    {
      v16 = v15[132];
      v56 = *((_DWORD *)this + 24);
      if ( *v13 + v16 + v56 < 0 )
      {
        *v13 = -(v16 + v56);
        v15 = *(int **)v9;
      }
      EPOINTQF::operator=(&v38, v15 + 100);
      v17 = *v13;
      v38 *= *v13;
      v9 = a3;
      v39 *= v17;
      v15 = *(int **)a3;
      v48 = *(_DWORD *)(*(_DWORD *)a3 + 524);
    }
    v44 = v15[106];
    v18 = v15[107];
    v19 = (struct _GLYPHPOS *)*((_DWORD *)this + 12);
    v45 = v18;
    v20 = (unsigned __int16 *)*((_DWORD *)this + 8);
    v19->ptl.x = a4;
    v21 = 0;
    v49 = 0;
    p_ptl = &v19->ptl;
    v19->ptl.y = a5;
    v58 = 0x80000000;
    v59 = 0x80000000;
    v37 = *(_DWORD *)this;
    v50 = 0;
    v57 = 0;
    if ( RFONTOBJ::bGetGlyphMetricsPlus(v9, v37, v19, v20, &v49, a2, this) )
    {
      if ( v49 )
      {
        v22 = *((_DWORD *)this + 12);
        *((_DWORD *)this + 48) |= 2u;
        *((_DWORD *)this + 7) = v22;
      }
      v23 = 0;
      v24 = 0;
      v49 = *(_DWORD *)this;
      HIDWORD(v25) = 0;
      while ( 1 )
      {
        y = (struct XDCOBJ *)p_ptl[-1].y;
        if ( v50 >= v21 + *((_DWORD *)y + 3) )
          v50 = v21 + *((_DWORD *)y + 3);
        if ( v23 <= v21 + *((_DWORD *)y + 4) )
          v57 = v21 + *((_DWORD *)y + 4);
        v26 = y;
        v21 += *((_DWORD *)y + 2);
        v54 = (struct XDCOBJ *)*((_DWORD *)y + 2);
        v27 = *((_QWORD *)v26 + 6) + __PAIR64__(v24, v58);
        v24 = HIDWORD(v27);
        v58 = v27;
        LODWORD(v25) = *((_DWORD *)this + 24);
        v28 = *((_QWORD *)v26 + 7) + __PAIR64__(HIDWORD(v25), v59);
        HIDWORD(v25) = HIDWORD(v28);
        v59 = v28;
        v52 = __PAIR64__(HIDWORD(v27), HIDWORD(v28));
        v47 = v25;
        if ( (_DWORD)v25 && (int)((int)v54 + v25) > 0 )
        {
          v21 += v47;
          v24 = (v40 + v27) >> 32;
          v58 = v40 + v27;
          HIDWORD(v25) = (v41 + v28) >> 32;
          v59 = v41 + v28;
          v52 = __PAIR64__(v24, HIDWORD(v25));
        }
        LODWORD(v25) = v58;
        if ( *((_DWORD *)this + 25) )
        {
          v24 = HIDWORD(v52);
          if ( p_ptl[-1].x == v48 )
          {
            v21 += *((_DWORD *)this + 25);
            v24 = (v38 + __PAIR64__(HIDWORD(v52), v58)) >> 32;
            LODWORD(v25) = v38 + v58;
            v58 += v38;
            HIDWORD(v25) = (v39 + __PAIR64__(HIDWORD(v25), v59)) >> 32;
            v59 += v39;
            v52 = __PAIR64__(v24, HIDWORD(v25));
          }
        }
        v46 = v25;
        if ( a9 )
        {
          LODWORD(v25) = lCvt(v44, v45, v21);
          v29 = a9;
          HIDWORD(v25) = v52;
          *a9 = v25;
          a9 = v29 + 1;
          v24 = HIDWORD(v52);
        }
        if ( !--v49 )
          break;
        p_ptl += 2;
        v30 = p_ptl;
        p_ptl->x = v24 + a4;
        v30->y = HIDWORD(v25) + a5;
        v23 = v57;
      }
      *((_DWORD *)this + 15) = v24;
      *((_DWORD *)this + 16) = HIDWORD(v25);
      v55 = v57 - v21;
      if ( v57 - v21 <= 0 )
        v55 = 0;
      LODWORD(v25) = v43;
      v43[0] = 0;
      v43[1] = 0;
      v42[0] = 0;
      v42[1] = 0;
      fxtoef_c(v25, v24, v43);
      mulff3_c(v43, v43, v43);
      HIDWORD(v31) = v52;
      LODWORD(v31) = v42;
      fxtoef_c(v31, v52, v42);
      mulff3_c(v42, v42, v42);
      addff3_c(v43, v43, v42);
      sqrtf2_c(v43, (unsigned int *)v43);
      a9 = 0;
      v32 = !eftofx_c(v43, (int *)&a9);
      v33 = a9;
      if ( v32 )
        v33 = (int *)v57;
      v34 = v50;
      *((_DWORD *)this + 23) = v33;
      v35 = (char *)v33 + v55;
      if ( v21 < v34 )
        v34 = v21;
      *((_DWORD *)this + 19) = v34;
      *((_DWORD *)this + 21) = v35;
      *((_DWORD *)this + 20) = *(_DWORD *)(*(_DWORD *)a3 + 320);
      v36 = *(_DWORD *)(*(_DWORD *)a3 + 324);
      *((_DWORD *)this + 48) |= 4u;
      *((_DWORD *)this + 22) = v36;
    }
  }
}
