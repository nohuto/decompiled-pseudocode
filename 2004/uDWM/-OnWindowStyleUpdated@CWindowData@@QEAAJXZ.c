/*
 * XREFs of ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180012178
 * Callers:
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800120C0 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002AC84 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180040DDC (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800121C8 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004458C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowData::OnWindowStyleUpdated(CWindowData *this)
{
  unsigned int v2; // ebx
  CTopLevelWindow *v3; // rcx
  int v4; // eax
  CWindowIconic *v5; // rcx
  int v7; // eax

  v2 = 0;
  v3 = (CTopLevelWindow *)*((_QWORD *)this + 48);
  if ( v3 && (v4 = CTopLevelWindow::OnWindowStyleUpdated(v3), v2 = v4, v4 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1CE7u);
  }
  else
  {
    v5 = (CWindowIconic *)*((_QWORD *)this + 53);
    if ( v5 )
    {
      v7 = CWindowIconic::OnWindowStyleUpdated(v5, 1);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1CECu);
    }
  }
  return v2;
}
