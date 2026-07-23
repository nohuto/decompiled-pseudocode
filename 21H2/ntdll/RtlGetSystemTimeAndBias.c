/*
 * XREFs of RtlGetSystemTimeAndBias @ 0x18009CC00
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 */

KSYSTEM_TIME *__cdecl RtlGetSystemTimeAndBias(
        KSYSTEM_TIME *__return_ptr retstr,
        KSYSTEM_TIME *TimeZoneBias,
        PLARGE_INTEGER TimeZoneBiasEffectiveStart,
        PLARGE_INTEGER TimeZoneBiasEffectiveEnd)
{
  void *SharedData; // r9
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // r9
  int v12; // edx

  if ( RtlGetCurrentServiceSessionId() )
  {
    SharedData = NtCurrentPeb()->SharedData;
    v8 = (__int64)SharedData + 588;
    v9 = (__int64)SharedData + 592;
    v10 = (__int64)SharedData + 608;
    v11 = (__int64)SharedData + 616;
  }
  else
  {
    v10 = 2147353544LL;
    v8 = 2147353180LL;
    v9 = 2147352608LL;
    v11 = 2147353552LL;
  }
  while ( 1 )
  {
    v12 = *(_DWORD *)v8;
    if ( (*(_DWORD *)v8 & 1) == 0 )
    {
      while ( HIDWORD(*(_QWORD *)v9) != *(_DWORD *)(v9 + 8) )
        _mm_pause();
      *(_QWORD *)&retstr->LowPart = *(_QWORD *)v9;
      if ( TimeZoneBias )
        *(_QWORD *)&TimeZoneBias->LowPart = *(_QWORD *)v10;
      if ( TimeZoneBiasEffectiveStart )
        *TimeZoneBiasEffectiveStart = *(PLARGE_INTEGER)v11;
      while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
        _mm_pause();
      if ( v12 == *(_DWORD *)v8 )
        break;
    }
    _mm_pause();
  }
  return (KSYSTEM_TIME *)MEMORY[0x7FFE0014];
}
