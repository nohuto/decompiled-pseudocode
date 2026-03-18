/*
 * XREFs of ACPILateRestore @ 0x1C005B700
 * Callers:
 *     <none>
 * Callees:
 *     READ_PM1_CONTROL @ 0x1C0024548 (READ_PM1_CONTROL.c)
 */

__int64 ACPILateRestore()
{
  __int64 result; // rax
  LARGE_INTEGER v1; // rax
  signed __int64 v2; // rbx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( AcpiKsrInProgress && AcpiKsrUseFallback && !*((_BYTE *)AcpiInformation + 84) )
  {
    __outbyte(*((_QWORD *)AcpiInformation + 13), *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 53LL));
    v1 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v2 = PerformanceFrequency.QuadPart / 5uLL + v1.QuadPart;
    do
    {
      result = READ_PM1_CONTROL();
      if ( (result & 1) == 0 )
        break;
      result = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    while ( result < v2 );
  }
  return result;
}
