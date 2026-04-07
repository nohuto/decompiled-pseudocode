/*
 * XREFs of ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800AFFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180038380 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x1800383E4 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 */

__int64 __fastcall CGrowPanel::OnEndTransitionRequest(CGrowPanel *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CStoryboard::_EnumerateWindows(this, 4u);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x5C2u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0x5C1u);
  }
  return v3;
}
