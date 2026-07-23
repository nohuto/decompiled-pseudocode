/*
 * XREFs of RtlpComputeCrcInternal @ 0x18007F340
 * Callers:
 *     RtlCrc32 @ 0x18007F320 (RtlCrc32.c)
 *     RtlCrc64 @ 0x1800F64A0 (RtlCrc64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpComputeCrcInternal(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r13
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r11
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r11
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  char v77; // cl
  unsigned __int64 v79; // r8
  __int64 v80; // r9
  char v81; // al
  _QWORD *v82; // [rsp+48h] [rbp+20h]

  v82 = a4;
  v4 = a4[4];
  v6 = a3 ^ v4;
  v7 = 0LL;
  v8 = a1;
  v9 = -(int)a1 & 7;
  if ( (-(int)a1 & 7) != 0 )
  {
    v79 = 0LL;
    if ( v9 > a2 )
      v9 = a2;
    if ( v9 )
    {
      v80 = a4[1];
      do
      {
        v81 = *(_BYTE *)(v79 + a1);
        ++v79;
        v6 = (v6 >> 8) ^ *(_QWORD *)(v80 + 8LL * (unsigned __int8)(v6 ^ v81));
      }
      while ( v79 < v9 );
      a4 = v82;
    }
    a2 -= v9;
    v8 = v9 + a1;
  }
  v10 = a2 - (a2 & 0x1F);
  if ( v10 >= 0x40 )
  {
    a2 &= 0x1Fu;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = v10 + v8 - 32;
    if ( v8 < v14 )
    {
      v15 = a4[2];
      do
      {
        _mm_prefetch((const char *)(v8 + 256), 2);
        v16 = v6 ^ *(_QWORD *)v8;
        v17 = v11 ^ *(_QWORD *)(v8 + 8);
        v18 = v13 ^ *(_QWORD *)(v8 + 16);
        v19 = v12 ^ *(_QWORD *)(v8 + 24);
        v20 = (unsigned __int8)v16;
        v16 >>= 8;
        v21 = *(_QWORD *)(v15 + 8 * v20 + 14336);
        v22 = (unsigned __int8)v17;
        v17 >>= 8;
        v23 = *(_QWORD *)(v15 + 8 * v22 + 14336);
        v24 = (unsigned __int8)v18;
        v18 >>= 8;
        v25 = *(_QWORD *)(v15 + 8 * v24 + 14336);
        v26 = (unsigned __int8)v19;
        v19 >>= 8;
        v27 = *(_QWORD *)(v15 + 8 * v26 + 14336);
        v28 = (unsigned __int8)v16;
        v16 >>= 8;
        v29 = *(_QWORD *)(v15 + 8 * v28 + 12288) ^ v21;
        v30 = (unsigned __int8)v17;
        v17 >>= 8;
        v31 = *(_QWORD *)(v15 + 8 * v30 + 12288) ^ v23;
        v32 = (unsigned __int8)v18;
        v18 >>= 8;
        v33 = *(_QWORD *)(v15 + 8 * v32 + 12288) ^ v25;
        v34 = (unsigned __int8)v19;
        v19 >>= 8;
        v35 = *(_QWORD *)(v15 + 8 * v34 + 12288) ^ v27;
        v36 = (unsigned __int8)v16;
        v16 >>= 8;
        v37 = *(_QWORD *)(v15 + 8 * v36 + 10240) ^ v29;
        v38 = (unsigned __int8)v17;
        v17 >>= 8;
        v39 = *(_QWORD *)(v15 + 8 * v38 + 10240) ^ v31;
        v40 = (unsigned __int8)v18;
        v18 >>= 8;
        v41 = *(_QWORD *)(v15 + 8 * v40 + 10240) ^ v33;
        v42 = (unsigned __int8)v19;
        v19 >>= 8;
        v43 = *(_QWORD *)(v15 + 8 * v42 + 10240) ^ v35;
        v44 = (unsigned __int8)v16;
        v16 >>= 8;
        v8 += 32LL;
        v6 = *(_QWORD *)(v15 + 8 * (v16 >> 24)) ^ *(_QWORD *)(v15 + 8LL * BYTE2(v16) + 2048) ^ *(_QWORD *)(v15 + 8LL * BYTE1(v16) + 4096) ^ *(_QWORD *)(v15 + 8LL * (unsigned __int8)v16 + 6144) ^ *(_QWORD *)(v15 + 8 * v44 + 0x2000) ^ v37;
        v11 = *(_QWORD *)(v15 + 8 * HIDWORD(v17)) ^ *(_QWORD *)(v15 + 8LL * BYTE3(v17) + 2048) ^ *(_QWORD *)(v15 + 8LL * BYTE2(v17) + 4096) ^ *(_QWORD *)(v15 + 8LL * BYTE1(v17) + 6144) ^ *(_QWORD *)(v15 + 8LL * (unsigned __int8)v17 + 0x2000) ^ v39;
        v13 = *(_QWORD *)(v15 + 8 * HIDWORD(v18)) ^ *(_QWORD *)(v15 + 8LL * BYTE3(v18) + 2048) ^ *(_QWORD *)(v15 + 8LL * BYTE2(v18) + 4096) ^ *(_QWORD *)(v15 + 8LL * BYTE1(v18) + 6144) ^ *(_QWORD *)(v15 + 8LL * (unsigned __int8)v18 + 0x2000) ^ v41;
        v12 = *(_QWORD *)(v15 + 8 * HIDWORD(v19)) ^ *(_QWORD *)(v15 + 8LL * BYTE3(v19) + 2048) ^ *(_QWORD *)(v15 + 8LL * BYTE2(v19) + 4096) ^ *(_QWORD *)(v15 + 8LL * BYTE1(v19) + 6144) ^ *(_QWORD *)(v15 + 8LL * (unsigned __int8)v19 + 0x2000) ^ v43;
      }
      while ( v8 < v14 );
      a4 = v82;
    }
    v45 = a4[1];
    v46 = ((v6 ^ *(_QWORD *)v8) >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)(v6 ^ *(_BYTE *)v8));
    v47 = (v46 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v46);
    v48 = (v47 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v47);
    v49 = (v48 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v48);
    v50 = (v49 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v49);
    v51 = (v50 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v50);
    v52 = (v51 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v51);
    v53 = v11 ^ *(_QWORD *)(v8 + 8) ^ (v52 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v52);
    v54 = (v53 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v53);
    v55 = (v54 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v54);
    v56 = (v55 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v55);
    v57 = (v56 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v56);
    v58 = (v57 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v57);
    v59 = (v58 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v58);
    v60 = (v59 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v59);
    v61 = v13 ^ *(_QWORD *)(v8 + 16) ^ (v60 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v60);
    v62 = (v61 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v61);
    v63 = (v62 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v62);
    v64 = (v63 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v63);
    v65 = (v64 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v64);
    v66 = (v65 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v65);
    v67 = (v66 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v66);
    v68 = (v67 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v67);
    v69 = v12 ^ *(_QWORD *)(v8 + 24) ^ (v68 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v68);
    v70 = (v69 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v69);
    v71 = (v70 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v70);
    v72 = (v71 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v71);
    v73 = (v72 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v72);
    v74 = (v73 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v73);
    v75 = (v74 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v74);
    v76 = (v75 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v75);
    v6 = (v76 >> 8) ^ *(_QWORD *)(v45 + 8LL * (unsigned __int8)v76);
    v8 += 32LL;
  }
  if ( a2 )
  {
    do
    {
      v77 = *(_BYTE *)(v8 + v7++);
      v6 = (v6 >> 8) ^ *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v6 ^ v77));
    }
    while ( v7 < a2 );
  }
  return v6 ^ v4;
}
