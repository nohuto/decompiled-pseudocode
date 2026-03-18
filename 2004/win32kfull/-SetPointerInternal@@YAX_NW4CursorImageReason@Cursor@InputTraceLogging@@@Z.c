/*
 * XREFs of ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C004DA10
 * Callers:
 *     SetPointer @ 0x1C004D9F0 (SetPointer.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 * Callees:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C004DBF8 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C004DC5C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004DCD8 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     GreSetPointer @ 0x1C0088550 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0088868 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0089A04 (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtiMouseFromQ @ 0x1C00901FC (PtiMouseFromQ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01D4724 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall SetPointerInternal(char a1, __int64 a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // edx
  unsigned int v4; // edi
  struct tagCURSOR *CurrentCursorFrame; // rax
  struct tagCURSOR *v6; // rbp
  struct tagCURSOR *v7; // rax
  struct tagCURSOR *v8; // r14
  struct _CURSINFO *v9; // rcx
  unsigned int v10; // esi
  CCursorSizes *v11; // rcx
  int ProcessorHistory; // ebx
  __int64 CurrentCursorSize; // r8
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rcx
  _BYTE v17[160]; // [rsp+30h] [rbp-C8h] BYREF

  v2 = a2;
  if ( a1 )
  {
    if ( gpqForeground )
    {
      v14 = (struct tagTHREADINFO *)PtiMouseFromQ(gpqForeground, a2);
      if ( *(int *)(v15 + 384) < 0 )
      {
        LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v14);
        if ( (_BYTE)CurrentCursorFrame )
          return (char)CurrentCursorFrame;
      }
    }
    CurrentCursorFrame = (struct tagCURSOR *)-gpqCursor;
    v4 = gpqCursor == 0LL ? 3 : 0;
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 384LL) >= 0 )
      {
        v6 = *(struct tagCURSOR **)(gpqCursor + 376LL);
        if ( v6 )
        {
          LOBYTE(CurrentCursorFrame) = gpsi;
          if ( *(_DWORD *)(gpsi + 1972LL) )
          {
            v7 = FixupCursorForMonitor(v6);
            CurrentCursorFrame = GetCurrentCursorFrame(v7);
            v8 = CurrentCursorFrame;
            if ( CurrentCursorFrame )
            {
              v10 = (unsigned int)FCursorShadowed((struct tagCURSOR *)((char *)CurrentCursorFrame + 80)) != 0 ? 0x10 : 0;
              if ( HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) == 1 )
                v10 |= 0x20u;
              GreSetPointer(v9, v10);
              v4 = 2;
              ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
              if ( gProtocolType )
                ProcessorHistory = 0;
              CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(v11);
              LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(
                                             v8,
                                             v6,
                                             CurrentCursorSize,
                                             v2,
                                             v10,
                                             ProcessorHistory);
            }
          }
        }
      }
    }
  }
  else
  {
    v3 = 0;
    v4 = 1;
    if ( HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) == 1 )
      v3 = 32;
    GreSetPointer(0LL, v3);
    memset(v17, 0, 0x98uLL);
    LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(v17, 0LL, 0LL, v2, 0, 0);
  }
  if ( v4 )
    LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v4);
  return (char)CurrentCursorFrame;
}
