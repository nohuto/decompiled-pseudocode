/*
 * XREFs of ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x18000E6F8
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000ADA8 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x18000BD64 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x18000E630 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall CProjectedShadow::GetBlurForBoundary(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  double result; // xmm0_8

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          *(_QWORD *)&result = *(unsigned int *)(a1 + 384);
          *(float *)&result = *(float *)&result * 3.0;
        }
        else
        {
          return 0.0;
        }
      }
      else
      {
        *(_QWORD *)&result = *(unsigned int *)(a1 + 384);
        *(float *)&result = *(float *)&result + *(float *)&result;
      }
    }
    else
    {
      *(_QWORD *)&result = *(unsigned int *)(a1 + 384);
    }
  }
  else
  {
    *(_QWORD *)&result = *(unsigned int *)(a1 + 384);
    *(float *)&result = *(float *)&result * 0.5;
  }
  return result;
}
