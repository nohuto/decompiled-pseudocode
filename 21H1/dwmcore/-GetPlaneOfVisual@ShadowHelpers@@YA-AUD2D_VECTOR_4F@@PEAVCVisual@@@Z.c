/*
 * XREFs of ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x180009AE0
 * Callers:
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x180009080 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 * Callees:
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180009BB4 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800B4D78 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

struct D2D_VECTOR_4F *__fastcall ShadowHelpers::GetPlaneOfVisual(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        struct CVisual *a3)
{
  FLOAT v4; // xmm3_4
  FLOAT v5; // xmm1_4
  struct D2D_VECTOR_4F v6; // xmm0
  struct D2D_VECTOR_4F *result; // rax
  const struct D2D_VECTOR_4F *v8; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v9[16]; // [rsp+28h] [rbp-48h] BYREF
  struct D2D_VECTOR_4F v10; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_VECTOR_4F v11; // [rsp+48h] [rbp-28h] BYREF
  struct D2D_VECTOR_4F v12; // [rsp+58h] [rbp-18h] BYREF

  CVisual::GetEffectiveSize((CVisual *)retstr, (float *)&v8, (float *)&v8 + 1);
  v4 = *(float *)&v8;
  if ( *(float *)&v8 == 0.0 )
    v4 = *(float *)&FLOAT_1_0;
  v5 = *((float *)&v8 + 1);
  if ( *((float *)&v8 + 1) == 0.0 )
    v5 = *(float *)&FLOAT_1_0;
  v11.x = 0.0;
  v11.z = 0.0;
  v12.z = 0.0;
  v10 = (struct D2D_VECTOR_4F)_xmm;
  v11.w = 1.0;
  v11.y = v5;
  v12.x = v4;
  v12.y = v5;
  v12.w = 1.0;
  v6 = *D2DVectorHelper::CalculatePlane((D2DVectorHelper *)v9, &v10, &v11, &v12, v8);
  result = this;
  *this = v6;
  return result;
}
