/*
 * XREFs of ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800ACA80
 * Callers:
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x1800555A8 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

bool __fastcall CMILMatrix::Is2DAffine<1>(__int64 a1, char a2)
{
  bool v2; // bl
  char v4; // al
  bool result; // al

  v2 = 0;
  if ( a2 )
    return CMILMatrix::IsAffine<1>(a1, a2);
  v4 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v4 )
    return v4 == 1;
  if ( CMILMatrix::IsAffine<1>(a1, 0)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) < 0.000081380211 )
  {
    v2 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) < 0.000081380211;
  }
  *(_BYTE *)(a1 + 65) &= 0xF3u;
  result = v2;
  *(_BYTE *)(a1 + 65) |= (-4 - 8 * v2) & 0xC;
  return result;
}
