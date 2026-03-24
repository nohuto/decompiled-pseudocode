/*
 * XREFs of ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x1800BF9A4
 * Callers:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x1800BF878 (-GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@.c)
 * Callees:
 *     OffsetBaseVertices @ 0x1800BFF4C (OffsetBaseVertices.c)
 *     CopyBaseVertices @ 0x1800C0004 (CopyBaseVertices.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall Mesh::GenerateGridAntialiasBorder(
        __int64 a1,
        char a2,
        __int64 *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  char v9; // r15
  __int64 *v11; // r13
  int v12; // r14d
  int v13; // r9d
  int v14; // r10d
  int v15; // ecx
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rcx
  bool v21; // zf
  int v22; // edi
  __int64 *v23; // r8
  int v24; // r13d
  int v25; // ebx
  int v26; // r11d
  int v27; // r11d
  __int64 *v28; // rbx
  __int64 v29; // rcx
  _BYTE *v30; // rcx
  int v31; // eax
  int v32; // r13d
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // rsi
  __int64 v38; // rbx
  _DWORD *v39; // r10
  int v40; // r8d
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  int v46; // r12d
  unsigned int v47; // r10d
  __int64 v48; // rcx
  int v49; // r11d
  __int16 v50; // dx
  int v51; // r9d
  __int64 v52; // r10
  int v53; // ebx
  __int64 v54; // r8
  __int64 v55; // r15
  __int64 v56; // r14
  unsigned __int16 v57; // di
  int v58; // eax
  __int16 v59; // dx
  __int16 v60; // ax
  __int64 result; // rax
  char v62; // [rsp+1Fh] [rbp-E1h] BYREF
  __int64 v63; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v64; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v65; // [rsp+30h] [rbp-D0h]
  int v66; // [rsp+34h] [rbp-CCh]
  int v67; // [rsp+38h] [rbp-C8h]
  int v68; // [rsp+3Ch] [rbp-C4h]
  __int64 *v69; // [rsp+40h] [rbp-C0h]
  char *v70; // [rsp+48h] [rbp-B8h]
  __int64 v71; // [rsp+50h] [rbp-B0h]
  _BYTE *v72; // [rsp+58h] [rbp-A8h]
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  int v74; // [rsp+68h] [rbp-98h]
  int v75; // [rsp+6Ch] [rbp-94h]
  __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  int v77; // [rsp+78h] [rbp-88h]
  int v78; // [rsp+7Ch] [rbp-84h]
  __int64 v79; // [rsp+80h] [rbp-80h]
  _DWORD *v80; // [rsp+88h] [rbp-78h]
  _DWORD *v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+98h] [rbp-68h] BYREF
  int v83; // [rsp+A0h] [rbp-60h]
  int v84; // [rsp+A4h] [rbp-5Ch]
  __int64 v85; // [rsp+A8h] [rbp-58h] BYREF
  int v86; // [rsp+B0h] [rbp-50h]
  int v87; // [rsp+B4h] [rbp-4Ch]
  __int64 v88; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v89[2]; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v91[2]; // [rsp+D0h] [rbp-30h]
  __int64 v92; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v93[2]; // [rsp+E0h] [rbp-20h]
  __int64 v94; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v95[2]; // [rsp+F0h] [rbp-10h]
  _DWORD v96[4]; // [rsp+F8h] [rbp-8h]
  _DWORD v97[4]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v98[8]; // [rsp+118h] [rbp+18h]

  v96[3] = -1;
  v9 = a2;
  v79 = a6;
  v11 = a3;
  v12 = *a8;
  v13 = 0;
  v80 = a5;
  v81 = a8;
  v14 = *a5;
  v15 = *(_DWORD *)(a1 + 48);
  BYTE4(v63) = a2;
  v16 = *(unsigned int *)(a1 + 52);
  v69 = a3;
  v68 = v14;
  HIDWORD(v64) = v12;
  v67 = v14;
  v66 = 0;
  LODWORD(v63) = 65537;
  v97[0] = v16 * (v15 - 1);
  v97[2] = v16 - 1;
  LODWORD(v64) = 257;
  v98[0] = v15;
  v98[1] = v16;
  v98[2] = v15;
  v98[3] = v16;
  v97[3] = v15 * v16 - 1;
  v97[1] = 0;
  v96[0] = -(int)v16;
  v96[1] = 1;
  v96[2] = v16;
  if ( !v9 )
    goto LABEL_24;
  v17 = 0;
  v18 = 14LL;
  v65 = 0;
  v19 = 0LL;
  do
  {
    if ( v17 )
    {
      v70 = &v62 + v19;
      v72 = (char *)&v63 + v19 + 7;
      v20 = v18 * 4;
    }
    else
    {
      v20 = 72LL;
      v16 = (unsigned __int64)&v64 + 3;
      v70 = (char *)&v63 + 3;
      v72 = (char *)&v64 + 3;
    }
    v21 = *(_DWORD *)(a1 + v18 * 4 + 4) == 12;
    v71 = v20;
    if ( v21 )
    {
      v22 = v93[v18] - 1;
    }
    else
    {
      if ( *(_DWORD *)(v20 + a1) != 12 )
        goto LABEL_17;
      v22 = 1;
    }
    if ( v22 > 0 )
    {
      v23 = v69;
      v24 = v13 + v14;
      v25 = v91[v18];
      v26 = v89[v18];
      v95[v18] = v13 + v14;
      v86 = *((_DWORD *)v23 + 2);
      v84 = v22;
      v87 = v22;
      v82 = *v23 + v86 * v25;
      v83 = v86 * v26;
      v85 = *v23 + v86 * (v13 + v14);
      CopyBaseVertices(&v85, &v82);
      v91[0] = *(_DWORD *)(a4 + 8);
      v89[1] = v22;
      v91[1] = v22;
      v88 = *(_QWORD *)a4 + v91[0] * v25;
      v89[0] = v91[0] * v27;
      v90 = *(_QWORD *)a4 + v91[0] * v24;
      CopyBaseVertices(&v90, &v88);
      if ( (*(_BYTE *)(a1 + v18 * 4 + 4) & 0xC) != 0 )
      {
        LOBYTE(v16) = *((_BYTE *)&v64 + v19);
        if ( (*(_BYTE *)(a1 + v18 * 4 + 4) & 8) != 0 )
          LOBYTE(v16) = (_BYTE)v16 == 0;
        v28 = v69;
        v93[0] = *(_DWORD *)(a4 + 8);
        v93[1] = v22;
        v95[0] = *((_DWORD *)v69 + 2);
        v92 = *(_QWORD *)a4 + v93[0] * v24;
        v95[1] = v22;
        v94 = *v69 + v95[0] * v24;
        v29 = v94;
        LOBYTE(v29) = *((_BYTE *)&v63 + v19);
        OffsetBaseVertices(v29, v16, &v94, &v92, v63, v64);
      }
      else
      {
        v28 = v69;
      }
      if ( (*(_BYTE *)(v71 + a1) & 0xC) != 0 )
      {
        v30 = v72;
        LOBYTE(v16) = *v72;
        if ( (*(_BYTE *)(v71 + a1) & 8) != 0 )
          LOBYTE(v16) = (_BYTE)v16 == 0;
        v31 = *(_DWORD *)(a4 + 8) * v24;
        v74 = *(_DWORD *)(a4 + 8);
        v75 = 1;
        v78 = 1;
        v73 = *(_QWORD *)a4 + v31;
        v32 = *((_DWORD *)v28 + 2) * v24;
        v77 = *((_DWORD *)v28 + 2);
        v33 = v32;
        v11 = v69;
        v76 = *v69 + v33;
        LOBYTE(v30) = *v70;
        OffsetBaseVertices(v30, v16, &v76, &v73, v63, v64);
      }
      else
      {
        v11 = v69;
      }
      v17 = v65;
      v13 = v22 + v66;
      v14 = v68;
      v66 += v22;
    }
LABEL_17:
    ++v17;
    ++v19;
    ++v18;
    v65 = v17;
  }
  while ( v17 < 4 );
  if ( v13 > 0 )
  {
    LODWORD(v16) = v14;
    v34 = (unsigned int)v13;
    do
    {
      *(_DWORD *)((int)v16 * *(_DWORD *)(a4 + 8) + *(_QWORD *)a4 + 12LL) = 0;
      v35 = *v11 + (int)v16 * *((_DWORD *)v11 + 2);
      if ( *(char *)(a1 + 76) < 0 )
        *(_BYTE *)(v35 + 15) = 0;
      else
        *(_DWORD *)(v35 + 12) = 0;
      v16 = (unsigned int)(v16 + 1);
      --v34;
    }
    while ( v34 );
  }
  v12 = HIDWORD(v64);
  v9 = BYTE4(v63);
  v68 = v13 + v14;
LABEL_24:
  v36 = 0;
  v37 = a1 - (_QWORD)v97;
  v38 = 0LL;
  v71 = v37;
  do
  {
    v39 = &v97[v38];
    if ( (*((_BYTE *)v39 + v37 + 60) & 0xC) != 0 )
    {
      LOBYTE(v16) = *((_BYTE *)&v64 + v38);
      if ( (*((_BYTE *)v39 + v37 + 60) & 4) == 0 )
        LOBYTE(v16) = (_BYTE)v16 == 0;
      v40 = *((_DWORD *)v11 + 2);
      v41 = *v39 * *(_DWORD *)(a4 + 8);
      v78 = v98[v38];
      v75 = v78;
      v42 = *(_QWORD *)a4 + v41;
      v43 = *(_DWORD *)(a4 + 8) * v96[v38];
      v76 = v42;
      v77 = v43;
      v44 = *v39 * v40;
      v74 = v96[v38] * v40;
      v73 = *v11 + v44;
      v45 = v73;
      LOBYTE(v45) = *((_BYTE *)&v63 + v38);
      OffsetBaseVertices(v45, v16, &v73, &v76, v63, v64);
    }
    ++v36;
    ++v38;
  }
  while ( v36 < 4 );
  if ( v9 )
  {
    v46 = v66;
    v47 = 0;
    LODWORD(v63) = 0;
    v48 = 0LL;
    while ( 1 )
    {
      if ( *(_DWORD *)((char *)&v97[v48 + 15] + v37) == 12 )
      {
        v49 = v97[v48];
        v50 = v67;
        v51 = v98[v48 + 4] - v67;
        if ( v98[v48] - 1 > 0 )
        {
          v52 = v79;
          v53 = v51 + 1;
          v54 = v12;
          v55 = (unsigned int)(v98[v48] - 1);
          do
          {
            v56 = *v11;
            v57 = v51 + v50;
            v58 = v53 % v46;
            LOWORD(v58) = v67 + v53 % v46;
            v59 = v49 + LOWORD(v96[v48]);
            v65 = v58;
            v72 = (_BYTE *)(*((_DWORD *)v11 + 2) * v57);
            v70 = (char *)(*((_DWORD *)v11 + 2) * (unsigned __int16)v58);
            if ( *(float *)&v72[v56] != *(float *)&v70[v56] || *(float *)&v72[v56 + 4] != *(float *)&v70[v56 + 4] )
            {
              v60 = v65;
              HIDWORD(v64) += 6;
              *(_WORD *)(v52 + 2 * v54) = v57;
              *(_WORD *)(v52 + 2 * v54 + 2) = v60;
              *(_WORD *)(v52 + 2 * v54 + 4) = v59;
              *(_WORD *)(v52 + 2 * v54 + 6) = v57;
              *(_WORD *)(v52 + 2 * v54 + 8) = v59;
              *(_WORD *)(v52 + 2 * v54 + 10) = v49;
              v54 += 6LL;
            }
            v49 += v96[v48];
            LOWORD(v51) = v51 + 1;
            v50 = v67;
            ++v53;
            --v55;
          }
          while ( v55 );
          v37 = v71;
          v47 = v63;
        }
      }
      ++v47;
      ++v48;
      LODWORD(v63) = v47;
      if ( v47 >= 4 )
        break;
      v12 = HIDWORD(v64);
    }
  }
  *v80 = v68;
  result = HIDWORD(v64);
  *v81 = HIDWORD(v64);
  return result;
}
