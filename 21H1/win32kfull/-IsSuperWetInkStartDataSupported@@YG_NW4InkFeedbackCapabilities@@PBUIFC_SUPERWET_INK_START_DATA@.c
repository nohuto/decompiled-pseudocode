/*
 * XREFs of ?IsSuperWetInkStartDataSupported@@YG_NW4InkFeedbackCapabilities@@PBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1AF9C6
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSuperWetInkStartDataSupported(char a1, int a2)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf
  int v6; // eax

  if ( *(_BYTE *)(a2 + 8) != 0xFF && (a1 & 0x40) == 0 )
    return 0;
  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return 0;
      v4 = (a1 & 2) == 0;
    }
    else
    {
      v4 = (a1 & 4) == 0;
    }
    if ( v4 )
      return 0;
  }
  else if ( (a1 & 1) == 0 )
  {
    return 0;
  }
  v6 = *(_DWORD *)(a2 + 16);
  if ( v6 )
  {
    if ( v6 != 1 || (a1 & 0x10) == 0 )
      return 0;
  }
  else if ( (a1 & 8) == 0 )
  {
    return 0;
  }
  return 1.0 == *(float *)(a2 + 20)
      && 0.0 == *(float *)(a2 + 24)
      && *(float *)(a2 + 28) == 0.0
      && *(float *)(a2 + 32) == 1.0
      && *(float *)(a2 + 36) == 0.0
      && *(float *)(a2 + 40) == 0.0
      || (a1 & 0x20) != 0;
}
