/*
 * XREFs of HvApplyLogFile @ 0x140881384
 * Callers:
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpApplyIncrementalLogFile @ 0x140881478 (HvpApplyIncrementalLogFile.c)
 *     HvpApplyLegacyLogFile @ 0x1408816AC (HvpApplyLegacyLogFile.c)
 */

__int64 __fastcall HvApplyLogFile(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12)
{
  int v13; // r8d

  if ( *(_BYTE *)(a2 + 20) )
  {
    v13 = HvpApplyLegacyLogFile(a1, a2, a4, a4, a6, a7, a8, a9);
    if ( v13 >= 0 )
    {
      if ( a10 )
        *a10 = *(_DWORD *)(a2 + 12) + 1;
      if ( a11 )
        *a11 = 1;
      if ( a12 )
        *a12 = 0;
    }
  }
  else
  {
    return (unsigned int)HvpApplyIncrementalLogFile(a1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 16), a4, a4);
  }
  return (unsigned int)v13;
}
