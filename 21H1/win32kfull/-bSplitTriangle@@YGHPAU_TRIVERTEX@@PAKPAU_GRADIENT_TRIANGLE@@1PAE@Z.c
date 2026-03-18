/*
 * XREFs of ?bSplitTriangle@@YGHPAU_TRIVERTEX@@PAKPAU_GRADIENT_TRIANGLE@@1PAE@Z @ 0x1EA00C
 * Callers:
 *     ?bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@@4PAU_POINTL@@@Z @ 0x1EA568 (-bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?lCalculateTriangleArea@@YGJPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z @ 0x1EA8AF (-lCalculateTriangleArea@@YGJPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z.c)
 */

int __userpurge bSplitTriangle@<eax>(
        LONG *a1@<edx>,
        int a2@<ecx>,
        struct _TRIVERTEX *a3,
        unsigned int *a4,
        struct _GRADIENT_TRIANGLE *a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  int v7; // eax
  int v9; // ecx
  LONG v10; // esi
  LONG v11; // edx
  int v12; // esi
  int v13; // eax
  __int64 v14; // kr00_8
  int v15; // edx
  unsigned int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // eax
  __int64 v20; // kr08_8
  int v21; // eax
  int v22; // edx
  int v23; // edi
  int v24; // eax
  struct _TRIVERTEX *v25; // ebx
  int v26; // edi
  unsigned int v27; // ecx
  int v28; // edi
  __int64 v29; // rax
  unsigned int v30; // ecx
  int v31; // edi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // esi
  __int64 v44; // rax
  LONG v45; // ecx
  int v46; // edx
  _DWORD *v47; // edi
  unsigned int v48; // eax
  struct _TRIVERTEX *v50; // [esp+0h] [ebp-94h]
  struct _TRIANGLEDATA *v51; // [esp+4h] [ebp-90h]
  int v53; // [esp+1Ch] [ebp-78h]
  __int64 v54; // [esp+24h] [ebp-70h]
  unsigned int v55; // [esp+30h] [ebp-64h]
  int v56; // [esp+34h] [ebp-60h]
  LONG v57; // [esp+38h] [ebp-5Ch]
  int v58; // [esp+3Ch] [ebp-58h]
  __int64 v59; // [esp+3Ch] [ebp-58h]
  int v60; // [esp+40h] [ebp-54h]
  LONG v61; // [esp+44h] [ebp-50h]
  unsigned int v62; // [esp+4Ch] [ebp-48h]
  int v63; // [esp+50h] [ebp-44h] BYREF
  unsigned int v64; // [esp+54h] [ebp-40h]
  int v65; // [esp+58h] [ebp-3Ch]
  int v66; // [esp+5Ch] [ebp-38h]
  int *v67; // [esp+60h] [ebp-34h]
  int v68; // [esp+64h] [ebp-30h]
  int v69; // [esp+68h] [ebp-2Ch] BYREF
  int v70; // [esp+6Ch] [ebp-28h] BYREF
  int v71; // [esp+70h] [ebp-24h]
  int v72; // [esp+74h] [ebp-20h] BYREF
  struct _TRIVERTEX *v73; // [esp+78h] [ebp-1Ch]
  int v74; // [esp+7Ch] [ebp-18h] BYREF
  int v75; // [esp+80h] [ebp-14h] BYREF
  int v76; // [esp+84h] [ebp-10h]
  int v77; // [esp+88h] [ebp-Ch]

  v7 = *a4;
  v9 = 0;
  v68 = a2;
  v73 = a3;
  v53 = 12 * (v7 - 1);
  v10 = *(LONG *)((char *)&a3->x + v53);
  v56 = *(LONG *)((char *)&a3->y + v53);
  v11 = *(_DWORD *)((char *)&a3->Red + v53);
  v67 = (int *)(a2 + 16 * v56);
  v69 = 16 * v11;
  v57 = v10;
  v12 = a2 + 16 * v10;
  v61 = v11;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v58 = *(_DWORD *)v12;
  v13 = *(_DWORD *)v12 - *v67;
  v60 = *v67;
  if ( v13 < 0 )
    v13 = *v67 - v58;
  v14 = v13;
  v15 = *(_DWORD *)(v12 + 4);
  v65 = v15;
  v16 = v67[1];
  v17 = v15 - v16;
  v64 = v16;
  if ( (int)(v15 - v16) < 0 )
    v17 = v16 - v15;
  v66 = v17 >> 31;
  v55 = v17;
  v18 = *(_DWORD *)(v69 + v68);
  v19 = v58 - v18;
  if ( v58 - v18 < 0 )
    v19 = v18 - v58;
  v20 = v19;
  v21 = *(_DWORD *)(v69 + v68 + 4);
  v22 = v65 - v21;
  v71 = v21;
  if ( v65 - v21 < 0 )
    v22 = v21 - v65;
  v54 = v22;
  if ( v60 - v18 >= 0 )
    v23 = v60 - v18;
  else
    v23 = v18 - v60;
  v59 = v23;
  if ( (int)(v64 - v71) >= 0 )
    v24 = v64 - v71;
  else
    v24 = v71 - v64;
  v25 = v73;
  v71 = v24 >> 31;
  v64 = v24;
  if ( v14 > 0x4000 )
  {
    v26 = v66;
    goto LABEL_27;
  }
  v26 = v66;
  if ( v66 > 0
    || v66 >= 0 && v55 > 0x4000
    || v20 > 0x4000
    || v22 >> 31 >= 0 && (unsigned int)v22 > 0x4000
    || v59 >= 0 && (unsigned int)v59 > 0x4000
    || v24 > 0x4000LL )
  {
LABEL_27:
    if ( !lCalculateTriangleArea((struct _TRIVERTEX *)(v68 + v69), 0, v50, v51) )
      return 0;
    v65 = (v14 * v14 + __PAIR64__(v26, v55) * __PAIR64__(v26, v55)) >> 32;
    v62 = v14 * v14 + v55 * v55;
    v67 = (int *)((unsigned __int64)(v20 * v20 + v54 * v54) >> 32);
    v66 = v59 * v59 + v64 * v64;
    v28 = (v59 * v59 + __PAIR64__(v71, v64) * __PAIR64__(v71, v64)) >> 32;
    v27 = v66;
    HIDWORD(v29) = v65;
    if ( v65 < (int)v67 )
    {
      v30 = v20 * v20 + v54 * v54;
    }
    else
    {
      if ( v65 > (int)v67 )
        goto LABEL_32;
      v30 = v20 * v20 + v54 * v54;
      if ( v62 > v30 )
      {
        v27 = v66;
LABEL_32:
        if ( v65 > v28 || v65 >= v28 && v62 > v27 )
          goto LABEL_43;
        LODWORD(v29) = v53;
        v12 = v68 + v69;
        v57 = *(_DWORD *)((char *)&v73->Red + v53);
LABEL_42:
        v61 = *(LONG *)((char *)&v73->x + v29);
LABEL_43:
        v31 = 16 * v56;
        goto LABEL_44;
      }
    }
    LODWORD(v29) = v53;
    HIDWORD(v29) = *(_DWORD *)((char *)&v73->Red + v53);
    if ( (int)v67 >= v28 && ((int)v67 > v28 || v30 > v66) )
    {
      v31 = v69;
      v56 = *(_DWORD *)((char *)&v73->Red + v53);
      v61 = *(LONG *)((char *)&v73->y + v53);
LABEL_44:
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      v63 = 0;
      v64 = 0;
      v69 = 0;
      LODWORD(v29) = &v63;
      ltoef_c(v29, 2, &v63);
      LODWORD(v32) = &v70;
      ltoef_c(v32, *(_DWORD *)v12, &v70);
      LODWORD(v33) = v68;
      ltoef_c(v33, *(_DWORD *)(v68 + v31), &v72);
      subff3_c(&v72, &v72, &v70);
      divff3_c(&v72, &v72, &v63);
      addff3_c(&v70, &v70, &v72);
      eftol_c(&v70, &v74, 1);
      LODWORD(v34) = &v70;
      ltoef_c(v34, *(_DWORD *)(v12 + 4), &v70);
      LODWORD(v35) = v68;
      ltoef_c(v35, *(_DWORD *)(v68 + v31 + 4), &v72);
      subff3_c(&v72, &v72, &v70);
      divff3_c(&v72, &v72, &v63);
      addff3_c(&v70, &v70, &v72);
      eftol_c(&v70, &v75, 1);
      LODWORD(v36) = *(unsigned __int16 *)(v12 + 8);
      ltoef_c(v36, v36, &v70);
      LODWORD(v37) = *(unsigned __int16 *)(v68 + v31 + 8);
      ltoef_c(v37, v37, &v72);
      subff3_c(&v72, &v72, &v70);
      divff3_c(&v72, &v72, &v63);
      addff3_c(&v70, &v70, &v72);
      eftol_c(&v70, &v69, 1);
      LOWORD(v76) = v69;
      LODWORD(v38) = *(unsigned __int16 *)(v12 + 10);
      ltoef_c(v38, v38, &v70);
      LODWORD(v39) = *(unsigned __int16 *)(v68 + v31 + 10);
      ltoef_c(v39, v39, &v72);
      subff3_c(&v72, &v72, &v70);
      divff3_c(&v72, &v72, &v63);
      addff3_c(&v70, &v70, &v72);
      eftol_c(&v70, &v69, 1);
      HIWORD(v76) = v69;
      LODWORD(v40) = *(unsigned __int16 *)(v12 + 12);
      ltoef_c(v40, v40, &v70);
      LODWORD(v41) = *(unsigned __int16 *)(v68 + v31 + 12);
      ltoef_c(v41, v41, &v72);
      subff3_c(&v72, &v72, &v70);
      divff3_c(&v72, &v72, &v63);
      addff3_c(&v70, &v70, &v72);
      eftol_c(&v70, &v69, 1);
      LOWORD(v77) = v69;
      LODWORD(v42) = *(unsigned __int16 *)(v12 + 14);
      ltoef_c(v42, v42, &v70);
      v43 = v68;
      LODWORD(v44) = *(unsigned __int16 *)(v68 + v31 + 14);
      ltoef_c(v44, v44, &v72);
      subff3_c(&v72, &v72, &v70);
      divff3_c(&v72, &v72, &v63);
      addff3_c(&v70, &v70, &v72);
      eftol_c(&v70, &v69, 1);
      HIWORD(v77) = v69;
      v45 = *a1;
      v46 = *a4;
      v47 = (_DWORD *)(v43 + 16 * *a1);
      v48 = 12 * *a4;
      *v47++ = v74;
      *v47++ = v75;
      *v47 = v76;
      v47[1] = v77;
      *(LONG *)((char *)&v25->x + v48) = v57;
      *(LONG *)((char *)&v25->y + v48) = v61;
      *(_DWORD *)((char *)&v25->Red + v48) = v45;
      *(LONG *)((char *)&v25[1].y + v48) = v45;
      *(_DWORD *)((char *)&v25->Blue + v48) = v56;
      *(LONG *)((char *)&v25[1].x + v48) = v61;
      *(_WORD *)((char *)&a5->Vertex1 + v46) = 1;
      *a4 += 2;
      ++*a1;
      return 1;
    }
    v12 = v69 + v68;
    v57 = *(_DWORD *)((char *)&v73->Red + v53);
    goto LABEL_42;
  }
  return v9;
}
