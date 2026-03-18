/*
 * XREFs of ??$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180260278
 * Callers:
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x1802ABA58 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     ??$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18009BBA4 (--$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CMILMatrix::IsTranslateAndScaleIgnoreZ<0>(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // r9

  if ( !CMILMatrix::IsAffine<0>(a1, 1) || *(float *)(v1 + 4) != 0.0 || *(float *)(v1 + 16) != 0.0 )
    return 0;
  *(_BYTE *)(v1 + 64) &= 0x3Fu;
  *(_BYTE *)(v1 + 64) |= 0x40u;
  return v2;
}
