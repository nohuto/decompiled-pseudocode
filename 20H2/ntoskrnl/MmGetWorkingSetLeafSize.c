/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x14023EBA0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406358D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetCurrentMultiplexedVm @ 0x14023DF64 (MiGetCurrentMultiplexedVm.c)
 *     MiTranslateWsType @ 0x14023DFA4 (MiTranslateWsType.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(int a1)
{
  char *result; // rax

  if ( a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm();
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140C4EE80 + 320 * (int)MiTranslateWsType(a1);
  }
  return (char *)*((_QWORD *)result + 15);
}
