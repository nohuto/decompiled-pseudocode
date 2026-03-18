/*
 * XREFs of HalpIsLmceSupported @ 0x1403AAC80
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140A53828 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 */

bool HalpIsLmceSupported()
{
  unsigned __int64 v0; // rax
  bool result; // al
  unsigned __int64 v2; // rax

  result = 0;
  if ( (unsigned __int8)HalpGetCpuVendor() == 2 )
  {
    v0 = __readmsr(0x179u);
    if ( (v0 & 0x8000000) != 0 )
    {
      v2 = __readmsr(0x3Au);
      if ( (v2 & 0x100001) == 0x100001 )
        return 1;
    }
  }
  return result;
}
