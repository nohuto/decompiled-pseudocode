/*
 * XREFs of ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x1C010D340
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  __int64 v1; // rax
  struct BLTINFO *v2; // r10
  BOOL v3; // r13d
  char *v4; // rcx
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // r9d
  char v8; // al
  signed int v9; // ebx
  int v10; // esi
  int v11; // r14d
  int v12; // eax
  unsigned int v13; // r11d
  int v14; // ecx
  int v15; // r8d
  unsigned int v16; // r12d
  int v17; // edi
  int v18; // eax
  int v19; // edx
  int v20; // r11d
  int v21; // edx
  _DWORD *v22; // r9
  unsigned __int8 v23; // r15
  __int64 v24; // rcx
  char *v25; // r8
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r15
  char v30; // cl
  unsigned __int64 v31; // rax
  char v32; // si
  char v33; // di
  unsigned __int8 v34; // al
  char *v35; // r13
  unsigned __int64 v36; // rax
  _BYTE *v37; // rdx
  int v38; // r9d
  _BYTE *v39; // r8
  _BYTE *v40; // r15
  char v41; // al
  char v42; // di
  char v43; // r10
  _BYTE *v44; // rbx
  unsigned __int8 v45; // r11
  _BYTE *v46; // rcx
  unsigned __int64 v47; // rax
  _BYTE *v48; // rbx
  unsigned __int8 v49; // r11
  _BYTE *v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // r12
  char v53; // si
  unsigned __int8 v54; // r11
  _BYTE *v55; // rbx
  _BYTE *v56; // rcx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  int v59; // r11d
  unsigned __int64 v60; // rdx
  _BYTE *v61; // r8
  unsigned int v62; // ecx
  unsigned int v63; // eax
  _BYTE *v64; // rbx
  unsigned __int8 v65; // r9
  _BYTE *v66; // r10
  _BYTE *v67; // rcx
  unsigned __int64 v68; // rax
  _BYTE *v69; // r10
  _BYTE *v70; // rcx
  unsigned __int8 v71; // r9
  unsigned __int64 v72; // rax
  char v73; // [rsp+8h] [rbp-69h]
  _BYTE v74[4]; // [rsp+Ch] [rbp-65h]
  int v75; // [rsp+10h] [rbp-61h]
  int v76; // [rsp+14h] [rbp-5Dh]
  int v77; // [rsp+18h] [rbp-59h]
  int v78; // [rsp+1Ch] [rbp-55h]
  unsigned int v79; // [rsp+20h] [rbp-51h]
  int v80; // [rsp+24h] [rbp-4Dh]
  unsigned int v81; // [rsp+28h] [rbp-49h]
  __int64 v82; // [rsp+30h] [rbp-41h]
  unsigned int v83; // [rsp+38h] [rbp-39h]
  int v84; // [rsp+3Ch] [rbp-35h]
  struct BLTINFO *v85; // [rsp+40h] [rbp-31h]
  _DWORD v86[2]; // [rsp+58h] [rbp-19h]
  int v87; // [rsp+60h] [rbp-11h]
  int v88; // [rsp+64h] [rbp-Dh]
  int v89; // [rsp+68h] [rbp-9h]
  int v90; // [rsp+6Ch] [rbp-5h]
  int v91; // [rsp+70h] [rbp-1h]
  int v92; // [rsp+74h] [rbp+3h]
  int v93; // [rsp+78h] [rbp+7h]
  int v94; // [rsp+7Ch] [rbp+Bh]
  int v95; // [rsp+80h] [rbp+Fh]
  int v96; // [rsp+84h] [rbp+13h]
  int v97; // [rsp+88h] [rbp+17h]
  int v98; // [rsp+8Ch] [rbp+1Bh]
  int v99; // [rsp+90h] [rbp+1Fh]
  int v100; // [rsp+94h] [rbp+23h]

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v85 = a1;
  v3 = 1;
  v80 = 1;
  v4 = *(char **)(v1 + 16);
  v5 = 0LL;
  v6 = *(_DWORD *)v4;
  v7 = *((_DWORD *)v4 + 1);
  do
  {
    v8 = *v4;
    v4 += 4;
    v74[v5++] = v8;
  }
  while ( v5 < 2 );
  v9 = *((_DWORD *)v2 + 7);
  v10 = *((_DWORD *)v2 + 11);
  v11 = *((_DWORD *)v2 + 10);
  v75 = v10;
  v12 = *((_DWORD *)v2 + 12);
  v86[0] = ((v6 | (v6 << 8)) << 16) | v6 | (v6 << 8);
  v13 = v12 & 7;
  LODWORD(v82) = v12;
  v93 = v7 | (v86[0] << 8);
  v81 = v13;
  v89 = v6 | (v93 << 8);
  v78 = v11;
  v95 = v7 | (v89 << 8);
  v90 = v6 | (v95 << 8);
  v87 = v6 | (v90 << 8);
  v94 = v7 | (v87 << 8);
  v97 = v7 | (v94 << 8);
  v99 = v7 | (v97 << 8);
  v100 = v7 | (v99 << 8);
  v92 = v6 | (v100 << 8);
  v96 = v7 | (v92 << 8);
  v98 = v7 | (v96 << 8);
  v91 = v6 | (v98 << 8);
  v88 = v6 | (v91 << 8);
  v14 = v6 | (v88 << 8);
  v15 = *((_DWORD *)v2 + 14);
  v86[1] = v14;
  v16 = v15 & 7;
  v79 = v16;
  v17 = (unsigned __int8)(v13 - v16 + 8);
  v18 = 8;
  if ( v13 >= v16 )
    v17 = (unsigned __int8)(v13 - v16);
  LOBYTE(v18) = 8 - v17;
  v76 = v17;
  v77 = v18;
  v84 = v15 + v9;
  v19 = (v15 + v9) >> 3;
  if ( v19 == v15 >> 3 )
  {
    v73 = 0;
    v23 = 0;
    v3 = (int)(v9 + v13) > 8;
  }
  else
  {
    v20 = *((_DWORD *)v2 + 8);
    v9 = 8 - v16;
    v21 = v19 - ((v15 + 7) >> 3);
    v73 = 1;
    v83 = 8 - v16;
    v22 = (_DWORD *)(*((_QWORD *)v2 + 2) + ((v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    v23 = 1;
    LODWORD(v24) = v10 - 8 * v21;
    v25 = (char *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(v82 + ((8 - (_BYTE)v16) & 7)) >> 3));
    if ( v20 )
    {
      v24 = (int)v24;
      v82 = (int)v24;
      v26 = v11 - v21;
      if ( (_BYTE)v17 )
      {
        v32 = v17;
        v33 = v77;
        do
        {
          v34 = *v25 << v32;
          --v20;
          if ( v25 != &v25[v21] )
          {
            v35 = &v25[v21];
            do
            {
              v36 = v34 | ((unsigned __int64)(unsigned __int8)*++v25 >> v33);
              *v22 = v86[v36 >> 4];
              v22[1] = v86[v36 & 0xF];
              v22 += 2;
              v34 = *v25 << v32;
            }
            while ( v25 != v35 );
          }
          v22 = (_DWORD *)((char *)v22 + (int)v24);
          v25 += v26;
        }
        while ( v20 );
        v2 = v85;
        v9 = v83;
        LOBYTE(v17) = v76;
        v11 = v78;
      }
      else
      {
        v27 = v21;
        do
        {
          --v20;
          v28 = v27;
          v29 = 0LL;
          if ( v25 > &v25[v27] )
            v28 = 0LL;
          if ( v28 )
          {
            do
            {
              v30 = *v25;
              ++v29;
              v31 = (unsigned __int8)*v25++;
              *v22 = v86[v31 >> 4];
              v22[1] = v86[v30 & 0xF];
              v22 += 2;
            }
            while ( v29 != v28 );
            v24 = v82;
          }
          v22 = (_DWORD *)((char *)v22 + v24);
          v25 += v26;
        }
        while ( v20 );
      }
      v23 = 1;
      v3 = v80;
      v16 = v79;
      v10 = v75;
    }
    v13 = v81;
  }
  if ( v16 | v23 ^ 1 )
  {
    v37 = (_BYTE *)(*((_QWORD *)v2 + 2) + *((int *)v2 + 14));
    v38 = *((_DWORD *)v2 + 8);
    v39 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    if ( v38 )
    {
      v40 = (_BYTE *)v9;
      if ( v13 <= v16 )
      {
        v52 = v10;
        v53 = v81;
        do
        {
          --v38;
          v54 = *v39 << v53;
          v55 = v40;
          v56 = v37;
          if ( v37 > &v37[(_QWORD)v40] )
            v55 = 0LL;
          if ( v55 )
          {
            do
            {
              v57 = v54;
              v54 *= 2;
              *v56++ = v74[v57 >> 7];
            }
            while ( (_BYTE *)(v56 - v37) != v55 );
          }
          v37 += v52;
          v39 += v11;
        }
        while ( v38 );
      }
      else
      {
        if ( v3 )
        {
          v41 = v17;
          v42 = v77;
          v43 = v41;
          do
          {
            --v38;
            v44 = v40;
            v45 = ((unsigned __int8)(*v39 << v43) | (unsigned __int8)(v39[1] >> v42)) << v16;
            v46 = v37;
            if ( v37 > &v37[(_QWORD)v40] )
              v44 = 0LL;
            if ( v44 )
            {
              do
              {
                v47 = v45;
                v45 *= 2;
                *v46++ = v74[v47 >> 7];
              }
              while ( (_BYTE *)(v46 - v37) != v44 );
            }
            v37 += v10;
            v39 += v11;
          }
          while ( v38 );
        }
        else
        {
          do
          {
            --v38;
            v48 = v40;
            v49 = *v39 << v17 << v16;
            v50 = v37;
            if ( v37 > &v37[(_QWORD)v40] )
              v48 = 0LL;
            if ( v48 )
            {
              do
              {
                v51 = v49;
                v49 *= 2;
                *v50++ = v74[v51 >> 7];
              }
              while ( (_BYTE *)(v50 - v37) != v48 );
            }
            v37 += v10;
            v39 += v11;
          }
          while ( v38 );
        }
        v2 = v85;
      }
      LOBYTE(v17) = v76;
      v10 = v75;
      v23 = v73;
    }
  }
  if ( (v84 & 7) != 0 )
  {
    if ( v23 )
    {
      v58 = *((int *)v2 + 13);
      v59 = *((_DWORD *)v2 + 8);
      v60 = *((_QWORD *)v2 + 2) + (v84 & 0xFFFFFFFFFFFFFFF8uLL);
      v61 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v58 - 1) >> 3));
      v62 = ((_BYTE)v84 - 1) & 7;
      v63 = ((_BYTE)v58 - 1) & 7;
      if ( v59 )
      {
        v64 = (_BYTE *)(v62 + 1);
        if ( v63 < v62 )
        {
          do
          {
            --v59;
            v69 = v64;
            v70 = (_BYTE *)v60;
            v71 = (*v61 >> v77) | (*(v61 - 1) << v17);
            if ( v60 > (unsigned __int64)&v64[v60] )
              v69 = 0LL;
            if ( v69 )
            {
              do
              {
                v72 = v71;
                v71 *= 2;
                *v70++ = v74[v72 >> 7];
              }
              while ( &v70[-v60] != v69 );
            }
            v60 += v10;
            v61 += v11;
          }
          while ( v59 );
        }
        else
        {
          do
          {
            --v59;
            v65 = *v61 << v17;
            v66 = v64;
            v67 = (_BYTE *)v60;
            if ( v60 > (unsigned __int64)&v64[v60] )
              v66 = 0LL;
            if ( v66 )
            {
              do
              {
                v68 = v65;
                v65 *= 2;
                *v67++ = v74[v68 >> 7];
              }
              while ( &v67[-v60] != v66 );
            }
            v60 += v10;
            v61 += v11;
          }
          while ( v59 );
        }
      }
    }
  }
}
