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
  char NtProductType; // bl
  int result; // eax
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h] BYREF

  RtlpHpLfhPerfFlags |= 0x9Cu;
  NtProductType = RtlGetNtProductType(&v3);
  RtlRunOnceExecuteOnce((int)&RtlpTestHookInit, RtlpTestHookInitialize, 0, 0);
  result = RtlpQueryPhysicalMemoryPolicy(&v2);
  if ( NtProductType && v3 != 1 || result >= 0 && v2 > 10 )
  {
    RtlpHpLfhPerfFlags |= 0x63u;
    dword_4B3A47FC = -1;
    RtlpHpGCInterval = -10000000;
  }
  return result;
}
