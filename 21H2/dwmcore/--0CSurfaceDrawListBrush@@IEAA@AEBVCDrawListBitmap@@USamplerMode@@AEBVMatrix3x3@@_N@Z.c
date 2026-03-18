/*
 * XREFs of ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x180056AF8
 * Callers:
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180056958 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x180056BCC (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CSurfaceDrawListBrush(
        __int64 a1,
        const struct CDrawListBitmap *a2,
        __int64 a3,
        _DWORD *a4,
        char a5)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = *(_OWORD *)&_xmm;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)a1 = &CSurfaceDrawListBrush::`vftable';
  *(_QWORD *)(a1 + 24) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(a1 + 56), a2);
  *(_WORD *)(a1 + 80) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 82) = *(_BYTE *)(a3 + 2);
  *(_DWORD *)(a1 + 84) = *a4;
  *(_DWORD *)(a1 + 88) = a4[1];
  *(_DWORD *)(a1 + 92) = a4[2];
  *(_DWORD *)(a1 + 96) = a4[3];
  *(_DWORD *)(a1 + 100) = a4[4];
  *(_DWORD *)(a1 + 104) = a4[5];
  *(_DWORD *)(a1 + 108) = a4[6];
  *(_DWORD *)(a1 + 112) = a4[7];
  result = a1;
  *(_DWORD *)(a1 + 116) = a4[8];
  *(_BYTE *)(a1 + 144) = a5;
  *(_WORD *)(a1 + 146) = 0;
  *(_BYTE *)(a1 + 145) = a5 ^ 1;
  *(_OWORD *)(a1 + 120) = _xmm;
  *(_BYTE *)(a1 + 148) = 0;
  return result;
}
