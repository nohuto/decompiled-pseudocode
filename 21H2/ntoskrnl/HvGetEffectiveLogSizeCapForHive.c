/*
 * XREFs of HvGetEffectiveLogSizeCapForHive @ 0x140689BB8
 * Callers:
 *     CmpGenerateFlushControlData @ 0x1406890A0 (CmpGenerateFlushControlData.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140689B38 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpAdjustRequestedFileSize @ 0x14068EF5C (CmpAdjustRequestedFileSize.c)
 *     CmpDoReconcileNextHive @ 0x1406D6E10 (CmpDoReconcileNextHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1406D6F24 (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvSwapLogFiles @ 0x1406DFF64 (HvSwapLogFiles.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406E9C5C (HvTruncateAllLogFilesIfRequired.c)
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

  if ( (a1[1028] & 0x800) != 0 )
    return 0x2000000LL;
  v1 = a1[70];
  v2 = a1[47];
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
