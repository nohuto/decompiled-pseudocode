/*
 * XREFs of ExpandDIB_CX @ 0x1C0268B20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall ExpandDIB_CX(__int128 *a1, __int16 *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int16 v9; // r8
  char v10; // r11
  __int64 v11; // r10
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // r10
  int v15; // r9d
  int v16; // edx
  __int64 v17; // r8
  __int128 v18; // xmm0
  int v19; // edi
  __int16 v20; // ax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int16 v24; // r11
  char v25; // al
  __int64 v26; // r8
  _BYTE *v27; // rcx
  __int64 *v28; // rdi
  _BYTE *v29; // r13
  __int64 v30; // rax
  unsigned __int16 v31; // r11
  __int128 v32; // xmm0
  int v33; // edx
  __int16 v34; // ax
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // edx
  int v39; // r8d
  int v40; // r9d
  int v41; // r14d
  int v42; // r15d
  int v43; // r12d
  __int64 v44; // [rsp+0h] [rbp-100h]
  __int128 v45; // [rsp+10h] [rbp-F0h]
  __int128 v46; // [rsp+30h] [rbp-D0h]
  _BYTE v47[24]; // [rsp+100h] [rbp+0h] BYREF

  v45 = *a1;
  v46 = a1[2];
  result = 0LL;
  memset(v47, 0, sizeof(v47));
  if ( a2 )
  {
    v8 = (__int64)&a2[(int)v45 + 3] + (int)v45;
    *(_WORD *)(v8 - 6) = *(_WORD *)(v8 - 9);
    *(_BYTE *)(v8 - 4) = *(_BYTE *)(v8 - 7);
    *(_WORD *)(v8 - 3) = *(_WORD *)(v8 - 6);
    *(_BYTE *)(v8 - 1) = *(_BYTE *)(v8 - 4);
    *(_WORD *)v8 = *(_WORD *)(v8 - 3);
    *(_BYTE *)(v8 + 2) = *(_BYTE *)(v8 - 1);
    v9 = *a2;
    v10 = *((_BYTE *)a2 + 2);
    *(_WORD *)&v47[15] = *a2;
    v47[17] = v10;
    v11 = (__int64)&a2[BYTE8(v45) & 1] + (BYTE8(v45) & 1);
    v12 = v11;
    *(_WORD *)&v47[18] = *(_WORD *)v11;
    v13 = *(_BYTE *)(v11 + 2);
    v14 = v11 + 3;
    v47[20] = v13;
    v15 = WORD6(v45) >> 4;
    v16 = BYTE12(v45) & 0xF;
    if ( !v16 && v15 )
    {
      *(_WORD *)&v47[18] = v9;
      v16 = 1;
      v47[20] = v10;
      --v15;
      v14 = v12;
    }
    v17 = (unsigned int)(4 - v16);
    while ( v16 )
    {
      --v16;
      v18 = *(_OWORD *)&v47[3];
      v19 = *(unsigned __int8 *)(v14 + 2);
      *(_WORD *)&v47[16] = *(_WORD *)&v47[19];
      v20 = *(_WORD *)v14;
      v14 += 3LL;
      *(_WORD *)&v47[18] = v20;
      v47[20] = v19;
      *(_OWORD *)v47 = v18;
      if ( (BYTE8(v45) & 4) != 0 )
      {
        *(_WORD *)&v47[9] = *(_WORD *)&v47[15];
        v47[11] = v47[17];
      }
      else
      {
        v21 = (6 * v47[15] - v47[18] - v47[12]) >> 2;
        if ( (v21 & 0xFF00) != 0 )
          LOBYTE(v21) = ~HIBYTE(v21);
        v47[9] = v21;
        v22 = (6 * v47[16] - v47[19] - v47[13]) >> 2;
        if ( (v22 & 0xFF00) != 0 )
          LOBYTE(v22) = ~HIBYTE(v22);
        v47[10] = v22;
        v23 = (6 * v47[17] - v19 - v47[14]) >> 2;
        if ( (v23 & 0xFF00) != 0 )
          LOBYTE(v23) = ~HIBYTE(v23);
        v47[11] = v23;
      }
    }
    v24 = *(_WORD *)&v47[2 * v17 + (unsigned int)v17];
    *(_WORD *)&v47[21] = v24;
    v25 = v47[2 * v17 + 2 + (unsigned int)v17];
    v26 = (unsigned int)(v17 - 1);
    v47[23] = v25;
    if ( v15 )
    {
      while ( 1 )
      {
        v27 = &v47[(unsigned int)v26];
        *(_WORD *)&v27[2 * v26] = v24;
        v27[2 * v26 + 2] = v47[23];
        v26 = (unsigned int)(v26 - 1);
        if ( !--v15 )
          break;
        v24 = *(_WORD *)&v47[21];
      }
    }
    v28 = (__int64 *)*((_QWORD *)&v46 + 1);
    v29 = (_BYTE *)(a5 + a4);
    do
    {
      v30 = *v28++;
      v31 = v30;
      v44 = v30;
      if ( (v30 & 0x8000u) != 0LL )
      {
        v32 = *(_OWORD *)&v47[3];
        v33 = *(unsigned __int8 *)(v14 + 2);
        *(_WORD *)&v47[16] = *(_WORD *)&v47[19];
        v34 = *(_WORD *)v14;
        v14 += 3LL;
        *(_OWORD *)v47 = v32;
        *(_WORD *)&v47[18] = v34;
        v47[20] = v33;
        if ( (BYTE8(v45) & 4) != 0 )
        {
          *(_WORD *)&v47[9] = *(_WORD *)&v47[15];
          v47[11] = v47[17];
        }
        else
        {
          v35 = (6 * v47[15] - v47[18] - v47[12]) >> 2;
          if ( (v35 & 0xFF00) != 0 )
            LOBYTE(v35) = ~HIBYTE(v35);
          v47[9] = v35;
          v36 = (6 * v47[16] - v47[19] - v47[13]) >> 2;
          if ( (v36 & 0xFF00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          v47[10] = v36;
          v37 = (6 * v47[17] - v33 - v47[14]) >> 2;
          if ( (v37 & 0xFF00) != 0 )
            LOBYTE(v37) = ~HIBYTE(v37);
          v47[11] = v37;
        }
        v31 &= 0x3FFFu;
      }
      v38 = HIWORD(v44) * v47[11];
      v39 = HIWORD(v44) * v47[10];
      v40 = HIWORD(v44) * v47[9];
      if ( WORD2(v44) )
      {
        v41 = v38 + WORD2(v44) * v47[8];
        v42 = v39 + WORD2(v44) * v47[7];
        v38 = v41;
        v43 = v40 + WORD2(v44) * v47[6];
        v39 = v42;
        v40 = v43;
        if ( WORD1(v44) )
        {
          v38 = v41 + WORD1(v44) * v47[5];
          v39 = v42 + WORD1(v44) * v47[4];
          v40 = v43 + WORD1(v44) * v47[3];
          if ( v31 )
          {
            v38 += v31 * v47[2];
            v39 += v31 * v47[1];
            v40 += v31 * v47[0];
          }
        }
      }
      a3[2] = (unsigned int)(v38 + 4096) >> 13;
      a3[1] = (unsigned int)(v39 + 4096) >> 13;
      result = (unsigned int)(v40 + 4096) >> 13;
      *a3 = result;
      a3 += a5;
    }
    while ( a3 != v29 );
  }
  return result;
}
