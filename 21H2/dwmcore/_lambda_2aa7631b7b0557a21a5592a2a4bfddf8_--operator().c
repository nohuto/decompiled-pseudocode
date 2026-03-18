/*
 * XREFs of _lambda_2aa7631b7b0557a21a5592a2a4bfddf8_::operator() @ 0x1800D63C4
 * Callers:
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800AC488 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

float __fastcall lambda_2aa7631b7b0557a21a5592a2a4bfddf8_::operator()(__int64 a1, float *a2)
{
  float v2; // xmm0_4
  int *v3; // rcx
  __int64 v4; // rax
  int v6; // [rsp+0h] [rbp-28h] BYREF
  _DWORD v7[3]; // [rsp+4h] [rbp-24h] BYREF

  v6 = 0;
  *(float *)v7 = FLOAT_0_5;
  v2 = *a2;
  *(float *)&v7[1] = FLOAT_0_70710677;
  v3 = &v6;
  if ( v2 != 0.0 )
    v3 = v7;
  v4 = a2[1] != 0.0;
  return *(float *)&v3[v4];
}
