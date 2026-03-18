/*
 * XREFs of ?vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z @ 0x1C012E2F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r11
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // r9d
  unsigned int v5; // r10d
  unsigned int v6; // r12d
  _DWORD *v7; // rdx
  char v8; // bl
  int v9; // r13d
  int v10; // r15d
  char v11; // si
  unsigned int v12; // r14d
  __int64 v13; // r8
  int v14; // r15d
  _BYTE *v15; // r10
  unsigned __int8 v16; // bp
  int v17; // edx
  _BYTE *v18; // rax
  int v19; // ecx
  __int64 v20; // r11
  _BYTE *v21; // rbp
  char v22; // dl
  unsigned __int8 v23; // r9
  unsigned __int8 v24; // r9
  char *v25; // rdx
  char *v26; // rdx
  char *v27; // rdx
  char *v28; // rdx
  char *v29; // rdx
  char *v30; // rdx
  _BYTE *v31; // rdx
  BOOL v32; // r9d
  int v33; // edi
  unsigned int v34; // ecx
  __int64 v35; // rax
  _BYTE *v36; // r10
  _BYTE *v37; // r9
  unsigned int v38; // eax
  bool v39; // cf
  unsigned int v40; // eax
  __int64 v41; // r14
  unsigned __int8 v42; // r8
  _BYTE *k; // rdx
  unsigned __int64 v44; // rax
  char *v45; // rcx
  __int64 v46; // r15
  _BYTE *v47; // rdx
  unsigned __int8 j; // r8
  unsigned __int64 v49; // rax
  char *v50; // rcx
  __int64 v51; // rbp
  __int64 v52; // r13
  unsigned int v53; // r9d
  __int64 v54; // r8
  char *v55; // rdx
  char *v56; // rdx
  char *v57; // rdx
  char *v58; // rdx
  char *v59; // rdx
  char *v60; // rdx
  _BYTE *v61; // rdx
  int v62; // ebp
  _BYTE *v63; // r8
  _BYTE *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r11
  _BYTE *v67; // r10
  unsigned __int8 i; // r9
  unsigned __int64 v69; // rax
  char *v70; // rcx
  _BYTE *v71; // r14
  _BYTE *v72; // r10
  unsigned __int8 v73; // r9
  unsigned __int64 v74; // rax
  char *v75; // rcx
  _BYTE *v76; // rdi
  unsigned __int8 v77; // r10
  _BYTE *v78; // r9
  unsigned __int64 v79; // rax
  char *v80; // rcx
  char v81; // [rsp+0h] [rbp-78h]
  int v82; // [rsp+4h] [rbp-74h]
  int v83; // [rsp+8h] [rbp-70h]
  int v84; // [rsp+Ch] [rbp-6Ch]
  __int64 v85; // [rsp+10h] [rbp-68h]
  __int64 v86; // [rsp+10h] [rbp-68h]
  __int64 v87; // [rsp+10h] [rbp-68h]
  __int64 v89; // [rsp+28h] [rbp-50h]
  _DWORD v90[2]; // [rsp+38h] [rbp-40h] BYREF

  v1 = a1;
  v2 = *((_DWORD *)a1 + 14);
  v3 = v2 & 7;
  v4 = *((_DWORD *)v1 + 12);
  v5 = *((_DWORD *)v1 + 7);
  v6 = v4 & 7;
  v7 = *(_DWORD **)(*(_QWORD *)v1 + 16LL);
  v8 = (*((_BYTE *)v1 + 48) & 7) - v3;
  v9 = v5 + v2;
  v83 = v5 + v2;
  v90[0] = *v7;
  v90[1] = v7[1];
  if ( v6 < v3 )
    v8 += 8;
  v10 = *((_DWORD *)v1 + 11);
  v82 = *((_DWORD *)v1 + 10);
  v11 = 8 - v8;
  v84 = v10;
  if ( v9 >> 3 == v2 >> 3 )
  {
    v16 = 0;
    v81 = 0;
    v12 = v5;
    v32 = (int)(v5 + v6) > 8;
  }
  else
  {
    v12 = 8 - v3;
    LODWORD(v13) = (v9 >> 3) - ((v2 + 7) >> 3);
    v14 = *((_DWORD *)v1 + 8);
    v15 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(v4 + ((8 - (unsigned __int8)v3) & 7)) >> 3));
    v16 = 1;
    v17 = *((_DWORD *)v1 + 11) - 24 * v13;
    v18 = (_BYTE *)(*((_QWORD *)v1 + 2) + (int)(3 * ((v2 + 7) & 0xFFFFFFF8)));
    v19 = v82 - v13;
    v81 = 1;
    if ( v14 )
    {
      v13 = (int)v13;
      v85 = (int)v13;
      v89 = v17;
      if ( v8 )
      {
        v20 = v17;
        do
        {
          v21 = &v15[v13];
          --v14;
          v22 = *v15 << v8;
          if ( v15 != &v15[v13] )
          {
            do
            {
              v23 = *++v15;
              v24 = v22 | (v23 >> v11);
              v25 = (char *)v90 + (((unsigned __int64)v24 >> 5) & 4);
              *v18 = *v25;
              v18[1] = v25[1];
              v18[2] = v25[2];
              v26 = (char *)v90 + (((unsigned __int64)v24 >> 4) & 4);
              v18[3] = *v26;
              v18[4] = v26[1];
              v18[5] = v26[2];
              v27 = (char *)v90 + (((unsigned __int64)v24 >> 3) & 4);
              v18[6] = *v27;
              v18[7] = v27[1];
              v18[8] = v27[2];
              v28 = (char *)v90 + (((unsigned __int64)v24 >> 2) & 4);
              v18[9] = *v28;
              v18[10] = v28[1];
              v18[11] = v28[2];
              v29 = (char *)v90 + (((unsigned __int64)v24 >> 1) & 4);
              v18[12] = *v29;
              v18[13] = v29[1];
              v18[14] = v29[2];
              v18[15] = *((_BYTE *)v90 + (v24 & 4));
              v18[16] = *((_BYTE *)v90 + (v24 & 4) + 1);
              v18[17] = *((_BYTE *)v90 + (v24 & 4) + 2);
              v30 = (char *)v90 + 2 * (v24 & 2u);
              v18[18] = *v30;
              v18[19] = v30[1];
              v18[20] = v30[2];
              v31 = &v90[v24 & 1];
              v18[21] = *v31;
              v18[22] = v31[1];
              v18[23] = v31[2];
              v18 += 24;
              v22 = *v15 << v8;
            }
            while ( v15 != v21 );
            v13 = v85;
          }
          v18 += v20;
          v15 += v19;
        }
        while ( v14 );
        v12 = 8 - v3;
      }
      else
      {
        do
        {
          --v14;
          v51 = v13;
          v52 = 0LL;
          if ( v15 > &v15[v13] )
            v51 = 0LL;
          if ( v51 )
          {
            do
            {
              v53 = (unsigned __int8)*v15;
              v54 = *v15 & 4;
              v55 = (char *)v90 + (((unsigned __int64)(unsigned __int8)*v15 >> 5) & 4);
              *v18 = *v55;
              v18[1] = v55[1];
              v18[2] = v55[2];
              v56 = (char *)v90 + ((v53 >> 4) & 4);
              v18[3] = *v56;
              v18[4] = v56[1];
              v18[5] = v56[2];
              v57 = (char *)v90 + ((v53 >> 3) & 4);
              v18[6] = *v57;
              v18[7] = v57[1];
              v18[8] = v57[2];
              v58 = (char *)v90 + ((v53 >> 2) & 4);
              v18[9] = *v58;
              v18[10] = v58[1];
              v18[11] = v58[2];
              v59 = (char *)v90 + ((v53 >> 1) & 4);
              v18[12] = *v59;
              v18[13] = v59[1];
              v18[14] = v59[2];
              v18[15] = *((_BYTE *)v90 + v54);
              v18[16] = *((_BYTE *)v90 + v54 + 1);
              v18[17] = *((_BYTE *)v90 + v54 + 2);
              v60 = (char *)v90 + 2 * (v53 & 2);
              v18[18] = *v60;
              v18[19] = v60[1];
              v18[20] = v60[2];
              v61 = &v90[v53 & 1];
              ++v15;
              v18[21] = *v61;
              ++v52;
              v18[22] = v61[1];
              v18[23] = v61[2];
              v18 += 24;
            }
            while ( v52 != v51 );
            v13 = v85;
          }
          v18 += v89;
          v15 += v19;
        }
        while ( v14 );
      }
      v9 = v83;
      v16 = 1;
      v1 = a1;
    }
    v10 = v84;
    v32 = 1;
  }
  if ( v3 | v16 ^ 1 )
  {
    v62 = *((_DWORD *)v1 + 8);
    v63 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)*((int *)v1 + 12) >> 3));
    v64 = (_BYTE *)(*((_QWORD *)v1 + 2) + 3 * *((_DWORD *)v1 + 14));
    if ( v62 )
    {
      LODWORD(v65) = 3 * v12;
      if ( v6 <= v3 )
      {
        v65 = (int)v65;
        v87 = (int)v65;
        do
        {
          v76 = &v64[v65];
          --v62;
          v77 = *v63 << v6;
          v78 = v64;
          if ( v64 != &v64[v65] )
          {
            do
            {
              v79 = (unsigned __int64)v77 >> 5;
              v77 *= 2;
              v80 = (char *)v90 + (v79 & 4);
              *v78 = *v80;
              v78[1] = v80[1];
              v78[2] = v80[2];
              v78 += 3;
            }
            while ( v78 != v76 );
            v65 = v87;
          }
          v64 += v10;
          v63 += v82;
        }
        while ( v62 );
      }
      else if ( v32 )
      {
        v66 = (int)v65;
        do
        {
          --v62;
          v67 = v64;
          for ( i = ((unsigned __int8)(*v63 << v8) | (unsigned __int8)(v63[1] >> v11)) << v3; v67 != &v64[v66]; v67 += 3 )
          {
            v69 = (unsigned __int64)i >> 5;
            i *= 2;
            v70 = (char *)v90 + (v69 & 4);
            *v67 = *v70;
            v67[1] = v70[1];
            v67[2] = v70[2];
          }
          v64 += v10;
          v63 += v82;
        }
        while ( v62 );
        v1 = a1;
        v9 = v83;
      }
      else
      {
        v65 = (int)v65;
        v86 = (int)v65;
        do
        {
          v71 = &v64[v65];
          --v62;
          v72 = v64;
          v73 = *v63 << v8 << v3;
          if ( v64 != &v64[v65] )
          {
            do
            {
              v74 = (unsigned __int64)v73 >> 5;
              v73 *= 2;
              v75 = (char *)v90 + (v74 & 4);
              *v72 = *v75;
              v72[1] = v75[1];
              v72[2] = v75[2];
              v72 += 3;
            }
            while ( v72 != v71 );
            v65 = v86;
          }
          v64 += v10;
          v63 += v82;
        }
        while ( v62 );
        v1 = a1;
      }
    }
    v16 = v81;
  }
  if ( (v9 & 7) != 0 )
  {
    if ( v16 )
    {
      v33 = *((_DWORD *)v1 + 8);
      v34 = ((_BYTE)v9 - 1) & 7;
      v35 = *((int *)v1 + 13);
      v36 = (_BYTE *)(*((_QWORD *)v1 + 2) + (int)(3 * (v9 & 0xFFFFFFF8)));
      v37 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((v35 - 1) >> 3));
      v38 = ((_BYTE)v35 - 1) & 7;
      if ( v33 )
      {
        v39 = v38 < v34;
        v40 = v34 + 1;
        if ( v39 )
        {
          v46 = 3 * v40;
          do
          {
            --v33;
            v47 = v36;
            for ( j = (*v37 >> v11) | (*(v37 - 1) << v8); v47 != &v36[v46]; v47 += 3 )
            {
              v49 = (unsigned __int64)j >> 5;
              j *= 2;
              v50 = (char *)v90 + (v49 & 4);
              *v47 = *v50;
              v47[1] = v50[1];
              v47[2] = v50[2];
            }
            v36 += v84;
            v37 += v82;
          }
          while ( v33 );
        }
        else
        {
          v41 = 3 * v40;
          do
          {
            --v33;
            v42 = *v37 << v8;
            for ( k = v36; k != &v36[v41]; k += 3 )
            {
              v44 = (unsigned __int64)v42 >> 5;
              v42 *= 2;
              v45 = (char *)v90 + (v44 & 4);
              *k = *v45;
              k[1] = v45[1];
              k[2] = v45[2];
            }
            v36 += v84;
            v37 += v82;
          }
          while ( v33 );
        }
      }
    }
  }
}
