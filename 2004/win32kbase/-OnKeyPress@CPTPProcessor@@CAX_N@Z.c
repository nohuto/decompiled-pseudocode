/*
 * XREFs of ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C01A381C
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01A375C (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     ApiSetTraceLoggingPTPAAPKeyPress @ 0x1C01CD5D0 (ApiSetTraceLoggingPTPAAPKeyPress.c)
 */

void __fastcall CPTPProcessor::OnKeyPress(unsigned __int8 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  volatile __int64 *v3; // r8
  volatile __int64 *v4; // rcx

  ApiSetTraceLoggingPTPAAPKeyPress(a1);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = &qword_1C0250DD0;
  if ( !a1 )
    v3 = &qword_1C0250DD8;
  v4 = &qword_1C0253C10;
  _InterlockedExchange64(v3, PerformanceCounter.QuadPart);
  if ( !a1 )
    v4 = &qword_1C0253C18;
  _InterlockedExchange64(v4, PerformanceCounter.QuadPart);
}
