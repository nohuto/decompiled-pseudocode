/*
 * XREFs of ?GetTransform@CGDISubSectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180263254
 * Callers:
 *     ?GetTransform@CGDISubSectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F89A0 (-GetTransform@CGDISubSectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180041F4C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

char __fastcall CGDISubSectionBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  int v3; // r14d
  bool v4; // zf
  int v6; // r11d
  __int64 v7; // rdx
  int v8; // ecx
  char v10; // si
  int v11; // ebp
  int v12; // r10d
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  float v15; // xmm1_4
  __m128i v16; // xmm0
  float v17; // xmm2_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  __int128 v21; // [rsp+20h] [rbp-48h]

  v3 = *(_DWORD *)(a1 - 96);
  v4 = v3 == *(_DWORD *)(a1 - 80);
  v21 = *(_OWORD *)(a1 - 96);
  v6 = v21;
  v7 = a1;
  v8 = *(_DWORD *)(a1 - 112);
  v10 = 0;
  if ( v4 )
    v6 = v8 + v21;
  v11 = *(_DWORD *)(v7 - 92);
  v12 = DWORD1(v21);
  if ( v11 == *(_DWORD *)(v7 - 76) )
    v12 = *(_DWORD *)(v7 - 104) + DWORD1(v21);
  v13 = DWORD2(v21);
  if ( *(_DWORD *)(v7 - 88) == *(_DWORD *)(v7 - 72) )
    v13 = DWORD2(v21) - *(_DWORD *)(v7 - 108);
  v14 = HIDWORD(v21);
  if ( *(_DWORD *)(v7 - 84) == *(_DWORD *)(v7 - 68) )
    v14 = HIDWORD(v21) - *(_DWORD *)(v7 - 100);
  if ( v13 < v6 )
    v13 = v6;
  if ( v14 < v12 )
    v14 = v12;
  v15 = (float)v3 - (float)v8;
  v16 = _mm_cvtsi32_si128(*(_DWORD *)(v7 - 104));
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
  *(_WORD *)(a2 + 64) = 32085;
  v17 = (float)v11 - _mm_cvtepi32_ps(v16).m128_f32[0];
  if ( v15 != 0.0 || v17 != 0.0 )
  {
    CMILMatrix::Translate((CMILMatrix *)a2, v15, v17);
    v10 = 1;
  }
  if ( a3 )
  {
    v18 = (float)v6 - (float)*(int *)(v7 - 96);
    *a3 = v18;
    v19 = (float)v12 - (float)*(int *)(v7 - 92);
    a3[1] = v19;
    a3[2] = (float)(int)(v13 - v6) + v18;
    a3[3] = (float)(int)(v14 - v12) + v19;
  }
  return v10;
}
