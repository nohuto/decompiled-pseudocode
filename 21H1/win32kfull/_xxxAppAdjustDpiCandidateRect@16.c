/*
 * XREFs of _xxxAppAdjustDpiCandidateRect@16 @ 0x151E6B
 * Callers:
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0 (-xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _NtUserUpdateLayeredWindow@40 @ 0xBA93E (_NtUserUpdateLayeredWindow@40.c)
 * Callees:
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _IsWindowBroadcastingDpiToChildrenX@4 @ 0x9B752 (_IsWindowBroadcastingDpiToChildrenX@4.c)
 *     ?HasMaximizedState@@YG_NPAUtagWND@@@Z @ 0x171595 (-HasMaximizedState@@YG_NPAUtagWND@@@Z.c)
 */

int __fastcall xxxAppAdjustDpiCandidateRect(_DWORD *a1, unsigned __int16 a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // ebx
  void *v5; // ecx
  struct tagWND *v7; // [esp+0h] [ebp-14h]
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  unsigned __int16 v10; // [esp+12h] [ebp-2h]

  v10 = a2;
  v4 = 0;
  if ( IsWindowBroadcastingDpiToChildrenX(a1) )
  {
    if ( !HasMaximizedState(v7) )
    {
      v8 = a3[2] - *a3;
      v9 = a3[3] - a3[1];
      if ( xxxSendMessage(v5, v10, (int)&v8) )
      {
        a4[1] = a3[1];
        *a4 = *a3;
        a4[2] = v8 + *a3;
        v4 = 1;
        a4[3] = v9 + a3[1];
      }
    }
  }
  return v4;
}
