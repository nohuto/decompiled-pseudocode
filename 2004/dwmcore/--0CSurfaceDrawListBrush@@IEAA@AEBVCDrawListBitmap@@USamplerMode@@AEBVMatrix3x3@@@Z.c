/*
 * XREFs of ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@@Z @ 0x18004CF48
 * Callers:
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180049AF8 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180049DF0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x18004CED4 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CSurfaceDrawListBrush(
        __int64 a1,
        const struct CDrawListBitmap *a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = _xmm;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)a1 = &CSurfaceDrawListBrush::`vftable';
  *(_QWORD *)(a1 + 24) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(a1 + 56), a2);
  *(_WORD *)(a1 + 104) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 106) = *(_BYTE *)(a3 + 2);
  *(_DWORD *)(a1 + 108) = *a4;
  *(_DWORD *)(a1 + 112) = a4[1];
  *(_DWORD *)(a1 + 116) = a4[2];
  *(_DWORD *)(a1 + 120) = a4[3];
  *(_DWORD *)(a1 + 124) = a4[4];
  *(_DWORD *)(a1 + 128) = a4[5];
  result = a1;
  *(_DWORD *)(a1 + 132) = a4[6];
  *(_DWORD *)(a1 + 136) = a4[7];
  *(_DWORD *)(a1 + 140) = a4[8];
  *(_WORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 144) = _xmm;
  *(_BYTE *)(a1 + 170) = 0;
  return result;
}
