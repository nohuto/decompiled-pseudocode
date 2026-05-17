/*
 * XREFs of _EtwpAddProviderTrackingInfo@12 @ 0x4B2F0E96
 * Callers:
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 * Callees:
 *     _EtwpAddDebugInfoEvents@12 @ 0x4B2EDFF4 (_EtwpAddDebugInfoEvents@12.c)
 *     _EtwpAddBinaryInfoEvents@12 @ 0x4B38281F (_EtwpAddBinaryInfoEvents@12.c)
 */

_DWORD *__fastcall EtwpAddProviderTrackingInfo(int a1, int a2, unsigned int a3)
{
  _DWORD *v3; // edi
  _DWORD *result; // eax

  v3 = (_DWORD *)(a1 + 340);
  if ( (_DWORD *)*v3 != v3 || (result = (_DWORD *)(a1 + 332), (_DWORD *)*result != result) )
  {
    result = *(_DWORD **)(a2 + 48);
    if ( (unsigned int)result < a3 && (unsigned int)result >= 0x178 )
    {
      result = (_DWORD *)(a1 + 332);
      if ( (_DWORD *)*result != result )
        result = (_DWORD *)EtwpAddDebugInfoEvents(a1, a2, a3);
      if ( (_DWORD *)*v3 != v3 )
        return (_DWORD *)EtwpAddBinaryInfoEvents(a3);
    }
  }
  return result;
}
