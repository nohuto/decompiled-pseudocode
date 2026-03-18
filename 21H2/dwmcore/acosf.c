/*
 * XREFs of acosf @ 0x180101880
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18018CBA8 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x180231338 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 *     ?Acos@CExpressionValueStack@@QEAAJXZ @ 0x180249B38 (-Acos@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x18026F1E0 (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl acosf(float X)
{
  return __imp_acosf(X);
}
