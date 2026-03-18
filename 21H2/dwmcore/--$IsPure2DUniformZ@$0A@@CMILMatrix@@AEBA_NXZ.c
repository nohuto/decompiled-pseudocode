/*
 * XREFs of ??$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180260228
 * Callers:
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x1802ABA58 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     ??$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18009BBA4 (--$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$ProducesUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D059C (--$ProducesUniformZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

bool __fastcall CMILMatrix::IsPure2DUniformZ<0>(__int64 a1)
{
  char v1; // al
  __int64 v2; // rcx
  char v3; // dl

  v1 = CMILMatrix::IsAffine<0>(a1, 0);
  v3 = 0;
  if ( v1 && *(float *)(v2 + 32) == 0.0 && *(float *)(v2 + 36) == 0.0 )
  {
    *(_BYTE *)(v2 + 65) &= ~8u;
    *(_BYTE *)(v2 + 65) |= 4u;
    return CMILMatrix::ProducesUniformZ<0>(v2) != 0;
  }
  return v3;
}
