/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x1C01E5BA8
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C001BA50 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00C7E50 (NtUserUpdateLayeredWindow.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0101ED0 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C001B748 (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C01053E4 (IsWindowBroadcastingDpiToChildrenX.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(__int64 a1, unsigned __int16 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v5; // ebp
  unsigned int v7; // ebx
  struct tagWND *v8; // r11
  unsigned __int64 v9; // r11
  int v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+24h] [rbp-14h]

  v5 = a2;
  v7 = 0;
  if ( (unsigned int)IsWindowBroadcastingDpiToChildrenX(a1) )
  {
    if ( !HasMaximizedState(v8) )
    {
      v11 = a3[2] - *a3;
      v12 = a3[3] - a3[1];
      if ( xxxSendMessage(v9, 0x2E4u, v5, (struct _LARGE_STRING *)&v11) )
      {
        v7 = 1;
        a4[1] = a3[1];
        *a4 = *a3;
        a4[2] = v11 + *a3;
        a4[3] = v12 + a3[1];
      }
    }
  }
  return v7;
}
