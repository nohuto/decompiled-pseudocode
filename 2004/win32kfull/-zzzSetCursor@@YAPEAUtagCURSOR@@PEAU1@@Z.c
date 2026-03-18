/*
 * XREFs of ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00ADDCC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     NtUserSetCursor @ 0x1C00AF700 (NtUserSetCursor.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01D48B0 (-zzzHideCursorNoCapture@@YA_KXZ.c)
 *     xxxSwitchWndProc @ 0x1C01F5B40 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02116E4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0242A68 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C025120C (xxxHelpLoop.c)
 * Callees:
 *     LockQCursor @ 0x1C0039650 (LockQCursor.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00AE114 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v3; // rbx
  struct tagCURSOR *v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  v4 = *(struct tagCURSOR **)(v3 + 376);
  if ( v4 != a1 )
  {
    v4 = (struct tagCURSOR *)LockQCursor(*((_QWORD *)CurrentLogicalCursorThread + 53), a1);
    if ( !gpqCursor )
      MEMORY[0] = v3;
    if ( v3 == gpqCursor )
    {
      v9[2] = 0LL;
      v9[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v9;
      v9[1] = v4;
      if ( v4 )
        HMLockObject(v4);
      zzzUpdateCursorImage();
      return (struct tagCURSOR *)ThreadUnlock1(v7, v6, v8);
    }
  }
  return v4;
}
