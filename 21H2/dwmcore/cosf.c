/*
 * XREFs of cosf @ 0x1801018C8
 * Callers:
 *     ?Cos@CExpressionValueStack@@QEAAJXZ @ 0x180072B58 (-Cos@CExpressionValueStack@@QEAAJXZ.c)
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18020F720 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x180230F5C (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x180231338 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 *     ?GetRandomPoint@CEllipseSpawner@EmitterShapes@@UEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@M@Z @ 0x1802597D0 (-GetRandomPoint@CEllipseSpawner@EmitterShapes@@UEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$.c)
 *     ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z @ 0x1802615C0 (-make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@M@Z.c)
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x1802618C4 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 *     ?D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18026D538 (-D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18026D7D0 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18026D850 (-D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18026D918 (-D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18026D99C (-D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18026DA68 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18026DAE8 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18026E070 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18026E0F4 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return _o_cosf(X);
}
