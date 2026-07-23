/*
 * XREFs of HalpIsLmceSupported @ 0x1403A0E98
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x14099AE48 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 */

bool HalpIsLmceSupported()
{
  char CpuInfo; // al
  unsigned __int64 v1; // rax
  bool result; // al
  unsigned __int64 v3; // rax
  unsigned __int8 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v4);
  result = 0;
  if ( (v4 & (unsigned __int8)-(CpuInfo != 0)) == 2 )
  {
    v1 = __readmsr(0x179u);
    if ( (v1 & 0x8000000) != 0 )
    {
      v3 = __readmsr(0x3Au);
      if ( (v3 & 0x100001) == 0x100001 )
        return 1;
    }
  }
  return result;
}
