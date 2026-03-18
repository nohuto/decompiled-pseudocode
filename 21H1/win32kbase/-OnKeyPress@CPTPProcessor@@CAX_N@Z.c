/*
 * XREFs of ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C01A957C
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01A94BC (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     ApiSetTraceLoggingPTPAAPKeyPress @ 0x1C01D3550 (ApiSetTraceLoggingPTPAAPKeyPress.c)
 */

void __fastcall CPTPProcessor::OnKeyPress(unsigned __int8 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  volatile __int64 *v3; // r8
  volatile __int64 *v4; // rcx

  ApiSetTraceLoggingPTPAAPKeyPress(a1);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = &qword_1C0256DB0;
  if ( !a1 )
    v3 = &qword_1C0256DB8;
  v4 = &qword_1C0259BD0;
  _InterlockedExchange64(v3, PerformanceCounter.QuadPart);
  if ( !a1 )
    v4 = &qword_1C0259BD8;
  _InterlockedExchange64(v4, PerformanceCounter.QuadPart);
}
