/*
 * XREFs of ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0094BE8
 * Callers:
 *     NtUserSetCursor @ 0x1C0093AF0 (NtUserSetCursor.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C009495C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01D3AA0 (-zzzHideCursorNoCapture@@YA_KXZ.c)
 *     xxxSwitchWndProc @ 0x1C01F4ED0 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0210864 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C02417C8 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     xxxDragObject @ 0x1C02480F4 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C024FBFC (xxxHelpLoop.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0094CA4 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C00CD0D0 (zzzUpdateCursorImage.c)
 *     LockQCursor @ 0x1C00FC500 (LockQCursor.c)
 */

struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v3; // rbx
  struct tagCURSOR *v4; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 54);
  v4 = *(struct tagCURSOR **)(v3 + 376);
  if ( v4 != a1 )
  {
    v4 = (struct tagCURSOR *)LockQCursor(*((_QWORD *)CurrentLogicalCursorThread + 54), a1);
    if ( !gpqCursor )
      MEMORY[0] = v3;
    if ( v3 == gpqCursor )
    {
      v11[2] = 0LL;
      v6 = gptiCurrent;
      v7 = gptiCurrent;
      v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v11;
      v11[1] = v4;
      if ( v4 )
        HMLockObject(v4);
      zzzUpdateCursorImage(v6, v7, v4);
      return (struct tagCURSOR *)ThreadUnlock1(v9, v8, v10);
    }
  }
  return v4;
}
