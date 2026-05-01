/*
 * XREFs of ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18036CB58
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18036CD28 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x180479D58 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18047A094 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

__int128 *__fastcall KeyboardHosting::ViewRectHelper::GetRelativePosition(
        __int128 *a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  __m128 v5; // xmm2
  int v9; // edi
  float v10; // xmm1_4
  __int128 *v12; // rax
  const struct tagRECT *v13; // r9
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r8d
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  __int128 v24; // xmm0
  __int128 *result; // rax
  __int128 v26; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v27; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-10h] BYREF

  v5 = (__m128)_mm_loadu_si128((const __m128i *)a3);
  *(_QWORD *)&v26 = a5;
  v9 = a2[5];
  v10 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v27.left = (int)v5.m128_f32[0];
  v27.right = (int)(float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] + v5.m128_f32[0]);
  v27.bottom = (int)(float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] + v10);
  *a1 = 0LL;
  v27.top = (int)v10;
  v12 = (__int128 *)Windows::UI::Immersive::QueryRelativePosition(v28, &v27, &v26);
  v14 = DWORD1(v26);
  *a1 = *v12;
  if ( v9 == 1 )
  {
    if ( *((_DWORD *)a1 + 1) < a4[3] )
      goto LABEL_14;
    v17 = (int)*(float *)(a3 + 4);
    v15 = a4[1];
    if ( v17 > v15 || v17 - v15 < v14 )
      goto LABEL_14;
    *((_DWORD *)a1 + 1) = v17;
    *((_DWORD *)a1 + 3) = v17 + v14;
  }
  else
  {
    v15 = a4[1];
    if ( *((_DWORD *)a1 + 3) > v15 )
      goto LABEL_11;
    v16 = (int)(float)(*(float *)(a3 + 12) + *(float *)(a3 + 4));
    if ( v16 < a4[3] || v16 - a4[3] < v14 )
      goto LABEL_11;
    *((_DWORD *)a1 + 3) = v16;
    *((_DWORD *)a1 + 1) = v16 - v14;
  }
  if ( v9 == 1 )
  {
LABEL_14:
    v19 = *a4 + a2[3];
    v20 = v19 + v26;
    *(_DWORD *)a1 = v19;
    *((_DWORD *)a1 + 2) = v20;
    goto LABEL_15;
  }
LABEL_11:
  if ( v9 == 2 )
    goto LABEL_14;
  if ( ((v9 - 4) & 0xFFFFFFFB) == 0 )
  {
    v18 = a2[4] + v15;
    *((_DWORD *)a1 + 1) = v18;
    *((_DWORD *)a1 + 3) = v18 + v14;
  }
LABEL_15:
  v21 = (int)*(float *)(a3 + 8);
  v22 = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  v23 = (int)*(float *)(a3 + 12);
  v26 = *a1;
  if ( v22 > v21 )
    DWORD2(v26) = v26 + v21;
  if ( *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1) > v23 )
    HIDWORD(v26) = v23 + DWORD1(v26);
  *a1 = v26;
  v24 = (__int128)*Windows::UI::Immersive::ShiftRectIntoContainer(
                     (Windows::UI::Immersive *)v28,
                     &v27,
                     (const struct Windows::UI::Immersive::CConstraint *)a1,
                     v13);
  result = a1;
  *a1 = v24;
  return result;
}
