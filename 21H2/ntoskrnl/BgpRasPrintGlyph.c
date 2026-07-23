/*
 * XREFs of BgpRasPrintGlyph @ 0x1403B1CB8
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403B19F8 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x1409F8784 (BgpTxtDisplayString.c)
 * Callees:
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     BgpFmRoundUp @ 0x14039C9B8 (BgpFmRoundUp.c)
 *     RaspAntiAlias @ 0x1403B202C (RaspAntiAlias.c)
 *     RaspGetCacheEntry @ 0x1403B2418 (RaspGetCacheEntry.c)
 *     RaspRasterize @ 0x1403B24AC (RaspRasterize.c)
 *     RaspFreeMemory @ 0x1403B2678 (RaspFreeMemory.c)
 *     RaspRectangleCreate @ 0x1403B2FEC (RaspRectangleCreate.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     RaspAddCacheEntry @ 0x1409F56A4 (RaspAddCacheEntry.c)
 *     RaspDestroyCachedBitmap @ 0x1409F5708 (RaspDestroyCachedBitmap.c)
 *     BgpGxCopyRectangle @ 0x1409F863C (BgpGxCopyRectangle.c)
 */

__int64 __fastcall BgpRasPrintGlyph(
        __m128i *a1,
        __int64 a2,
        __int16 a3,
        unsigned int a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8,
        __int128 *a9)
{
  int v9; // edi
  __int128 *v10; // rsi
  __int64 v11; // r12
  __m128i *v12; // r14
  bool v13; // r15
  int v14; // r13d
  int v15; // r8d
  int v16; // r8d
  int v17; // r9d
  _BYTE *Memory; // rbx
  __int16 v19; // r12
  __int64 v20; // rdx
  _DWORD *v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // r10d
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // r9
  int v29; // r10d
  int v30; // r11d
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  bool v34; // zf
  __m128i v35; // xmm0
  __m128i v36; // xmm3
  __m128i v37; // xmm1
  __int64 v38; // xmm0_8
  int v39; // edx
  unsigned __int64 v40; // xmm3_8
  int v42; // r9d
  int v43; // eax
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v45; // [rsp+54h] [rbp-ACh]
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h]
  _DWORD *v48; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-90h]
  unsigned __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  __m128i *v52; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v53[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i *v54; // [rsp+A0h] [rbp-60h]
  int *v55; // [rsp+A8h] [rbp-58h]
  __int128 v56; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-40h]
  _BYTE v58[80]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v59[5]; // [rsp+120h] [rbp+20h] BYREF
  char v60[8]; // [rsp+1F8h] [rbp+F8h]

  v47 = a2;
  LOWORD(v45) = a3;
  v54 = a1;
  v49 = a4;
  v55 = a7;
  memset(v59, 0, 0x48uLL);
  memset(v58, 0, 0x46uLL);
  v44 = 0;
  *a7 = 0;
  v9 = 0;
  v53[0] = 0;
  v10 = &v56;
  v50 = 0LL;
  v11 = 0LL;
  v46 = 0;
  v12 = 0LL;
  v13 = 0;
  v57 = 0LL;
  v14 = 0;
  v51 = 0LL;
  v60[0] = a6 & 1;
  v52 = 0LL;
  if ( a9 )
    v10 = a9;
  v56 = 0LL;
  if ( (unsigned __int16)v45 >= 0x20u )
  {
    v15 = *(_DWORD *)(v47 + 16);
    v48 = *(_DWORD **)(v47 + 8);
    RaspGetCacheEntry((unsigned int)&RaspBitmapCache, (unsigned __int16)v45, v15, v48[10], (__int64)v48, (__int64)&v50);
    Memory = (_BYTE *)v50;
    if ( v50 )
    {
      v22 = v47;
      v21 = v48;
LABEL_12:
      v24 = *((__int16 *)v21 + 43);
      v25 = *((_DWORD *)Memory + 11);
      v48 = (_DWORD *)*((_QWORD *)Memory + 2);
      v26 = *(_QWORD *)(v22 + 8);
      v46 = *v48 / *((_DWORD *)Memory + 14);
      v44 = v25;
      v27 = BgpFmRoundUp(
              ((*(unsigned int *)(v22 + 16) * v24 * *(unsigned int *)(v26 + 96)) << 6)
            / (72LL
             * *(unsigned __int16 *)(v26 + 120)));
      v31 = *((_DWORD *)Memory + 12);
      v32 = a5 + v27;
      if ( v31 >= 0 && v31 > v32 )
      {
        v42 = *((unsigned __int16 *)Memory + 30);
        v45 = 0;
        DbgPrintEx(0x65u, 0, "BGFX internal font error char %x!\n", v42);
        v28 = v47;
        v33 = 0;
        v29 = v44;
        v30 = v46;
      }
      else
      {
        v33 = v32 - v31;
        v45 = v33;
      }
      if ( v54->m128i_i32[0] < v30 + v33 || v54->m128i_i32[1] < v29 + v49 )
      {
        v9 = -2147483643;
        goto LABEL_25;
      }
      if ( v60[0] )
      {
        v34 = (*(_BYTE *)(v28 + 20) & 1) == 0;
        v12 = v59;
        v35 = v54[2];
        v36 = v54[1];
        v37 = v54[3];
        v59[0] = *v54;
        v59[1] = v36;
        v59[2] = v35;
        v38 = v54[4].m128i_i64[0];
        v39 = _mm_cvtsi128_si32(_mm_srli_si128(v59[0], 4));
        v40 = _mm_srli_si128(v36, 8).m128i_u64[0];
        v59[3] = v37;
        if ( v34 )
          v39 = v29;
        v59[4].m128i_i64[0] = v38;
        v44 = v39;
        v59[0].m128i_i64[0] = __PAIR64__(v39, v30);
        v59[1].m128i_i64[1] = v39 * ((unsigned __int32)v59[0].m128i_i32[2] >> 3) * v33 + v40;
        goto LABEL_21;
      }
      v53[1] = v30;
      v53[0] = v29;
      v53[2] = v29;
      v43 = RaspRectangleCreate(v53, 32LL, &v52, v10);
      v12 = v52;
      v9 = v43;
      if ( v43 >= 0 )
      {
        v28 = v47;
LABEL_21:
        RaspAntiAlias((_DWORD)v48, (_DWORD)v12, *((_DWORD *)Memory + 13), *((_DWORD *)Memory + 14), v28);
        if ( !v60[0] )
        {
          v48 = 0LL;
          v50 = __PAIR64__(v45, v49);
          BgpGxCopyRectangle(v54, v12, &v50, &v48);
        }
        *v55 = v44;
        if ( v13 )
          RaspAddCacheEntry(&RaspBitmapCache, Memory);
LABEL_25:
        if ( v9 >= 0 )
          goto LABEL_26;
      }
LABEL_38:
      if ( !v13 )
      {
LABEL_27:
        if ( !v14 )
        {
LABEL_28:
          if ( v11 )
            RaspFreeMemory(v11, v10);
          goto LABEL_30;
        }
LABEL_32:
        if ( v9 >= 0 || Memory )
          goto LABEL_30;
        goto LABEL_28;
      }
      if ( Memory )
        RaspDestroyCachedBitmap(Memory);
LABEL_26:
      if ( v13 )
        goto LABEL_32;
      goto LABEL_27;
    }
    LOBYTE(v14) = (dword_140C134F0 & 4) != 0;
    if ( (dword_140C134F0 & 4) == 0 && !*(_QWORD *)v10 )
      v13 = (*(_BYTE *)(v47 + 20) & 1) == 0;
    v19 = v45;
    v9 = RaspRasterize(
           v47,
           (unsigned __int16)v45,
           v16,
           v17,
           v14,
           (__int64)&v51,
           (__int64)&v46,
           (__int64)&v44,
           (__int64)v10);
    if ( v9 >= 0 )
    {
      if ( !v13 )
      {
        Memory = v58;
LABEL_11:
        v20 = *((_QWORD *)v10 + 2);
        v21 = v48;
        v22 = v47;
        v23 = v48[10];
        *((_DWORD *)Memory + 10) = *(_DWORD *)(v47 + 16);
        *((_DWORD *)Memory + 11) = v46;
        *((_DWORD *)Memory + 12) = v44;
        *((_WORD *)Memory + 30) = v19;
        v11 = v51;
        *((_DWORD *)Memory + 13) = 4;
        *((_DWORD *)Memory + 14) = 4;
        *((_DWORD *)Memory + 9) = v23;
        *((_QWORD *)Memory + 3) = v21;
        *((_QWORD *)Memory + 2) = v11;
        *(_QWORD *)(Memory + 62) = v20;
        goto LABEL_12;
      }
      Memory = (_BYTE *)BgpFwAllocateMemory(0x46uLL);
      if ( Memory )
        goto LABEL_11;
      v9 = -1073741801;
    }
    v11 = v51;
    goto LABEL_38;
  }
LABEL_30:
  if ( !v60[0] && v12 )
    RaspFreeMemory(v12, v10);
  *((_QWORD *)v10 + 2) = 0LL;
  return (unsigned int)v9;
}
