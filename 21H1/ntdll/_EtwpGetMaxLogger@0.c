/*
 * XREFs of _EtwpGetMaxLogger@0 @ 0x4B2EC7A7
 * Callers:
 *     _EtwGetTraceLoggerHandle@4 @ 0x4B2EC700 (_EtwGetTraceLoggerHandle@4.c)
 *     _EtwGetTraceEnableLevel@8 @ 0x4B2EC750 (_EtwGetTraceEnableLevel@8.c)
 *     _EtwGetTraceEnableFlags@8 @ 0x4B2EC780 (_EtwGetTraceEnableFlags@8.c)
 * Callees:
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

int __thiscall EtwpGetMaxLogger(void *this)
{
  int result; // eax
  ULONG ReturnLength; // [esp+0h] [ebp-4h] BYREF

  ReturnLength = (ULONG)this;
  result = EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( ZwTraceControl(EtwMaxLoggers, 0, 0, &EtwpMaxLoggers, 4u, &ReturnLength) || ReturnLength != 4 )
    {
      result = 64;
      EtwpMaxLoggers = 64;
    }
    else
    {
      return EtwpMaxLoggers;
    }
  }
  return result;
}
