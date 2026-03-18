/*
 * XREFs of HalpProcIsSmtDisabled @ 0x140A69494
 * Callers:
 *     HalpMiscGetParameters @ 0x140A69208 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x14039DA50 (HalpGetCpuInfo.c)
 *     HalpIsPartitionCpuManager @ 0x1403A4BA4 (HalpIsPartitionCpuManager.c)
 *     strstr @ 0x1403CD440 (strstr.c)
 */

bool __fastcall HalpProcIsSmtDisabled(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  const char *v4; // rcx
  __int64 v5; // rcx
  unsigned __int8 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v7 = 0;
  if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v7) && v7 == 2 )
  {
    if ( !a1 )
      return v2;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3460LL) & 0x2000) != 0 && !HalpIsPartitionCpuManager(v3) )
      return 1;
  }
  if ( a1 )
  {
    v4 = *(const char **)(a1 + 216);
    if ( v4 )
    {
      if ( strstr(v4, "SMT=BLOCKED") )
        return HalpIsPartitionCpuManager(v5) == 0;
    }
  }
  return v2;
}
