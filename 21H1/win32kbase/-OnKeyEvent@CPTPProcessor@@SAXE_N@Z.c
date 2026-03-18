/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01A94BC
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C01B3D60 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C01A8EB8 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C01A957C (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(char a1, char a2)
{
  unsigned __int64 v4; // rcx
  int v5; // ebx

  _InterlockedExchange64(&qword_1C0256DC0, KeQueryPerformanceCounter(0LL).QuadPart);
  v5 = 1;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0
    || (BYTE4(gafAsyncKeyState) & 0x10) != 0
    || (BYTE6(xmmword_1C02518B0) & 0x40) != 0
    || (BYTE7(xmmword_1C02518B0) & 1) != 0 )
  {
    if ( !dword_1C0256DCC )
    {
      _InterlockedExchange64(&qword_1C0256DB0, 0LL);
      _InterlockedExchange64(&qword_1C0256DB8, 0LL);
      _InterlockedExchange64(&qword_1C0259BD0, 0LL);
      _InterlockedExchange64(&qword_1C0259BD8, 0LL);
    }
  }
  else
  {
    LOBYTE(v4) = a1;
    v5 = 0;
    if ( CPTPProcessor::IsOurKey(v4, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  dword_1C0256DCC = v5;
}
