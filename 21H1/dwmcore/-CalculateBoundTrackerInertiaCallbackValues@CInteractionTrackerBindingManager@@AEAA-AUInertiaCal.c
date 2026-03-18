/*
 * XREFs of ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D2E94
 * Callers:
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801D4134 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801CBF78 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801CC1A4 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CD430 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1801CDAC0 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(
        __int64 a1,
        __int64 a2,
        CInteractionTracker *a3,
        _DWORD *a4,
        char a5)
{
  CInteractionTracker *v8; // rcx
  __int64 v9; // r8
  __m128 *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __m128 v13; // xmm6
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  float v17; // xmm10_4
  __m128 v18; // xmm7
  float v19; // xmm1_4
  int v20; // xmm0_4
  int v21; // xmm0_4
  float v22; // xmm9_4
  float v23; // xmm10_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  float v26; // xmm1_4
  __int64 result; // rax
  __m128 v28; // [rsp+28h] [rbp-A1h]
  unsigned __int64 v29; // [rsp+58h] [rbp-71h]
  _OWORD v30[3]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v31; // [rsp+90h] [rbp-39h]

  if ( CInteractionTracker::AreInteractionAnimationsAlive(a3) || CInteractionTracker::HasDefaultAnimations(v8) )
  {
    v10 = (__m128 *)CInteractionTracker::CalculateInertiaCallbackValues((__int64)a3, (__int64)v30);
  }
  else
  {
    v10 = (__m128 *)v30;
    v11 = *(_OWORD *)(v9 + 588);
    v30[0] = *(_OWORD *)(v9 + 572);
    v12 = *(_OWORD *)(v9 + 604);
    v30[1] = v11;
    *(_QWORD *)&v11 = *(_QWORD *)(v9 + 620);
    v30[2] = v12;
    v31 = v11;
  }
  v18 = v10[2];
  v13 = v10[1];
  v28 = *v10;
  v29 = v10[3].m128_u64[0];
  v14 = v13.m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 0);
  v15 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 1);
  v16 = _mm_shuffle_ps(v13, v13, 255).m128_f32[0] / CInteractionTracker::GetCurrentValue((__int64)a3, 2);
  v17 = v18.m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 0);
  v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 85).m128_f32[0] - CInteractionTracker::GetCurrentValue((__int64)a3, 1);
  v19 = *(float *)&v29 / CInteractionTracker::GetCurrentValue((__int64)a3, 2);
  v20 = a4[19];
  *(_DWORD *)(a2 + 16) = a4[18];
  *(_DWORD *)(a2 + 20) = v20;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = a4[32];
  v21 = a4[19];
  *(_DWORD *)(a2 + 32) = a4[18];
  *(_DWORD *)(a2 + 36) = v21;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 48) = a4[32];
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (a5 & 1) != 0 )
  {
    v22 = v14 + *(float *)(a2 + 16);
    v23 = v17 + *(float *)(a2 + 32);
    *(_DWORD *)a2 = v28.m128_i32[0];
    *(float *)(a2 + 16) = v22;
    *(float *)(a2 + 32) = v23;
  }
  else if ( (a5 & 2) == 0 )
  {
    goto LABEL_11;
  }
  if ( (a5 & 2) != 0 )
  {
    v24 = v15 + *(float *)(a2 + 20);
    v25 = v18.m128_f32[0] + *(float *)(a2 + 36);
    *(_DWORD *)(a2 + 4) = v28.m128_i32[1];
    *(float *)(a2 + 20) = v24;
    *(float *)(a2 + 36) = v25;
  }
LABEL_11:
  if ( (a5 & 4) != 0 )
  {
    v26 = v19 * *(float *)(a2 + 48);
    *(float *)(a2 + 28) = v16 * *(float *)(a2 + 28);
    *(float *)(a2 + 48) = v26;
    *(_DWORD *)(a2 + 12) = v28.m128_i32[3];
  }
  result = a2;
  *(_BYTE *)(a2 + 44) = v18.m128_i8[12];
  *(_WORD *)(a2 + 52) = WORD2(v29);
  *(_BYTE *)(a2 + 54) = 1;
  return result;
}
