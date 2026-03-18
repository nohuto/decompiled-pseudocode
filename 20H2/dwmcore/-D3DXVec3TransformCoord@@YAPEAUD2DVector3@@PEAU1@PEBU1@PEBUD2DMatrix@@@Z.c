/*
 * XREFs of ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021B568
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801D69BC (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x180226ADC (--$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFla.c)
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180226DD8 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18022A308 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18022BD20 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18022C9DC (_anonymous_namespace_--TransformAndNormalize.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x1800C397C (WithinEpsilon_0.c)
 */

struct D2DVector3 *__fastcall D3DXVec3TransformCoord(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  float v3; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float *v8; // rcx
  float v9; // xmm5_4

  v3 = *((float *)a2 + 1);
  v4 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(v3 * *((float *)a3 + 5)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 9)))
     + *((float *)a3 + 13);
  v5 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(v3 * *((float *)a3 + 6)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 10)))
     + *((float *)a3 + 14);
  v6 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 3)) + (float)(v3 * *((float *)a3 + 7)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 11)))
     + *((float *)a3 + 15);
  v7 = (float)((float)((float)(v3 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 8)))
     + *((float *)a3 + 12);
  *(float *)a1 = v7;
  *((float *)a1 + 1) = v4;
  *((float *)a1 + 2) = v5;
  if ( !WithinEpsilon_0(v6, 1.0) )
  {
    *v8 = (float)(1.0 / v6) * v7;
    v8[1] = (float)(1.0 / v6) * v9;
    v8[2] = (float)(1.0 / v6) * v5;
  }
  return (struct D2DVector3 *)v8;
}
