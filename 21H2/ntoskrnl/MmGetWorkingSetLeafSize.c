/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x140260070
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14063B5F0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x140260450 (MiTranslateWsType.c)
 *     MiGetCurrentMultiplexedVm @ 0x140260498 (MiGetCurrentMultiplexedVm.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(__int64 a1, __int64 a2)
{
  char *result; // rax

  if ( (_DWORD)a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm(a1, a2);
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140C4F040 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 15);
}
