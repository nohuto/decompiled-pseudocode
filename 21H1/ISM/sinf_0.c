/*
 * XREFs of sinf_0 @ 0x18004AC3F
 * Callers:
 *     ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x180086774 (-Slerp@MPCMath@@YA-AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x180086D04 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x1801A5BE0 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sinf_0(float X)
{
  return sinf(X);
}
