/*
 * XREFs of sub_1C004F72C @ 0x1C004F72C
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C004E934 @ 0x1C004E934 (sub_1C004E934.c)
 *     sub_1C004E9B4 @ 0x1C004E9B4 (sub_1C004E9B4.c)
 *     sub_1C004EA10 @ 0x1C004EA10 (sub_1C004EA10.c)
 */

__int64 __fastcall sub_1C004F72C(__int64 a1, __int64 a2)
{
  UCHAR *v3; // r12
  __m128 *v4; // rdi
  __int64 v6; // r9
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  _WORD *PoolWithTag; // rax
  __int64 *v10; // r13
  POOL_TYPE v11; // ecx
  _OWORD *v12; // rax
  _OWORD *v13; // rbx
  unsigned int v14; // ecx
  __int64 v15; // rax
  SIZE_T v16; // r13
  int v17; // r8d
  __m128 *v18; // rax
  char *v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int16 v21; // cx
  SIZE_T v22; // r13
  int Property; // ebx
  UCHAR *v24; // r14
  __m128 *v25; // rax
  __int64 v26; // r8
  UCHAR *v27; // r11
  __int64 v28; // r14
  int v29; // eax
  __int64 v30; // r8
  int v31; // r8d
  ULONG v32; // r15d
  __m128 *v33; // rax
  __m128 *v34; // rax
  __int128 v35; // xmm0
  ULONG pcbResult[4]; // [rsp+40h] [rbp-40h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-30h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp-20h]
  PVOID v41; // [rsp+68h] [rbp-18h]
  PVOID P; // [rsp+70h] [rbp-10h]
  __int64 v43; // [rsp+D0h] [rbp+50h] BYREF
  ULONG pbOutput; // [rsp+D8h] [rbp+58h] BYREF

  phHash = 0LL;
  pbOutput = 0;
  pcbResult[0] = 0;
  v3 = 0LL;
  phAlgorithm = 0LL;
  v4 = 0LL;
  sub_1C000FD80(a1, 4096, 1111705924, a2, 0LL);
  v7 = sub_1C0011220(v6);
  v8 = *((unsigned __int16 *)v7 + 704);
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 8uLL, 0x42554855u);
  P = PoolWithTag;
  v10 = (__int64 *)PoolWithTag;
  if ( !PoolWithTag )
  {
    v17 = 1111699745;
    goto LABEL_59;
  }
  *(_QWORD *)PoolWithTag = 0x6E006E006E006ELL;
  *PoolWithTag = (unsigned __int8)a0123456789abcd[(unsigned __int64)v8 >> 12];
  PoolWithTag[1] = (unsigned __int8)a0123456789abcd[((unsigned __int64)v8 >> 8) & 0xF];
  PoolWithTag[2] = (unsigned __int8)a0123456789abcd[((unsigned __int64)v8 >> 4) & 0xF];
  v11 = PoolType;
  PoolWithTag[3] = (unsigned __int8)a0123456789abcd[v8 & 0xF];
  LOWORD(v43) = *((_WORD *)v7 + 705);
  v12 = ExAllocatePoolWithTag(v11, 0x10uLL, 0x42554855u);
  v41 = v12;
  v13 = v12;
  if ( v12 )
  {
    v14 = (unsigned __int16)v43;
    v40 = 16LL;
    *v12 = 0LL;
    v15 = *v10;
    v16 = 26LL;
    *(_QWORD *)v13 = v15;
    *((_QWORD *)v13 + 1) = 0x6E006E006E006ELL;
    *((_WORD *)v13 + 4) = (unsigned __int8)a0123456789abcd[(unsigned __int64)v14 >> 12];
    *((_WORD *)v13 + 5) = (unsigned __int8)a0123456789abcd[((unsigned __int64)v14 >> 8) & 0xF];
    *((_WORD *)v13 + 6) = (unsigned __int8)a0123456789abcd[((unsigned __int64)v14 >> 4) & 0xF];
    *((_WORD *)v13 + 7) = (unsigned __int8)a0123456789abcd[v14 & 0xF];
  }
  else
  {
    v40 = 0LL;
    v16 = 10LL;
  }
  ExFreePoolWithTag(P, 0);
  if ( !v13 )
  {
    v17 = 1111700001;
LABEL_59:
    Property = -1073741670;
    sub_1C000FD80(a1, 4096, v17, a2, -1073741670LL);
    return (unsigned int)Property;
  }
  LOWORD(v43) = *((_WORD *)v7 + 706);
  v18 = (__m128 *)ExAllocatePoolWithTag(PoolType, v16, 0x42554855u);
  P = v18;
  v19 = (char *)v18;
  if ( v18 )
  {
    sub_1C001D340(v18, 0, v16);
    sub_1C001D080(v19, (char *)v41, v40);
    v20 = v40;
    v21 = v43;
    *(_QWORD *)&v19[v40] = 0x6E006E006E006ELL;
    *(_WORD *)&v19[v20] = (v21 >> 12) + 48;
    *(_WORD *)&v19[v20 + 2] = (HIBYTE(v21) & 0xF) + 48;
    *(_WORD *)&v19[v20 + 4] = ((unsigned __int8)v21 >> 4) + 48;
    *(_WORD *)&v19[v20 + 6] = (v21 & 0xF) + 48;
  }
  else
  {
    LODWORD(v16) = 0;
  }
  ExFreePoolWithTag(v41, 0);
  if ( !v19 )
  {
    v17 = 1111700257;
    goto LABEL_59;
  }
  v22 = (unsigned int)(v7[533] + v16);
  if ( v22 >= 2 )
  {
    v25 = (__m128 *)ExAllocatePoolWithTag(PoolType, v22, 0x42554855u);
    v4 = v25;
    if ( v25 )
    {
      sub_1C001D340(v25, 0, v22);
      v27 = 0LL;
      v28 = v22 >> 1;
      v29 = 0;
      if ( !(v22 >> 1) )
        v29 = -1073741811;
      if ( v29 < 0 )
      {
        if ( v28 )
          v4->m128_i16[0] = 0;
      }
      else
      {
        v29 = sub_1C004E9B4(v4, v22 >> 1, v26, (__int64)v19);
      }
      Property = v29;
      if ( v29 < 0 )
      {
        v24 = v27;
        goto LABEL_48;
      }
      v30 = *((_QWORD *)v7 + 267);
      if ( !v30 || (Property = sub_1C004E934((__int64)v4, v22, v30), Property >= 0) )
      {
        v43 = 0LL;
        v31 = sub_1C004EA10(v4, v28, &v43);
        v32 = v31 < 0 ? 0 : 2 * v43;
        Property = v31;
        if ( v31 >= 0 )
        {
          Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
          if ( Property >= 0 )
          {
            Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
            if ( Property >= 0 )
            {
              if ( pcbResult[0] == 4 )
              {
                v33 = (__m128 *)ExAllocatePoolWithTag(PoolType, pbOutput, 0x42554855u);
                v24 = (UCHAR *)v33;
                if ( v33 )
                {
                  sub_1C001D340(v33, 0, pbOutput);
                  Property = BCryptCreateHash(phAlgorithm, &phHash, v24, pbOutput, 0LL, 0, 0);
                  if ( Property < 0 )
                    goto LABEL_48;
                  Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
                  if ( Property < 0 )
                    goto LABEL_48;
                  Property = BCryptHashData(phHash, (PUCHAR)v4, v32, 0);
                  if ( Property < 0 )
                    goto LABEL_48;
                  Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
                  if ( Property < 0 )
                    goto LABEL_48;
                  if ( pcbResult[0] != 4 || pbOutput < 0x10 )
                  {
                    Property = -1073741811;
                    goto LABEL_48;
                  }
                  v34 = (__m128 *)ExAllocatePoolWithTag(PoolType, pbOutput, 0x42554855u);
                  v3 = (UCHAR *)v34;
                  if ( v34 )
                  {
                    sub_1C001D340(v34, 0, pbOutput);
                    Property = BCryptFinishHash(phHash, v3, pbOutput, 0);
                    if ( Property >= 0 )
                    {
                      v35 = *(_OWORD *)v3;
                      *((_BYTE *)v7 + 2732) = 1;
                      *(_OWORD *)(v7 + 679) = v35;
                      *((_WORD *)v7 + 1361) = *((_WORD *)v7 + 1361) & 0xFFF | 0x5000;
                      *((_BYTE *)v7 + 2724) = v7[681] & 0x3F | 0x80;
                    }
                    goto LABEL_48;
                  }
                }
                Property = -1073741670;
                goto LABEL_48;
              }
              Property = -1073741306;
            }
          }
          else
          {
            phAlgorithm = 0LL;
          }
        }
      }
    }
    else
    {
      Property = -1073741670;
      sub_1C000FD80(a1, 4096, 1111700513, a2, -1073741670LL);
    }
    v24 = 0LL;
  }
  else
  {
    Property = -1073741670;
    sub_1C000FD80(a1, 4096, 1111700769, a2, -1073741670LL);
    v24 = 0LL;
  }
LABEL_48:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
