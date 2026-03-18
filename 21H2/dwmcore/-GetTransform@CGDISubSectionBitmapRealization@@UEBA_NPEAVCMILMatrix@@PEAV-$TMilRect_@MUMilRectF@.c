/*
 * XREFs of ?GetTransform@CGDISubSectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A284C
 * Callers:
 *     ?GetTransform@CGDISubSectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010B5B0 (-GetTransform@CGDISubSectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 */

char __fastcall CGDISubSectionBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  int v3; // r10d
  bool v4; // zf
  int v6; // ebp
  int v8; // ecx
  char v9; // r8
  int v10; // r9d
  int v11; // r14d
  unsigned int v12; // esi
  unsigned int v13; // edi
  float v14; // xmm1_4
  __m128i v15; // xmm0
  char v16; // al
  float v17; // xmm2_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  __int128 v21; // [rsp+20h] [rbp-38h]

  v3 = *(_DWORD *)(a1 - 96);
  v4 = v3 == *(_DWORD *)(a1 - 80);
  v21 = *(_OWORD *)(a1 - 96);
  v6 = v21;
  v8 = *(_DWORD *)(a1 - 112);
  v9 = 0;
  if ( v4 )
    v6 = v8 + v21;
  v10 = *(_DWORD *)(a1 - 92);
  v11 = DWORD1(v21);
  if ( v10 == *(_DWORD *)(a1 - 76) )
    v11 = *(_DWORD *)(a1 - 104) + DWORD1(v21);
  v12 = DWORD2(v21);
  if ( *(_DWORD *)(a1 - 88) == *(_DWORD *)(a1 - 72) )
    v12 = DWORD2(v21) - *(_DWORD *)(a1 - 108);
  v13 = HIDWORD(v21);
  if ( *(_DWORD *)(a1 - 84) == *(_DWORD *)(a1 - 68) )
    v13 = HIDWORD(v21) - *(_DWORD *)(a1 - 100);
  if ( v12 < v6 )
    v12 = v6;
  if ( v13 < v11 )
    v13 = v11;
  v14 = (float)v3 - (float)v8;
  v15 = _mm_cvtsi32_si128(*(_DWORD *)(a1 - 104));
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v16 = *(_BYTE *)(a2 + 65) & 0xD7;
  *(_BYTE *)(a2 + 64) = 85;
  *(_BYTE *)(a2 + 65) = v16 | 0x17;
  v17 = (float)v10 - _mm_cvtepi32_ps(v15).m128_f32[0];
  if ( v14 != 0.0 || v17 != 0.0 )
  {
    CMILMatrix::Translate((CMILMatrix *)a2, v14, v17);
    v9 = 1;
  }
  if ( a3 )
  {
    v18 = (float)v6 - (float)*(int *)(a1 - 96);
    *a3 = v18;
    v19 = (float)v11 - (float)*(int *)(a1 - 92);
    a3[1] = v19;
    a3[2] = (float)(int)(v12 - v6) + v18;
    a3[3] = (float)(int)(v13 - v11) + v19;
  }
  return v9;
}
