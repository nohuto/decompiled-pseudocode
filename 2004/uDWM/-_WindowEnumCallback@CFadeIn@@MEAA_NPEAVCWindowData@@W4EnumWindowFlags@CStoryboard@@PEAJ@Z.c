/*
 * XREFs of ?_WindowEnumCallback@CFadeIn@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180052800
 * Callers:
 *     ?_WindowEnumCallback@CTDBN@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B4FD0 (-_WindowEnumCallback@CTDBN@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180052854 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 */

char __fastcall CFadeIn::_WindowEnumCallback(CFade *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // ebx
  int v6; // eax
  int v7; // eax

  v4 = 0;
  if ( (a3 & 1) != 0 )
  {
    v6 = *((_DWORD *)a2 + 154) & 0xFFF;
    if ( v6 == 25 || v6 == 27 )
    {
      v7 = CFade::_FadeWindow(a1, a2, 1);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x11A3u);
    }
  }
  *a4 = v4;
  return 1;
}
