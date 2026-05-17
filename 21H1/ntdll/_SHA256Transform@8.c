/*
 * XREFs of _SHA256Transform@8 @ 0x4B2EE7E0
 * Callers:
 *     _SHA256Update@12 @ 0x4B2EE726 (_SHA256Update@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall SHA256Transform(_DWORD *a1, int a2)
{
  unsigned int *v3; // esi
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // edi
  unsigned int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // ebx
  int v15; // edx
  int v16; // edx
  int v17; // edi
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // edx
  int v24; // eax
  _DWORD *v25; // ebx
  char v26; // bl
  char v27; // cl
  char v28; // al
  int v29; // edi
  int v30; // edx
  int v31; // edi
  int v32; // edx
  int v33; // edi
  int v34; // ebx
  int v35; // edx
  int v36; // edi
  int v37; // edx
  int v38; // edi
  int v39; // edx
  int v40; // edi
  int v41; // edx
  int v42; // edi
  int v43; // edx
  int v44; // edi
  int v45; // edx
  int v46; // ebx
  int result; // eax
  _DWORD *v48; // [esp+14h] [ebp-7Ch]
  int v49; // [esp+18h] [ebp-78h]
  int v50; // [esp+1Ch] [ebp-74h]
  int v51; // [esp+1Ch] [ebp-74h]
  int v52; // [esp+20h] [ebp-70h]
  int v53; // [esp+20h] [ebp-70h]
  int v54; // [esp+20h] [ebp-70h]
  unsigned int v55; // [esp+24h] [ebp-6Ch]
  unsigned int v56; // [esp+24h] [ebp-6Ch]
  unsigned int v57; // [esp+28h] [ebp-68h]
  unsigned int v58; // [esp+28h] [ebp-68h]
  unsigned int v59; // [esp+2Ch] [ebp-64h]
  unsigned int v60; // [esp+2Ch] [ebp-64h]
  int v61; // [esp+30h] [ebp-60h]
  int v62; // [esp+30h] [ebp-60h]
  int v63; // [esp+30h] [ebp-60h]
  int v64; // [esp+34h] [ebp-5Ch]
  int v65; // [esp+34h] [ebp-5Ch]
  int v66; // [esp+34h] [ebp-5Ch]
  int v67; // [esp+38h] [ebp-58h]
  int v68; // [esp+38h] [ebp-58h]
  int v69; // [esp+38h] [ebp-58h]
  int v70; // [esp+3Ch] [ebp-54h]
  int v71; // [esp+3Ch] [ebp-54h]
  int v72; // [esp+3Ch] [ebp-54h]
  int v73; // [esp+40h] [ebp-50h]
  int v74; // [esp+40h] [ebp-50h]
  int v75; // [esp+40h] [ebp-50h]
  unsigned int v76; // [esp+44h] [ebp-4Ch]
  unsigned int v77; // [esp+44h] [ebp-4Ch]
  _DWORD v78[2]; // [esp+48h] [ebp-48h]
  _DWORD v79[15]; // [esp+50h] [ebp-40h] BYREF

  v3 = (unsigned int *)(a2 + 8);
  v4 = v79;
  v48 = a1;
  v5 = a2 - (_DWORD)v79;
  v6 = 4;
  do
  {
    *(v4 - 2) = _byteswap_ulong(*(_DWORD *)((char *)v4 + v5));
    *(v4 - 1) = _byteswap_ulong(*(v3 - 1));
    v7 = *v3;
    v3 += 4;
    *v4 = _byteswap_ulong(v7);
    v4 += 4;
    *(v4 - 3) = _byteswap_ulong(*(v3 - 3));
    --v6;
  }
  while ( v6 );
  v8 = a1[3];
  v73 = *a1;
  v70 = a1[1];
  v9 = a1[4];
  v50 = v9;
  v67 = a1[5];
  v64 = a1[6];
  v10 = a1[7];
  v11 = a1[2];
  v61 = v10;
  v76 = 0;
  do
  {
    v12 = v61
        + v78[v76]
        + SHA256Magic[v76]
        + (v9 & v67 ^ v64 & ~v9)
        + (__ROR4__(v9, 6) ^ __ROR4__(v9, 11) ^ __ROR4__(v9, 25));
    v52 = v12 + v8;
    v62 = v12 + (__ROR4__(v73, 2) ^ __ROR4__(v73, 13) ^ __ROR4__(v73, 22)) + (v73 & v70 ^ v11 & (v73 ^ v70));
    v13 = v64
        + v78[v76 + 1]
        + dword_4B28C1E4[v76]
        + (v52 & v50 ^ v67 & ~v52)
        + (__ROR4__(v52, 6) ^ __ROR4__(v12 + v8, 11) ^ __ROR4__(v12 + v8, 25));
    v14 = v13 + v11;
    v65 = v13 + (__ROR4__(v62, 2) ^ __ROR4__(v62, 13) ^ __ROR4__(v62, 22)) + (v73 & v70 ^ v62 & (v73 ^ v70));
    v15 = v67
        + v79[v76]
        + dword_4B28C1E8[v76]
        + (v14 & v52 ^ v50 & ~v14)
        + (__ROR4__(v14, 6) ^ __ROR4__(v14, 11) ^ __ROR4__(v14, 25));
    v71 = v15 + v70;
    v68 = v15 + (__ROR4__(v65, 2) ^ __ROR4__(v65, 13) ^ __ROR4__(v65, 22)) + (v73 & v65 ^ v62 & (v73 ^ v65));
    v16 = v50
        + v79[v76 + 1]
        + dword_4B28C1EC[v76]
        + (v71 & v14 ^ v52 & ~v71)
        + (__ROR4__(v71, 6) ^ __ROR4__(v71, 11) ^ __ROR4__(v71, 25));
    v74 = v16 + v73;
    v17 = v16 + (__ROR4__(v68, 2) ^ __ROR4__(v68, 13) ^ __ROR4__(v68, 22)) + (v68 & v65 ^ v62 & (v68 ^ v65));
    v18 = v52
        + v79[v76 + 2]
        + dword_4B28C1F0[v76]
        + (v74 & v71 ^ v14 & ~v74)
        + (__ROR4__(v74, 6) ^ __ROR4__(v74, 11) ^ __ROR4__(v74, 25));
    v61 = v18 + v62;
    v8 = v18 + (__ROR4__(v17, 2) ^ __ROR4__(v17, 13) ^ __ROR4__(v17, 22)) + (v17 & v68 ^ v65 & (v17 ^ v68));
    v53 = v8;
    v19 = v14
        + v79[v76 + 3]
        + dword_4B28C1F4[v76]
        + (v74 & v61 ^ v71 & ~v61)
        + (__ROR4__(v61, 6) ^ __ROR4__(v61, 11) ^ __ROR4__(v61, 25));
    v64 = v19 + v65;
    v11 = v19 + (__ROR4__(v8, 2) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 22)) + (v8 & v17 ^ v68 & (v8 ^ v17));
    v20 = v71
        + v79[v76 + 4]
        + dword_4B28C1F8[v76]
        + (v64 & v61 ^ v74 & ~v64)
        + (__ROR4__(v64, 6) ^ __ROR4__(v64, 11) ^ __ROR4__(v64, 25));
    v67 = v20 + v68;
    v70 = v20 + (__ROR4__(v11, 2) ^ __ROR4__(v11, 13) ^ __ROR4__(v11, 22)) + (v11 & v8 ^ v17 & (v11 ^ v8));
    v21 = v74
        + v79[v76 + 5]
        + dword_4B28C1FC[v76]
        + (v67 & v64 ^ v61 & ~v67)
        + (__ROR4__(v67, 6) ^ __ROR4__(v67, 11) ^ __ROR4__(v67, 25));
    v9 = v21 + v17;
    v50 = v9;
    v22 = v21 + (__ROR4__(v70, 2) ^ __ROR4__(v70, 13) ^ __ROR4__(v70, 22));
    v23 = v76 + 8;
    v76 = v23;
    v24 = v22 + (v70 & v11 ^ v8 & (v70 ^ v11));
    v73 = v24;
  }
  while ( v23 < 0x10 );
  v49 = v11;
  v25 = v48;
  if ( v23 < 0x40 )
  {
    v26 = v23 - 7;
    v27 = v23 - 2;
    v59 = v23 - 7;
    v28 = v23 + 1;
    v55 = v23 - 2;
    v57 = v23 + 1;
    do
    {
      v29 = v23 & 0xF;
      v78[v29] += v78[v26 & 0xF]
                + ((v78[v28 & 0xF] >> 3) ^ __ROR4__(v78[v28 & 0xF], 7) ^ __ROR4__(v78[v28 & 0xF], 18))
                + ((v78[v27 & 0xF] >> 10) ^ __ROR4__(v78[v27 & 0xF], 17) ^ __ROR4__(v78[v27 & 0xF], 19));
      v30 = v78[v29]
          + v61
          + SHA256Magic[v76]
          + (v50 & v67 ^ v64 & ~v50)
          + (__ROR4__(v50, 6) ^ __ROR4__(v50, 11) ^ __ROR4__(v50, 25));
      v54 = v30 + v53;
      v63 = v30 + (__ROR4__(v73, 2) ^ __ROR4__(v73, 13) ^ __ROR4__(v73, 22)) + (v73 & v70 ^ v49 & (v73 ^ v70));
      v77 = v76 + 1;
      v58 = v57 + 1;
      v60 = v59 + 1;
      v56 = v55 + 1;
      v31 = v77 & 0xF;
      v78[v31] += v78[v60 & 0xF]
                + ((v78[v58 & 0xF] >> 3) ^ __ROR4__(v78[v58 & 0xF], 7) ^ __ROR4__(v78[v58 & 0xF], 18))
                + ((v78[v56 & 0xF] >> 10) ^ __ROR4__(v78[v56 & 0xF], 17) ^ __ROR4__(v78[v56 & 0xF], 19));
      v32 = v78[v31]
          + v64
          + SHA256Magic[v77]
          + (v54 & v50 ^ v67 & ~v54)
          + (__ROR4__(v54, 6) ^ __ROR4__(v54, 11) ^ __ROR4__(v54, 25));
      v66 = v32 + (__ROR4__(v63, 2) ^ __ROR4__(v63, 13) ^ __ROR4__(v63, 22)) + (v73 & v70 ^ v63 & (v73 ^ v70));
      ++v58;
      ++v56;
      v33 = ++v77 & 0xF;
      v78[v33] += v78[++v60 & 0xF]
                + ((v78[v58 & 0xF] >> 3) ^ __ROR4__(v78[v58 & 0xF], 7) ^ __ROR4__(v78[v58 & 0xF], 18))
                + ((v78[v56 & 0xF] >> 10) ^ __ROR4__(v78[v56 & 0xF], 17) ^ __ROR4__(v78[v56 & 0xF], 19));
      v34 = v32 + v49;
      v35 = v78[v33]
          + v67
          + SHA256Magic[v77]
          + (v34 & v54 ^ v50 & ~v34)
          + (__ROR4__(v34, 6) ^ __ROR4__(v32 + v49, 11) ^ __ROR4__(v32 + v49, 25));
      v72 = v35 + v70;
      ++v77;
      ++v58;
      ++v60;
      ++v56;
      v69 = v35 + (__ROR4__(v66, 2) ^ __ROR4__(v66, 13) ^ __ROR4__(v66, 22)) + (v73 & v66 ^ v63 & (v73 ^ v66));
      v36 = v77 & 0xF;
      v78[v36] += v78[v60 & 0xF]
                + ((v78[v58 & 0xF] >> 3) ^ __ROR4__(v78[v58 & 0xF], 7) ^ __ROR4__(v78[v58 & 0xF], 18))
                + ((v78[v56 & 0xF] >> 10) ^ __ROR4__(v78[v56 & 0xF], 17) ^ __ROR4__(v78[v56 & 0xF], 19));
      v37 = v78[v36]
          + v50
          + SHA256Magic[v77]
          + (v72 & v34 ^ v54 & ~v72)
          + (__ROR4__(v72, 6) ^ __ROR4__(v72, 11) ^ __ROR4__(v72, 25));
      v75 = v37 + v73;
      v51 = v37 + (__ROR4__(v69, 2) ^ __ROR4__(v69, 13) ^ __ROR4__(v69, 22)) + (v69 & v66 ^ v63 & (v69 ^ v66));
      ++v77;
      ++v58;
      ++v60;
      ++v56;
      v38 = v77 & 0xF;
      v78[v38] += v78[v60 & 0xF]
                + ((v78[v58 & 0xF] >> 3) ^ __ROR4__(v78[v58 & 0xF], 7) ^ __ROR4__(v78[v58 & 0xF], 18))
                + ((v78[v56 & 0xF] >> 10) ^ __ROR4__(v78[v56 & 0xF], 17) ^ __ROR4__(v78[v56 & 0xF], 19));
      v39 = v78[v38]
          + v54
          + SHA256Magic[v77]
          + (v75 & v72 ^ v34 & ~v75)
          + (__ROR4__(v75, 6) ^ __ROR4__(v75, 11) ^ __ROR4__(v75, 25));
      v61 = v39 + v63;
      v53 = v39 + (__ROR4__(v51, 2) ^ __ROR4__(v51, 13) ^ __ROR4__(v51, 22)) + (v51 & v69 ^ v66 & (v51 ^ v69));
      ++v77;
      ++v58;
      ++v60;
      ++v56;
      v40 = v77 & 0xF;
      v78[v40] += v78[v60 & 0xF]
                + ((v78[v58 & 0xF] >> 3) ^ __ROR4__(v78[v58 & 0xF], 7) ^ __ROR4__(v78[v58 & 0xF], 18))
                + ((v78[v56 & 0xF] >> 10) ^ __ROR4__(v78[v56 & 0xF], 17) ^ __ROR4__(v78[v56 & 0xF], 19));
      v41 = v78[v40]
          + v34
          + SHA256Magic[v77]
          + (v75 & v61 ^ v72 & ~v61)
          + (__ROR4__(v61, 6) ^ __ROR4__(v61, 11) ^ __ROR4__(v61, 25));
      v64 = v41 + v66;
      v49 = v41 + (__ROR4__(v53, 2) ^ __ROR4__(v53, 13) ^ __ROR4__(v53, 22)) + (v53 & v51 ^ v69 & (v53 ^ v51));
      ++v77;
      ++v58;
      ++v60;
      ++v56;
      v42 = v77 & 0xF;
      v78[v42] += v78[v60 & 0xF]
                + ((v78[v58 & 0xF] >> 3) ^ __ROR4__(v78[v58 & 0xF], 7) ^ __ROR4__(v78[v58 & 0xF], 18))
                + ((v78[v56 & 0xF] >> 10) ^ __ROR4__(v78[v56 & 0xF], 17) ^ __ROR4__(v78[v56 & 0xF], 19));
      v43 = v78[v42]
          + v72
          + SHA256Magic[v77]
          + (v64 & v61 ^ v75 & ~v64)
          + (__ROR4__(v64, 6) ^ __ROR4__(v64, 11) ^ __ROR4__(v64, 25));
      v67 = v43 + v69;
      v70 = v43 + (__ROR4__(v49, 2) ^ __ROR4__(v49, 13) ^ __ROR4__(v49, 22)) + (v49 & v53 ^ v51 & (v49 ^ v53));
      ++v77;
      ++v58;
      ++v60;
      ++v56;
      v44 = v77 & 0xF;
      v78[v44] += v78[v60 & 0xF]
                + ((v78[v58 & 0xF] >> 3) ^ __ROR4__(v78[v58 & 0xF], 7) ^ __ROR4__(v78[v58 & 0xF], 18))
                + ((v78[v56 & 0xF] >> 10) ^ __ROR4__(v78[v56 & 0xF], 17) ^ __ROR4__(v78[v56 & 0xF], 19));
      v45 = v78[v44]
          + v75
          + SHA256Magic[v77]
          + (v67 & v64 ^ v61 & ~v67)
          + (__ROR4__(v67, 6) ^ __ROR4__(v67, 11) ^ __ROR4__(v67, 25));
      v9 = v45 + v51;
      v50 = v45 + v51;
      v8 = v53;
      v46 = v45 + (__ROR4__(v70, 2) ^ __ROR4__(v70, 13) ^ __ROR4__(v70, 22)) + (v70 & v49 ^ v53 & (v70 ^ v49));
      v23 = v77 + 1;
      v73 = v46;
      v28 = v58 + 1;
      v27 = v56 + 1;
      v76 = v23;
      v26 = v60 + 1;
      v57 = v58 + 1;
      v55 = v56 + 1;
      v59 = v60 + 1;
    }
    while ( v23 < 0x40 );
    v25 = v48;
    v24 = v73;
  }
  *v25 += v24;
  v25[1] += v70;
  v25[2] += v49;
  v25[4] += v9;
  v25[5] += v67;
  v25[3] += v8;
  v25[6] += v64;
  result = v61;
  v25[7] += v61;
  return result;
}
