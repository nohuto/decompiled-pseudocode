/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01A375C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C01A3158 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C01A381C (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(char a1, char a2)
{
  unsigned __int64 v4; // rcx
  int v5; // ebx

  _InterlockedExchange64(&qword_1C0250DE0, KeQueryPerformanceCounter(0LL).QuadPart);
  v5 = 1;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0
    || (BYTE4(gafAsyncKeyState) & 0x10) != 0
    || (BYTE6(xmmword_1C024B8B0) & 0x40) != 0
    || (BYTE7(xmmword_1C024B8B0) & 1) != 0 )
  {
    if ( !dword_1C0250DEC )
    {
      _InterlockedExchange64(&qword_1C0250DD0, 0LL);
      _InterlockedExchange64(&qword_1C0250DD8, 0LL);
      _InterlockedExchange64(&qword_1C0253C10, 0LL);
      _InterlockedExchange64(&qword_1C0253C18, 0LL);
    }
  }
  else
  {
    LOBYTE(v4) = a1;
    v5 = 0;
    if ( CPTPProcessor::IsOurKey(v4, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  dword_1C0250DEC = v5;
}
