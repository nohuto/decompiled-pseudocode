/*
 * XREFs of ?SetDockTargetValue@@YGXPAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0xA555A
 * Callers:
 *     _UpdateDesktopThresholds@0 @ 0xA5498 (_UpdateDesktopThresholds@0.c)
 * Callees:
 *     <none>
 */

char __fastcall SetDockTargetValue(int a1, int a2)
{
  char result; // al

  *(_BYTE *)(a1 + a2 + 128) = gWinArrGlobal[dword_251378[a2]];
  *(_BYTE *)(a1 + a2 + 132) = gWinArrGlobal[dword_251388[a2]];
  *(_BYTE *)(a1 + a2 + 136) = gWinArrGlobal[dword_251398[a2]];
  *(_BYTE *)(a1 + a2 + 140) = gWinArrGlobal[dword_2513A8[a2]];
  *(_BYTE *)(a1 + a2 + 144) = gWinArrGlobal[dword_2513B8[a2]];
  result = gWinArrGlobal[dword_2513C8[a2]];
  *(_BYTE *)(a1 + a2 + 148) = result;
  *(_BYTE *)(a1 + a2 + 152) = 1;
  return result;
}
