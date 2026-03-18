/*
 * XREFs of ?ScaleValueWithSubpixel@@YGXPAJPAMM@Z @ 0x150074
 * Callers:
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     _ScaleDpiOffsetWithSubpixel@16 @ 0x151870 (_ScaleDpiOffsetWithSubpixel@16.c)
 *     _ScaleDpiValueWithSubpixel@16 @ 0x151932 (_ScaleDpiValueWithSubpixel@16.c)
 * Callees:
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 */

void __userpurge ScaleValueWithSubpixel(float *a1@<edx>, int *a2@<ecx>, int *a3, float *a4, float a5)
{
  double v5; // st7
  double v6; // st7
  int v7; // eax
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]
  float v10; // [esp+18h] [ebp+8h]
  float v11; // [esp+18h] [ebp+8h]

  if ( a1 )
    v5 = *a1;
  else
    v5 = 0.0;
  v9 = v5;
  v8 = (float)*a2;
  v10 = v8 * *(float *)&a3 + v9;
  v6 = v10;
  v7 = (int)(v10 + 0.5);
  if ( a1 )
  {
    v11 = (float)v7;
    *a1 = v6 - v11;
  }
  *a2 = v7;
}
