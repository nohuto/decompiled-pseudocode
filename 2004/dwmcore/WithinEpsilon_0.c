/*
 * XREFs of WithinEpsilon_0 @ 0x1800C3CFC
 * Callers:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800C3B98 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800C3C3C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18021CB48 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18021D16C (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021D3C8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x18021D578 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WithinEpsilon_0(float a1, float a2)
{
  float v2; // xmm0_4

  v2 = a1 - a2;
  return v2 >= -0.00000011920929 && v2 <= 0.00000011920929;
}
