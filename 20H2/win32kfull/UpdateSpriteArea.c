/*
 * XREFs of UpdateSpriteArea @ 0x1C0150100
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C003CF2C (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00FA368 (GreConvertMemToRedirectionDC.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GreConvertRedirectionToMemDC @ 0x1C029FF4C (GreConvertRedirectionToMemDC.c)
 */

_UNKNOWN **__fastcall UpdateSpriteArea(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        HDC a4,
        HDC a5,
        __int64 a6,
        struct tagRECT *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _UNKNOWN **result; // rax
  __int64 v13; // r15
  __int64 v15; // rdx
  bool v18; // zf
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __m128i v21; // xmm6
  __int64 v22; // r8
  LONG v23; // ecx
  int v24; // r8d
  int v25; // esi
  HDC v26; // rdi
  __int64 v27; // r8
  int v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+88h] [rbp-80h]
  int v30; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v31; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v32; // [rsp+A0h] [rbp-68h]
  struct tagPOINT v33; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v34; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-50h]
  HDC v36; // [rsp+C0h] [rbp-48h]
  __int64 v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  struct tagRECT v40; // [rsp+E8h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v13 = 0LL;
  v30 = 0;
  v15 = *((_QWORD *)a1 + 5);
  v40 = 0LL;
  v35 = a3;
  v36 = a5;
  v18 = (*(_BYTE *)(v15 + 26) & 8) == 0;
  v19 = *(_DWORD *)(v15 + 88);
  v20 = *(_DWORD *)(v15 + 92);
  v32 = v19;
  v31 = v20;
  v37 = a6;
  if ( !v18 && a2 )
  {
    v22 = -v20;
    v40 = *a7;
    v21 = (__m128i)v40;
    v34.cx = *(_DWORD *)(v15 + 96) - *(_DWORD *)(v15 + 88);
    v23 = *(_DWORD *)(v15 + 100) - *(_DWORD *)(v15 + 92);
    v40.bottom += v22;
    v40.right -= v19;
    v40.top += v22;
    v34.cy = v23;
    v39 = v21.m128i_i64[1];
    v40.left = _mm_cvtsi128_si32(v21) - v19;
    GreOffsetRgn(a6, -v19, v22);
    v29 = a8 + _mm_cvtsi128_si32(v21) - a10;
    v38 = GreSelectBitmap(a5, a3);
    if ( a5 != a4 )
      v13 = GreSelectBitmap(a4, a2);
    GreSelectVisRgn(a4, a6, 4LL);
    v25 = GreConvertMemToRedirectionDC(a4, &v30, v24);
    EtwTraceWindowRenderingOldToNewRedirectionBitmap(
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      v35,
      (unsigned int)v40.left,
      v40.top,
      v40.right,
      v40.bottom,
      *(_QWORD *)a1,
      *(_QWORD *)a1,
      a2,
      v29,
      v21.m128i_i32[1] - a11 + a9,
      v40.right + v29 - v40.left,
      v40.bottom + v21.m128i_i32[1] - a11 + a9 - v40.top,
      v21.m128i_i32[1] - a11 + a9);
    v26 = v36;
    NtGdiBitBltInternal(
      a4,
      v40.left,
      v40.top,
      v40.right - v40.left,
      v40.bottom - v40.top,
      v36,
      v29,
      v28,
      -2134114272,
      0,
      0);
    if ( v25 )
      GreConvertRedirectionToMemDC(a4);
    v33 = *(struct tagPOINT *)(*((_QWORD *)a1 + 5) + 88LL);
    UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v27, 0LL, 0LL, &v34, a4, &v33, 0, 0LL, 0x40000000, &v40);
    GreSelectVisRgn(a4, v37, 4LL);
    GreOffsetRgn(v37, v32, v31);
    result = (_UNKNOWN **)GreSelectBitmap(v26, v38);
    if ( v13 )
      return (_UNKNOWN **)GreSelectBitmap(a4, v13);
  }
  return result;
}
