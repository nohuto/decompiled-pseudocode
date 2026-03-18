/*
 * XREFs of GetCharDimensions @ 0x1C0024BC8
 * Callers:
 *     FinalUserInit @ 0x1C00230A4 (FinalUserInit.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00232F4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxSetNCFonts @ 0x1C0024488 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C0024B20 (ValidateExternalLogFont.c)
 *     CreateScaledFont @ 0x1C01E9BB0 (CreateScaledFont.c)
 * Callees:
 *     GreTextInitialized @ 0x1C0024D48 (GreTextInitialized.c)
 *     GreGetTextMetricsW @ 0x1C0024D94 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall GetCharDimensions(HDC a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rcx
  int v7; // r14d
  int TextMetricsW; // eax
  __int128 v9; // xmm2
  __m128i v10; // xmm1
  __int64 v11; // xmm0_8
  __int128 v12; // xmm3
  unsigned int v13; // esi
  __int64 DPIServerInfo; // rax
  int v16; // [rsp+38h] [rbp-49h]
  __m128i v17; // [rsp+48h] [rbp-39h]
  char v18; // [rsp+6Fh] [rbp-12h]
  _OWORD v19[5]; // [rsp+78h] [rbp-9h] BYREF
  struct tagSIZE v20; // [rsp+F0h] [rbp+6Fh] BYREF

  v7 = GreTextInitialized();
  if ( !v7 )
    goto LABEL_12;
  memset(v19, 0, 0x44uLL);
  TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v19);
  v9 = v19[0];
  v10 = (__m128i)v19[1];
  v11 = *(_QWORD *)&v19[3];
  v12 = v19[2];
  v6 = DWORD2(v19[3]);
  v18 = BYTE7(v19[3]);
  v16 = v19[0];
  if ( TextMetricsW )
  {
    v13 = DWORD1(v19[1]);
  }
  else
  {
LABEL_12:
    DPIServerInfo = GetDPIServerInfo(v6);
    LODWORD(v6) = *(_DWORD *)(DPIServerInfo + 96);
    v9 = *(_OWORD *)(DPIServerInfo + 40);
    v11 = *(_QWORD *)(DPIServerInfo + 88);
    v12 = *(_OWORD *)(DPIServerInfo + 72);
    v17 = *(__m128i *)(DPIServerInfo + 56);
    v18 = HIBYTE(v11);
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
    v16 = v9;
    if ( !v17.m128i_i32[1] )
      v13 = 8;
    v17.m128i_i32[1] = v13;
    v10 = v17;
  }
  if ( a2 )
  {
    *(_OWORD *)a2 = v9;
    *(__m128i *)(a2 + 16) = v10;
    *(_OWORD *)(a2 + 32) = v12;
    *(_QWORD *)(a2 + 48) = v11;
    *(_DWORD *)(a2 + 56) = v6;
  }
  if ( a3 )
    *a3 = v16;
  if ( v7
    && (v18 & 1) != 0
    && (v20 = 0LL,
        (unsigned int)GreGetTextExtentW(a1, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v20, 1)) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v20.cx) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v20.cx) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v13;
  }
}
