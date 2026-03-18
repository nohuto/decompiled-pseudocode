/*
 * XREFs of _WPP_RECORDER_SF_qiqdd@44 @ 0x6C1F6
 * Callers:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     ?xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x69F40 (-xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     _MergeDeferredMessagesOfThreadOnQueue@4 @ 0xAAAC0 (_MergeDeferredMessagesOfThreadOnQueue@4.c)
 *     _DeferMessagesOnQueue@8 @ 0xC2828 (_DeferMessagesOnQueue@8.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qiqdd(int a1, int a2, int a3, char a4, char a5, int a6, char a7, char a8, char a9)
{
  struct RECORDER_LOG__ *v9; // esi

  v9 = gFullLog;
  if ( ((unsigned int)&loc_20000 & WPP_GLOBAL_Control->Characteristics) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      a3,
      a2,
      &a4,
      4,
      &a5,
      8,
      &a7,
      4,
      &a8);
  return _WppAutoLogTrace(v9, 4, 18, a3, a2, &a4, 4, &a5, 8, &a7, 4, &a8);
}
