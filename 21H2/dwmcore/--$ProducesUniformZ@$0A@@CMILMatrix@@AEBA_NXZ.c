/*
 * XREFs of ??$ProducesUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D059C
 * Callers:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180260228 (--$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::ProducesUniformZ<0>(__int64 a1)
{
  char result; // al

  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) != 1.0 )
    return 0;
  *(_BYTE *)(a1 + 65) &= ~0x20u;
  *(_BYTE *)(a1 + 65) |= 0x10u;
  if ( *(float *)(a1 + 8) != 0.0 || *(float *)(a1 + 24) != 0.0 )
    return 0;
  *(_BYTE *)(a1 + 64) &= ~8u;
  result = 1;
  *(_BYTE *)(a1 + 64) |= 4u;
  return result;
}
