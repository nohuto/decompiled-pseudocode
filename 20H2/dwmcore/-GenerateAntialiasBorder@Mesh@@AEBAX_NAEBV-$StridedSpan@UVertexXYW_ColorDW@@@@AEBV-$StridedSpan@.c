/*
 * XREFs of ?GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x1800BB698
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x180092E00 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 * Callees:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x1800BB7C4 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedS.c)
 *     sqrtf_0 @ 0x1800EE99B (sqrtf_0.c)
 */

_DWORD *__fastcall Mesh::GenerateAntialiasBorder(
        __int64 a1,
        char a2,
        _QWORD *a3,
        _QWORD *a4,
        int *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rbp
  __int64 v10; // r13
  int v11; // r11d
  int v12; // r12d
  int v13; // eax
  _DWORD *result; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  float v17; // xmm12_4
  char v18; // cl
  float v19; // xmm13_4
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  bool v24; // zf
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // r10
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 v30; // rsi
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm7_4
  float v34; // xmm0_4
  float v35; // xmm9_4
  float v36; // xmm10_4
  int v37; // eax
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm5_4
  float v42; // xmm11_4
  int v43; // eax
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm4_4
  int v47; // ecx
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm6_4
  float v51; // xmm7_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  __int64 v54; // rdi
  int v55; // esi
  __int16 *v56; // rbx
  char v57; // r15
  int v58; // ebp
  __int16 **v59; // rcx
  __int16 v60; // r11
  __int16 v61; // r10
  __int16 *v62; // rax
  __int64 v63; // rcx
  __int16 v64; // r9
  __int64 v65; // rax
  int v66; // [rsp+40h] [rbp-E8h]
  int v67; // [rsp+44h] [rbp-E4h]
  int v68; // [rsp+44h] [rbp-E4h]
  int v69; // [rsp+48h] [rbp-E0h]
  __int64 v70; // [rsp+50h] [rbp-D8h]
  char v72; // [rsp+138h] [rbp+10h]

  v72 = a2;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  v11 = *a5;
  v66 = *a5;
  a7 = *a5;
  v12 = *a8;
  v69 = *a8;
  v67 = *a8;
  if ( (*(_BYTE *)(a1 + 76) & 0x30) != 0x20 )
  {
    v15 = *(_QWORD *)(a1 + 16);
    v68 = 0;
    v16 = *(_QWORD *)(v15 + 64);
    if ( v16 )
    {
      do
      {
        if ( (*(_BYTE *)(v16 + 28) & 0xC) != 0 )
        {
          v17 = *(float *)(v16 + 16);
          v18 = 0;
          v24 = (*(_BYTE *)(v16 + 28) & 2) == 0;
          v19 = *(float *)(v16 + 20);
          LOBYTE(a7) = 0;
          if ( v24 )
          {
            v20 = *(_QWORD *)(v16 + 48);
            v21 = *(_QWORD *)(v16 + 56);
          }
          else
          {
            LODWORD(v17) ^= _xmm;
            v18 = 1;
            LODWORD(v19) ^= _xmm;
            v20 = *(_QWORD *)(v16 + 56);
            v21 = *(_QWORD *)(v16 + 48);
            LOBYTE(a7) = 1;
          }
          v70 = v21;
          v22 = v20;
          if ( v20 )
          {
            while ( 1 )
            {
              v23 = 0LL;
              if ( v22 == v20 )
                break;
              if ( v22 != v21 || (v23 = *(_QWORD *)(v16 + 80), (*(_BYTE *)(v23 + 28) & 0xC) != 0xC) )
              {
LABEL_19:
                v25 = *((_DWORD *)v9 + 2);
                v26 = *((_DWORD *)v8 + 2);
                v27 = *v9 + v25 * **(_DWORD **)v22;
                v28 = 0LL;
                v29 = *v8 + **(_DWORD **)v22 * v26;
                v30 = 0LL;
                if ( v72 && (*(_BYTE *)(v16 + 28) & 0xC) == 0xC )
                {
                  ++v68;
                  v66 = v11 + 1;
                  v30 = *a3 + v11 * v25;
                  v28 = *a4 + v11 * v26;
                  *(_OWORD *)v30 = *(_OWORD *)v27;
                  *(_OWORD *)v28 = *(_OWORD *)v29;
                  *(_DWORD *)(v28 + 12) = 0;
                  if ( *(char *)(v10 + 76) >= 0 )
                    *(_DWORD *)(v30 + 12) = 0;
                  else
                    *(_BYTE *)(v30 + 15) = 0;
                }
                v31 = v17 * -0.5;
                v32 = 0.0;
                v33 = v19 * 0.5;
                v34 = 0.0;
                v35 = 0.0;
                v36 = 0.0;
                if ( v23 )
                {
                  v37 = *(_DWORD *)(v23 + 28);
                  v38 = *(float *)(v23 + 16);
                  v39 = *(float *)(v23 + 20);
                  if ( (v37 & 2) != 0 )
                  {
                    LODWORD(v38) ^= _xmm;
                    LODWORD(v39) ^= _xmm;
                  }
                  v32 = 0.0;
                  v35 = 0.0;
                  v36 = 0.0;
                  v40 = (float)(v38 * v33) + (float)(v31 * v39);
                  v41 = v38 * v40;
                  v42 = v39 * v40;
                  v34 = 0.0;
                  v33 = v41;
                  v31 = v42;
                  if ( (v37 & 0xC) != 0 )
                  {
                    v43 = *(_DWORD *)(v23 + 28) & 8;
                    v44 = (float)((float)(v39 * v17) - (float)(v38 * v19)) * 0.5;
                    v45 = v17 * v44;
                    v46 = v19 * v44;
                    v47 = *(_DWORD *)(v23 + 28) & 4;
                    if ( v47 )
                    {
                      v32 = 0.0 - v45;
                      v34 = 0.0 - v46;
                    }
                    else if ( v43 )
                    {
                      v32 = v45 + 0.0;
                      v34 = v46 + 0.0;
                    }
                    v35 = 0.0;
                    v36 = 0.0;
                    v33 = v41;
                    v31 = v42;
                    if ( v30 )
                    {
                      if ( v43 )
                      {
                        v35 = v45 + 0.0;
                        v36 = v46 + 0.0;
                      }
                      else
                      {
                        v35 = 0.0;
                        v36 = 0.0;
                        if ( v47 )
                        {
                          v35 = 0.0 - v45;
                          v33 = v41;
                          v36 = 0.0 - v46;
                          v31 = v42;
                        }
                      }
                    }
                  }
                }
                if ( (*(_BYTE *)(v16 + 28) & 4) != 0 )
                {
                  v32 = v32 - v33;
                  v34 = v34 - v31;
                }
                else if ( (*(_BYTE *)(v16 + 28) & 8) != 0 )
                {
                  v32 = v32 + v33;
                  v34 = v34 + v31;
                }
                v48 = v32 + *(float *)v29;
                v49 = v34 + *(float *)(v29 + 4);
                *(_DWORD *)(v27 + 8) = 1065353216;
                *(float *)v27 = v48;
                *(float *)(v27 + 4) = v49;
                *(float *)(v29 + 8) = sqrtf_0((float)(v34 * v34) + (float)(v32 * v32));
                if ( v30 )
                {
                  v50 = v31 + v36;
                  v51 = v33 + v35;
                  v52 = v50 + *(float *)(v28 + 4);
                  v53 = v51 + *(float *)v28;
                  *(_DWORD *)(v30 + 8) = 1065353216;
                  *(float *)(v30 + 4) = v52;
                  *(float *)v30 = v53;
                  *(float *)(v28 + 8) = sqrtf_0((float)(v50 * v50) + (float)(v51 * v51));
                }
                v18 = a7;
                v9 = a3;
                v8 = a4;
                v11 = v66;
                goto LABEL_44;
              }
              if ( v23 != *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL) )
              {
                v24 = (*(_BYTE *)(v16 + 28) & 0xC) == 12;
LABEL_18:
                if ( v24 )
                  goto LABEL_19;
              }
LABEL_44:
              if ( v18 )
                v22 = *(_QWORD *)(v22 + 56);
              else
                v22 = *(_QWORD *)(v22 + 64);
              v21 = v70;
              if ( !v22 )
                goto LABEL_48;
            }
            v23 = *(_QWORD *)(v16 + 72);
            if ( (*(_BYTE *)(v23 + 28) & 0xC) != 0xC )
              goto LABEL_19;
            if ( (*(_BYTE *)(v16 + 28) & 0xC) != 0xC )
              goto LABEL_44;
            v24 = v16 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL);
            goto LABEL_18;
          }
        }
LABEL_48:
        v15 = *(_QWORD *)(v10 + 16);
        v16 = *(_QWORD *)(v16 + 80);
      }
      while ( v16 != *(_QWORD *)(v15 + 64) && v16 );
      v12 = v69;
      a2 = v72;
    }
    if ( !a2 || (v54 = *(_QWORD *)(v15 + 64), v55 = 0, !v54) )
    {
LABEL_73:
      v13 = v66;
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)(v54 + 28) & 0xC) == 0xC )
      {
        if ( (*(_BYTE *)(v54 + 28) & 2) != 0 )
        {
          v56 = *(__int16 **)(v54 + 56);
          v57 = 1;
        }
        else
        {
          v56 = *(__int16 **)(v54 + 48);
          v57 = 0;
        }
        if ( v56 )
          break;
      }
LABEL_71:
      v54 = *(_QWORD *)(v54 + 80);
      if ( v54 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL) || !v54 )
        goto LABEL_73;
    }
    v58 = v55 + 1;
    while ( 1 )
    {
      v59 = (__int16 **)(v57 ? *((_QWORD *)v56 + 7) : *((_QWORD *)v56 + 8));
      if ( v59 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(v54 + 80) + 28LL) & 0xC) != 0xC )
        goto LABEL_65;
LABEL_66:
      if ( v57 )
        v56 = (__int16 *)*((_QWORD *)v56 + 7);
      else
        v56 = (__int16 *)*((_QWORD *)v56 + 8);
      if ( !v56 )
      {
        v10 = a1;
        goto LABEL_71;
      }
    }
    v60 = v55 + *(_WORD *)a5;
    v61 = **(_WORD **)v56;
    v62 = *v59;
    v63 = v12 + 1;
    v64 = *v62;
    v65 = v12;
    v12 += 6;
    *(_WORD *)(a6 + 2 * v65) = v60;
    *(_WORD *)(a6 + 2 * v63) = *(_WORD *)a5 + v58 % v68;
    *(_WORD *)(a6 + 2 * v63 + 2) = v64;
    *(_WORD *)(a6 + 2 * v63 + 4) = v60;
    *(_WORD *)(a6 + 2 * v63 + 6) = v64;
    *(_WORD *)(a6 + 2 * v63 + 8) = v61;
LABEL_65:
    ++v55;
    ++v58;
    goto LABEL_66;
  }
  Mesh::GenerateGridAntialiasBorder(a1, a2, (_DWORD)a3, (_DWORD)a4, (__int64)&a7, a6);
  v13 = a7;
  v12 = v67;
LABEL_3:
  *a5 = v13;
  result = a8;
  *a8 = v12;
  return result;
}
