/*
 * XREFs of MD4Transform @ 0x18010FF3C
 * Callers:
 *     MD4Update @ 0x1801104D0 (MD4Update.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MD4Transform(_DWORD *a1, _DWORD *a2)
{
  int v2; // r11d
  _DWORD *v3; // r10
  int v4; // r8d
  int v5; // r9d
  int v6; // r14d
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // r15d
  int v16; // esi
  int v17; // r12d
  int v18; // ebp
  int v19; // r13d
  int v20; // r8d
  int v21; // r9d
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // r11d
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  int v34; // r11d
  int v35; // ebx
  int v36; // edi
  int v37; // edx
  int v38; // r8d
  int v39; // r9d
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  int v43; // r11d
  int v44; // edx
  int v45; // r8d
  int v46; // r9d
  int v47; // r11d
  int v48; // edx
  int v49; // ebx
  int v50; // r9d
  unsigned int v51; // r8d
  int v52; // edx
  __int64 result; // rax
  int v54; // [rsp+0h] [rbp-68h]
  int v55; // [rsp+4h] [rbp-64h]
  int v56; // [rsp+8h] [rbp-60h]
  int v57; // [rsp+Ch] [rbp-5Ch]
  int v58; // [rsp+10h] [rbp-58h]
  int v59; // [rsp+14h] [rbp-54h]
  int v60; // [rsp+18h] [rbp-50h]
  int v62; // [rsp+78h] [rbp+10h]
  int v63; // [rsp+80h] [rbp+18h]
  int v64; // [rsp+88h] [rbp+20h]

  v2 = a1[1];
  v3 = a2;
  v4 = a1[3];
  v5 = a1[2];
  v6 = a2[8];
  v62 = *a2;
  v54 = a2[1];
  v7 = __ROL4__(*a2 + *a1 + (v4 ^ v2 & (v5 ^ v4)), 3);
  v59 = a2[4];
  v8 = __ROL4__(v4 + v54 + (v5 ^ v7 & (v2 ^ v5)), 7);
  v63 = a2[2];
  v9 = __ROL4__(v5 + v63 + (v2 ^ v8 & (v7 ^ v2)), 11);
  v56 = v3[3];
  v10 = __ROL4__(v2 + v56 + (v7 ^ v9 & (v7 ^ v8)), 19);
  v55 = v3[5];
  v11 = __ROL4__(v7 + v59 + (v8 ^ v10 & (v9 ^ v8)), 3);
  v64 = v3[6];
  v12 = __ROL4__(v8 + v55 + (v9 ^ v11 & (v10 ^ v9)), 7);
  v58 = v3[7];
  v13 = __ROL4__(v9 + v64 + (v10 ^ v12 & (v11 ^ v10)), 11);
  v14 = __ROL4__(v10 + v58 + (v11 ^ v13 & (v11 ^ v12)), 19);
  v15 = v3[10];
  v16 = v3[12];
  v17 = v3[13];
  v18 = v3[14];
  v19 = v3[15];
  v20 = __ROL4__(v11 + v6 + (v12 ^ v14 & (v13 ^ v12)), 3);
  v60 = v3[9];
  v57 = v3[11];
  v21 = __ROL4__(v12 + v60 + (v13 ^ v20 & (v14 ^ v13)), 7);
  v22 = __ROL4__(v13 + v15 + (v14 ^ v21 & (v20 ^ v14)), 11);
  v23 = __ROL4__(v14 + v57 + (v20 ^ v22 & (v20 ^ v21)), 19);
  v24 = __ROL4__(v20 + v16 + (v21 ^ v23 & (v22 ^ v21)), 3);
  v25 = __ROL4__(v21 + v17 + (v22 ^ v24 & (v23 ^ v22)), 7);
  v26 = __ROL4__(v22 + v18 + (v23 ^ v25 & (v24 ^ v23)), 11);
  LODWORD(v3) = __ROL4__(v23 + v19 + (v24 ^ v26 & (v24 ^ v25)), 19);
  v27 = __ROL4__(v62 + ((unsigned int)v3 & v26 | v25 & ((unsigned int)v3 | v26)) + 1518500249 + v24, 3);
  v28 = __ROL4__(v59 + (v27 & (unsigned int)v3 | v26 & (v27 | (unsigned int)v3)) + 1518500249 + v25, 5);
  v29 = __ROL4__(v6 + (v27 & v28 | (unsigned int)v3 & (v27 | v28)) + 1518500249 + v26, 9);
  LODWORD(v3) = __ROL4__(v16 + (v29 & v28 | v27 & (v29 | v28)) + 1518500249 + (_DWORD)v3, 13);
  v30 = __ROL4__(v54 + ((unsigned int)v3 & v29 | v28 & ((unsigned int)v3 | v29)) + v27 + 1518500249, 3);
  v31 = __ROL4__(v55 + (v30 & (unsigned int)v3 | v29 & (v30 | (unsigned int)v3)) + v28 + 1518500249, 5);
  v32 = __ROL4__(v60 + (v30 & v31 | (unsigned int)v3 & (v30 | v31)) + v29 + 1518500249, 9);
  v33 = __ROL4__(v17 + (v32 & v31 | v30 & (v32 | v31)) + (_DWORD)v3 + 1518500249, 13);
  LODWORD(v3) = __ROL4__(v63 + (v33 & v32 | v31 & (v33 | v32)) + v30 + 1518500249, 3);
  v34 = __ROL4__(v64 + ((unsigned int)v3 & v33 | v32 & ((unsigned int)v3 | v33)) + v31 + 1518500249, 5);
  v35 = __ROL4__(v15 + ((unsigned int)v3 & v34 | v33 & ((unsigned int)v3 | v34)) + v32 + 1518500249, 9);
  v36 = __ROL4__(v18 + (v35 & v34 | (unsigned int)v3 & (v35 | v34)) + v33 + 1518500249, 13);
  v37 = __ROL4__(v56 + (v36 & v35 | v34 & (v36 | v35)) + (_DWORD)v3 + 1518500249, 3);
  v38 = __ROL4__(v34 + v58 + (v37 & v36 | v35 & (v37 | v36)) + 1518500249, 5);
  v39 = __ROL4__(v57 + (v37 & v38 | v36 & (v37 | v38)) + v35 + 1518500249, 9);
  LODWORD(v3) = __ROL4__(v36 + v19 + (v39 & v38 | v37 & (v39 | v38)) + 1518500249, 13);
  v40 = __ROL4__(v62 + ((unsigned int)v3 ^ v39 ^ v38) + 1859775393 + v37, 3);
  v41 = __ROL4__(v6 + (v40 ^ (unsigned int)v3 ^ v39) + 1859775393 + v38, 9);
  v42 = __ROL4__(v59 + (v40 ^ (unsigned int)v3 ^ v41) + 1859775393 + v39, 11);
  LODWORD(v3) = __ROL4__(v16 + (v40 ^ v42 ^ v41) + 1859775393 + (_DWORD)v3, 15);
  v43 = __ROL4__(v63 + ((unsigned int)v3 ^ v42 ^ v41) + v40 + 1859775393, 3);
  v44 = __ROL4__(v15 + (v43 ^ (unsigned int)v3 ^ v42) + v41 + 1859775393, 9);
  v45 = __ROL4__(v64 + (v43 ^ (unsigned int)v3 ^ v44) + v42 + 1859775393, 11);
  v46 = __ROL4__(v18 + (v43 ^ v45 ^ v44) + (_DWORD)v3 + 1859775393, 15);
  v47 = __ROL4__(v54 + (v46 ^ v45 ^ v44) + 1859775393 + v43, 3);
  v48 = __ROL4__(v60 + (v47 ^ v46 ^ v45) + 1859775393 + v44, 9);
  v49 = __ROL4__(v55 + (v47 ^ v46 ^ v48) + v45 + 1859775393, 11);
  LODWORD(v3) = __ROL4__(v17 + (v47 ^ v49 ^ v48) + v46 + 1859775393, 15);
  v50 = __ROL4__(v47 + v56 + ((unsigned int)v3 ^ v49 ^ v48) + 1859775393, 3);
  v51 = __ROL4__(v57 + (v50 ^ (unsigned int)v3 ^ v49) + v48 + 1859775393, 9);
  v52 = __ROL4__(v58 + (v50 ^ (unsigned int)v3 ^ v51) + v49 + 1859775393, 11);
  result = v19 + (v50 ^ v52 ^ v51);
  *a1 += v50;
  a1[2] += v52;
  a1[1] += __ROL4__(result + (_DWORD)v3 + 1859775393, 15);
  a1[3] += v51;
  return result;
}
