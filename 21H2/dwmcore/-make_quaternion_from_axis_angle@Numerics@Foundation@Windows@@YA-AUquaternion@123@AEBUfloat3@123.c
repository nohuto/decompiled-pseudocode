/*
 * XREFs of ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x180230F5C
 * Callers:
 *     ?CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z @ 0x18022E6D4 (-CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z.c)
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x180231338 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 * Callees:
 *     cosf @ 0x1801018C8 (cosf.c)
 *     _o_sinf_0 @ 0x180101964 (_o_sinf_0.c)
 */

float *__fastcall Windows::Foundation::Numerics::make_quaternion_from_axis_angle(float *a1, float *a2, float a3)
{
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float *result; // rax

  v5 = a3 * 0.5;
  v6 = o_sinf_0(a3 * 0.5);
  v7 = v6 * *a2;
  v8 = v6 * a2[1];
  a1[2] = v6 * a2[2];
  *a1 = v7;
  a1[1] = v8;
  v9 = cosf(v5);
  result = a1;
  a1[3] = v9;
  return result;
}
