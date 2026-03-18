/*
 * XREFs of _FreePointerMessageParams@4 @ 0x15A014
 * Callers:
 *     ?xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x69F40 (-xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     _DestroyThreadsMessages@8 @ 0x6FE90 (_DestroyThreadsMessages@8.c)
 *     _FreeMessageList@4 @ 0x9C39C (_FreeMessageList@4.c)
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 *     _FreeQEntry@4 @ 0xAB19C (_FreeQEntry@4.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall FreePointerMessageParams(_DWORD *this)
{
  int v1; // eax

  if ( this[3] != 595 )
  {
    v1 = this[5];
    if ( this[15] )
      CTouchProcessor::UnreferenceMsgDataExternal(_gpTouchProcessor, v1, 3, this);
    else
      CTouchProcessor::UnreferenceMsgDataExternal(_gpTouchProcessor, v1, 2, this);
  }
}
