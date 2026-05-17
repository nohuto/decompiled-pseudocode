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
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this;
  result = EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( ZwTraceControl(42, 0, 0, &EtwpMaxLoggers, 4, &v2) || v2 != (void *)4 )
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
