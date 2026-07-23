/*
 * XREFs of _EtwGetTraceLoggerHandle@4 @ 0x4B2EC700
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _EtwpGetMaxLogger@0 @ 0x4B2EC7A7 (_EtwpGetMaxLogger@0.c)
 */

int __stdcall EtwGetTraceLoggerHandle(_DWORD *a1)
{
  int v1; // esi

  if ( !a1 )
  {
    RtlSetLastWin32Error(87);
    return -1;
  }
  if ( *a1 < 0x30u )
  {
    RtlSetLastWin32Error(24);
    return -1;
  }
  v1 = a1[2];
  if ( (unsigned int)(unsigned __int16)v1 >= EtwpGetMaxLogger() && (_WORD)v1 != 0xFFFF )
  {
    v1 = -1;
    RtlSetLastWin32Error(6);
  }
  return v1;
}
