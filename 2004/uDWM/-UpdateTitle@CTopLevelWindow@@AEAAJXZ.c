/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x18003BF38
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001F3B0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18003BF7C (-SetText@CText@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateTitle(CText **this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( this[65] )
  {
    v3 = CText::SetText(this[65], *((const unsigned __int16 **)this[91] + 2));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1279u);
  }
  return v1;
}
