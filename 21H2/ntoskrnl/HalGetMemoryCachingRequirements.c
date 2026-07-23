/*
 * XREFs of HalGetMemoryCachingRequirements @ 0x1403A4920
 * Callers:
 *     PopGetHwConfigurationSignature @ 0x140997EE4 (PopGetHwConfigurationSignature.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6A67C (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalGetMemoryCachingRequirements(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  unsigned int v5; // r11d
  __int64 i; // r10
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx

  v3 = 0;
  if ( a3 )
  {
    v5 = HalpCachingRequirementsEntryCount;
    *a3 = 0;
    if ( !v5 )
      return 3221225473LL;
    for ( i = HalpCachingRequirements; ; i += 24LL )
    {
      v7 = *(_QWORD *)i << 12;
      if ( a1 >= v7 )
      {
        v8 = v7 + (*(_QWORD *)(i + 8) << 12);
        if ( a1 + a2 <= v8 )
        {
          *a3 = *(_DWORD *)(i + 16);
          return 0LL;
        }
        if ( a1 < v8 )
          return 3221225485LL;
      }
      if ( ++v3 >= v5 )
        return 3221225473LL;
    }
  }
  return 3221225485LL;
}
