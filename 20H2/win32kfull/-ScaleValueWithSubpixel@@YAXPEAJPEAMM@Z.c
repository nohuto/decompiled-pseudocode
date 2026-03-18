/*
 * XREFs of ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C01E3B60
 * Callers:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F9BFC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F9C40 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01E56DC (ScaleDpiOffsetWithSubpixel.c)
 *     ScaleDpiValueWithSubpixel @ 0x1C01E575C (ScaleDpiValueWithSubpixel.c)
 * Callees:
 *     <none>
 */

void __fastcall ScaleValueWithSubpixel(int *a1, float *a2, float a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  int v5; // eax

  if ( a2 )
    v3 = *a2;
  else
    v3 = 0.0;
  v4 = (float)((float)*a1 * a3) + v3;
  v5 = (int)(float)(v4 + 0.5);
  if ( a2 )
    *a2 = v4 - (float)v5;
  *a1 = v5;
}
