/*
 * XREFs of _EtwpGetNextAvailableLoggerId@8 @ 0x4B2F1A70
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _EtwpInitializePrivateLoggerSupport@0 @ 0x4B2F1ADF (_EtwpInitializePrivateLoggerSupport@0.c)
 */

int __fastcall EtwpGetNextAvailableLoggerId(int a1, unsigned int *a2)
{
  int result; // eax
  int v5; // esi
  unsigned int v6; // edi
  unsigned int i; // esi

  result = EtwpInitializePrivateLoggerSupport();
  if ( !result )
  {
    v5 = *(_DWORD *)(a1 + 64) & 0x20000;
    v6 = v5 != 0 ? 64 : 8;
    for ( i = v5 != 0 ? 8 : 0; i < v6; ++i )
    {
      _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * i + 4));
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(EtwpLoggerArray + 8 * i), 3, 1) == 1 )
      {
        *a2 = i;
        return 0;
      }
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * i + 4));
    }
    return 1450;
  }
  return result;
}
