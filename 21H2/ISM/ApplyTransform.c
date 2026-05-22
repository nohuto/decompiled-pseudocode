/*
 * XREFs of ApplyTransform @ 0x1800DF9B4
 * Callers:
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800DEC2C (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpati.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800C6EB8 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800DA864 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ApplyTransform(__int64 a1, __int64 a2, double a3, double a4)
{
  __int128 v4; // xmm1
  double v5; // xmm0_8
  unsigned __int64 *v6; // rdx
  __m128 v7; // xmm7
  double v8; // xmm0_8
  __int64 v9; // r8
  __int128 v10; // xmm5
  __int128 v11; // xmm4
  __m128 v12; // xmm5
  __m128 v13; // xmm0
  __int64 v14; // rcx
  __int64 result; // rax
  __m128 v16; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+30h] [rbp-C8h]
  __int128 v18; // [rsp+40h] [rbp-B8h]
  __m128 v19; // [rsp+50h] [rbp-A8h]

  *(_QWORD *)&v5 = DirectX::XMMatrixRotationQuaternion(*(double *)(a2 + 12)).m128_u64[0];
  v7 = _mm_movelh_ps((__m128)*v6, (__m128)*((unsigned int *)v6 + 2));
  v16 = (__m128)DirectX::g_XMIdentityR0;
  v17 = DirectX::g_XMIdentityR1;
  v19 = _mm_or_ps(_mm_and_ps(v7, DirectX::g_XMMask3), _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
  v18 = DirectX::g_XMIdentityR2;
  *(_QWORD *)&v8 = DirectX::XMMatrixMultiply(v5, &v16).m128_u64[0];
  v10 = *(_OWORD *)(v9 + 16);
  v16 = *(__m128 *)v9;
  v11 = *(_OWORD *)(v9 + 32);
  v17 = v10;
  v12 = *(__m128 *)(v9 + 48);
  v18 = v11;
  v19 = v12;
  v13 = DirectX::XMMatrixMultiply(v8, &v16);
  *(__m128 *)v14 = v13;
  result = v14;
  *(_OWORD *)(v14 + 16) = v4;
  *(_OWORD *)(v14 + 32) = *(_OWORD *)&a3;
  *(_OWORD *)(v14 + 48) = *(_OWORD *)&a4;
  return result;
}
