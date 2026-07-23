/*
 * XREFs of _RtlpHpInitializePerfPolicies@0 @ 0x4B3584BA
 * Callers:
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 * Callees:
 *     _RtlpQueryPhysicalMemoryPolicy@4 @ 0x4B2AFE9D (_RtlpQueryPhysicalMemoryPolicy@4.c)
 *     _RtlGetNtProductType@4 @ 0x4B2B05F0 (_RtlGetNtProductType@4.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 */

int __stdcall RtlpHpInitializePerfPolicies()
{
  BOOLEAN v0; // bl
  int result; // eax
  int v2; // [esp+8h] [ebp-8h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [esp+Ch] [ebp-4h] BYREF

  RtlpHpLfhPerfFlags |= 0x9Cu;
  v0 = RtlGetNtProductType(&NtProductType);
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, (PRTL_RUN_ONCE_INIT_FN)RtlpTestHookInitialize, 0, 0);
  result = RtlpQueryPhysicalMemoryPolicy(&v2);
  if ( v0 && NtProductType != NtProductWinNt || result >= 0 && v2 > 10 )
  {
    RtlpHpLfhPerfFlags |= 0x63u;
    RtlpHpGCInterval.QuadPart = -10000000LL;
  }
  return result;
}
