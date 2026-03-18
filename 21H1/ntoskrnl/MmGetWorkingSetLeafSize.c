/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x140204010
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1405DA2D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetCurrentMultiplexedVm @ 0x140203494 (MiGetCurrentMultiplexedVm.c)
 *     MiTranslateWsType @ 0x1402034D4 (MiTranslateWsType.c)
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
    result = (char *)&unk_140C4EF40 + 320 * (int)MiTranslateWsType(a1);
  }
  return (char *)*((_QWORD *)result + 15);
}
