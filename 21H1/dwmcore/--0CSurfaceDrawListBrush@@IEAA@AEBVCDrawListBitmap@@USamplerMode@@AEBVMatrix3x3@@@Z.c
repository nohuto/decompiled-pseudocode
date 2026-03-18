/*
 * XREFs of ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@@Z @ 0x1800464C8
 * Callers:
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180036350 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800364EC (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CSurfaceDrawListBrush(__int64 a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rcx

  *(_OWORD *)(a1 + 8) = _xmm;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)a1 = &CSurfaceDrawListBrush::`vftable';
  *(_QWORD *)(a1 + 24) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v8 = *a2;
  *(_QWORD *)(a1 + 56) = v8;
  if ( v8 )
  {
    v9 = v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v10 = a2[1];
  *(_QWORD *)(a1 + 64) = v10;
  if ( v10 )
  {
    v12 = v10 + 8 + *(int *)(*(_QWORD *)(v10 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  *(_OWORD *)(a1 + 72) = *((_OWORD *)a2 + 1);
  *(_QWORD *)(a1 + 88) = a2[4];
  *(_BYTE *)(a1 + 96) = *((_BYTE *)a2 + 40);
  *(_WORD *)(a1 + 104) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 106) = *(_BYTE *)(a3 + 2);
  *(_DWORD *)(a1 + 108) = *a4;
  *(_DWORD *)(a1 + 112) = a4[1];
  *(_DWORD *)(a1 + 116) = a4[2];
  *(_DWORD *)(a1 + 120) = a4[3];
  *(_DWORD *)(a1 + 124) = a4[4];
  result = a1;
  *(_DWORD *)(a1 + 128) = a4[5];
  *(_DWORD *)(a1 + 132) = a4[6];
  *(_DWORD *)(a1 + 136) = a4[7];
  *(_DWORD *)(a1 + 140) = a4[8];
  *(_WORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 144) = _xmm;
  return result;
}
