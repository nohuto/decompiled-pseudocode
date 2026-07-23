/*
 * XREFs of _EtwGetTraceEnableLevel@8 @ 0x4B2EC750
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _EtwpGetMaxLogger@0 @ 0x4B2EC7A7 (_EtwpGetMaxLogger@0.c)
 */

char __stdcall EtwGetTraceEnableLevel(__int64 a1)
{
  if ( ((unsigned int)(unsigned __int16)a1 < EtwpGetMaxLogger() || (_WORD)a1 == 0xFFFF) && a1 )
    return BYTE2(a1);
  RtlSetLastWin32Error(6);
  return 0;
}
