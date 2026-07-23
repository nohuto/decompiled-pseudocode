/*
 * XREFs of _RtlpQueryDiskSpeedPolicy@4 @ 0x4B389DA1
 * Callers:
 *     _RtlQueryResourcePolicy@16 @ 0x4B2AFE50 (_RtlQueryResourcePolicy@16.c)
 * Callees:
 *     _RtlGetSuiteMask@0 @ 0x4B2B0630 (_RtlGetSuiteMask@0.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 */

int __thiscall RtlpQueryDiskSpeedPolicy(int *this)
{
  int v2; // eax

  if ( BYTE1(RtlpUserPolicies) )
  {
    v2 = BYTE1(RtlpUserPolicies);
LABEL_6:
    *this = v2;
    return 0;
  }
  if ( (RtlGetSuiteMask() & 0x10000) == 0 )
  {
    RtlRunOnceExecuteOnce(&RtlpDiskSpeedInit, (PRTL_RUN_ONCE_INIT_FN)RtlpDiskSpeedInitialize, 0, 0);
    v2 = RtlpDiskSpeedPolicy;
    goto LABEL_6;
  }
  *this = 20;
  return 0;
}
