/*
 * XREFs of ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800D5E40
 * Callers:
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800DA28C (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801931C8 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800DA494 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 */

_OWORD *__fastcall Windows::Foundation::Numerics::operator*(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD *v10; // rcx
  _OWORD *result; // rax
  _OWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3[1];
  v4 = a2[2];
  v5 = a2[3];
  v12[0] = *a3;
  v6 = a3[2];
  v12[1] = v3;
  v7 = a3[3];
  v12[2] = v6;
  v8 = *a2;
  v12[3] = v7;
  v9 = a2[1];
  *(double *)&v8 = DirectX::XMMatrixMultiply(a1, v12);
  *v10 = v8;
  result = v10;
  v10[1] = v9;
  v10[2] = v4;
  v10[3] = v5;
  return result;
}
