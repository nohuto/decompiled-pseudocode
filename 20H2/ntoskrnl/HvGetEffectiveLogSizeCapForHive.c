/*
 * XREFs of HvGetEffectiveLogSizeCapForHive @ 0x1405DC88C
 * Callers:
 *     CmpAdjustRequestedFileSize @ 0x1405D7FA8 (CmpAdjustRequestedFileSize.c)
 *     CmpGenerateFlushControlData @ 0x1405DC3D0 (CmpGenerateFlushControlData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1405DC684 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpDoReconcileNextHive @ 0x1406D5040 (CmpDoReconcileNextHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1406D5154 (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvSwapLogFiles @ 0x1406D9C2C (HvSwapLogFiles.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406E1144 (HvTruncateAllLogFilesIfRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvGetEffectiveLogSizeCapForHive(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // r9
  int v3; // ecx
  unsigned __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 result; // rax

  if ( (a1[1038] & 0x800) != 0 )
    return 0x2000000LL;
  v1 = a1[68];
  v2 = a1[46];
  v3 = 0x2000;
  if ( v1 < 0x2000 )
    v3 = v1;
  v4 = (unsigned int)(8 * v3);
  v5 = v1 - v3;
  if ( v5 )
    v4 += (unsigned __int64)v5 >> 2;
  if ( v4 >= v2 )
    LODWORD(v4) = v2;
  result = (unsigned int)v4;
  if ( (unsigned int)CmpLogFileSizeCap >= 0x80000 && CmpLogFileSizeCap < (unsigned int)v4 )
    result = (unsigned int)CmpLogFileSizeCap;
  if ( (unsigned int)result < 0x8000 )
    return 0x8000LL;
  return result;
}
