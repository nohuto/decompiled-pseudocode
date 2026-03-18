/*
 * XREFs of ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1C02BCD28
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00A8720 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0110FF0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G1(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        float **a3,
        LONG a4,
        LONG a5,
        const int *a6,
        int *a7)
{
  float *v9; // rax
  struct _GLYPHPOS *v11; // r14
  int v12; // esi
  float v13; // xmm8_4
  float v14; // xmm6_4
  int v15; // r13d
  float v16; // xmm7_4
  int v17; // edi
  unsigned __int16 *v18; // r9
  struct RFONTOBJ *v19; // rdx
  int v20; // edx
  __int64 v21; // rax
  int v22; // r15d
  GLYPHDEF **p_pgdf; // rax
  GLYPHDEF *v26; // rdx
  int v27; // ecx
  int v28; // ecx
  unsigned int v29; // r8d
  bool v30; // zf
  float v31; // xmm1_4
  float v32; // xmm0_4
  int v33; // eax
  unsigned int v34; // r8d
  GLYPHDEF **v35; // rcx
  int v36; // r8d
  int v37; // ecx
  char v39; // [rsp+48h] [rbp-41h]
  int v40; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v41; // [rsp+50h] [rbp-39h] BYREF
  GLYPHDEF **v42; // [rsp+58h] [rbp-31h]

  v9 = *a3;
  if ( *((_DWORD *)*a3 + 160) )
    return;
  v11 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
  v12 = 0;
  v13 = v9[101];
  v14 = v9[99];
  v15 = 0;
  v16 = v9[100];
  v17 = 0;
  v18 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v11->ptl.y = a5;
  v11->ptl.x = a4;
  v19 = (struct RFONTOBJ *)*(unsigned int *)this;
  v40 = 0;
  if ( !(unsigned int)RFONTOBJ::bGetGlyphMetricsPlus((RFONTOBJ *)a3, v19, v11, v18, &v40, a2, this) )
    return;
  v20 = *((_DWORD *)this + 58);
  if ( v40 )
  {
    v21 = *((_QWORD *)this + 8);
    v20 |= 2u;
    *((_DWORD *)this + 58) = v20;
    *((_QWORD *)this + 4) = v21;
  }
  if ( ((_DWORD)(*a3)[69] & 0x10) == 0 || (v39 = 1, (v20 & 0x1400) != 0) )
    v39 = 0;
  v22 = 0;
  v41 = *(_DWORD *)this;
  p_pgdf = &v11->pgdf;
  v42 = p_pgdf;
  while ( 1 )
  {
    v26 = *p_pgdf;
    if ( v39 )
    {
      v27 = v17 + HIDWORD(v26[1].ppo);
      if ( v17 >= v12 )
        v17 = v12;
      v12 = v17;
      if ( v27 <= v15 )
        v27 = v15;
LABEL_18:
      v15 = v27;
      goto LABEL_19;
    }
    v28 = v17 + LODWORD(v26[2].pgb);
    if ( v28 >= v12 )
      v28 = v12;
    v12 = v28;
    v27 = v17 + HIDWORD(v26[2].ppo);
    if ( v27 > v15 )
      goto LABEL_18;
LABEL_19:
    v22 += *a6++;
    if ( a7 )
      *a7++ = v22;
    v40 = 0;
    bFToL((float)v22 * v13, &v40, 0);
    v30 = v41-- == 1;
    v17 = v40;
    v31 = (float)v40;
    v32 = (float)v40 * v14;
    if ( v30 )
      break;
    v42 += 3;
    v40 &= v29;
    bFToL(v32, &v40, v29);
    v33 = v40 + a4;
    v40 &= v34;
    *((_DWORD *)v42 + 2) = v33;
    bFToL(v31 * v16, &v40, v34);
    v35 = v42;
    *((_DWORD *)v42 + 3) = v40 + a5;
    p_pgdf = v35;
  }
  v41 &= v29;
  bFToL(v32, &v41, v29);
  v36 = v41;
  v41 = 0;
  *((_DWORD *)this + 20) = v36;
  bFToL(v31 * v16, &v41, 0);
  *((_DWORD *)this + 21) = v41;
  if ( v17 <= v15 )
    v17 = v15;
  *((_DWORD *)this + 26) = v17;
  *((_DWORD *)this + 24) = v12;
  *((float *)this + 25) = (*a3)[79];
  v37 = *((_DWORD *)*a3 + 80);
  *((_DWORD *)this + 58) |= 4u;
  *((_DWORD *)this + 27) = v37;
}
