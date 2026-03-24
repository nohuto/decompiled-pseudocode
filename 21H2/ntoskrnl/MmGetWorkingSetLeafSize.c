/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x1402720D0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140646800 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x1402724B0 (MiTranslateWsType.c)
 *     MiGetCurrentMultiplexedVm @ 0x1402724F8 (MiGetCurrentMultiplexedVm.c)
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
    result = (char *)&unk_140C4F000 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 15);
}
