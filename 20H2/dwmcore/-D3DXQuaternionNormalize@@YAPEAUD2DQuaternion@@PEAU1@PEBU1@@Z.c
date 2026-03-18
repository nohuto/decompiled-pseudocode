/*
 * XREFs of ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800C38BC
 * Callers:
 *     EncodeTBNFrameToQuaternion @ 0x180022AA8 (EncodeTBNFrameToQuaternion.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800255B8 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3780 (-SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x1801FD9D8 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022A7BC (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x1800C397C (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1800EE99B (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionNormalize(struct D2DQuaternion *a1, const struct D2DQuaternion *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm2_4
  struct D2DQuaternion *v8; // rdx
  float v10; // xmm6_4

  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 3);
  v6 = *(float *)a2;
  v7 = (float)((float)((float)(v6 * v6) + (float)(v3 * v3)) + (float)(v4 * v4)) + (float)(v5 * v5);
  if ( (unsigned int)WithinEpsilon_0() )
  {
    if ( a1 != v8 )
      *(_OWORD *)a1 = *(_OWORD *)v8;
  }
  else if ( v7 <= 1.1754944e-38 )
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  else
  {
    v10 = 1.0 / sqrtf_0(v7);
    *(float *)a1 = v6 * v10;
    *((float *)a1 + 1) = v3 * v10;
    *((float *)a1 + 2) = v4 * v10;
    *((float *)a1 + 3) = v5 * v10;
  }
  return a1;
}
