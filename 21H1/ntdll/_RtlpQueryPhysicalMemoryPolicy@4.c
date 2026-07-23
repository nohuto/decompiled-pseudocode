/*
 * XREFs of _RtlpQueryPhysicalMemoryPolicy@4 @ 0x4B2AFE9D
 * Callers:
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 *     _RtlQueryResourcePolicy@16 @ 0x4B2AFE50 (_RtlQueryResourcePolicy@16.c)
 *     _RtlpHpInitializePerfPolicies@0 @ 0x4B3584BA (_RtlpHpInitializePerfPolicies@0.c)
 *     _RtlpHpLfhContextInitialize@28 @ 0x4B3765A7 (_RtlpHpLfhContextInitialize@28.c)
 * Callees:
 *     _RtlGetNtProductType@4 @ 0x4B2B05F0 (_RtlGetNtProductType@4.c)
 */

int __thiscall RtlpQueryPhysicalMemoryPolicy(int *this)
{
  int v2; // eax
  _NT_PRODUCT_TYPE NtProductType; // [esp+4h] [ebp-4h] BYREF

  if ( (_BYTE)RtlpUserPolicies )
  {
    v2 = (unsigned __int8)RtlpUserPolicies;
  }
  else if ( RtlGetNtProductType(&NtProductType) && NtProductType == NtProductWinNt )
  {
    v2 = MEMORY[0x7FFE02E8] > 0x51400u ? 20 : 10;
  }
  else
  {
    v2 = 20;
  }
  *this = v2;
  return 0;
}
