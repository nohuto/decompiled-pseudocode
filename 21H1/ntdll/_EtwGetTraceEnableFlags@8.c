/*
 * XREFs of _EtwGetTraceEnableFlags@8 @ 0x4B2EC780
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _EtwpGetMaxLogger@0 @ 0x4B2EC7A7 (_EtwpGetMaxLogger@0.c)
 */

int __stdcall EtwGetTraceEnableFlags(__int64 a1)
{
  int result; // eax

  if ( (unsigned int)(unsigned __int16)a1 >= EtwpGetMaxLogger() && (_WORD)a1 != 0xFFFF || (result = HIDWORD(a1), !a1) )
  {
    RtlSetLastWin32Error(6);
    return 0;
  }
  return result;
}
