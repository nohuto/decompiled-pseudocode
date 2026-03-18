/*
 * XREFs of InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x180256B48
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18001BC8C (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802575B8 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x18026F358 (-Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x18026F468 (-Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 */

__int64 __fastcall InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a_(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        struct _D3DCOLORVALUE *a3)
{
  struct _D3DCOLORVALUE *v6; // rax
  struct _D3DCOLORVALUE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i v10; // xmm0
  struct _D3DCOLORVALUE v12; // [rsp+38h] [rbp-59h] BYREF
  _OWORD v13[4]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v14; // [rsp+88h] [rbp-9h] BYREF
  int v15; // [rsp+90h] [rbp-1h]
  char v16; // [rsp+94h] [rbp+3h]
  _OWORD v17[4]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v18; // [rsp+D8h] [rbp+47h] BYREF
  int v19; // [rsp+E0h] [rbp+4Fh]
  char v20; // [rsp+E4h] [rbp+53h]

  memset_0(v17, 0, sizeof(v17));
  v18 = 0LL;
  memset_0(v13, 0, sizeof(v13));
  v14 = 0LL;
  v6 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v12, a1);
  v20 = 1;
  v19 = 70;
  v17[0] = *(struct _D3DCOLORVALUE *)&v6->r;
  v7 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v12, a2);
  v15 = 70;
  v16 = 1;
  v13[0] = *(struct _D3DCOLORVALUE *)&v7->r;
  KeyframeInterpolation::InterpolateHsl(v9, v8, v17, v13, a3);
  v10 = _mm_loadu_si128((const __m128i *)Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB(&v12, a3));
  LODWORD(a3[4].b) = 70;
  LOBYTE(a3[4].a) = 1;
  *(__m128i *)&a3->r = v10;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v14);
  return Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
}
