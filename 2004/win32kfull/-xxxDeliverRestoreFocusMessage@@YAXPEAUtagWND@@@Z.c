/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C003810C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005A00 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00353FC (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall xxxDeliverRestoreFocusMessage(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rdi

  v1 = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) != 0 )
    v1 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1392LL);
  if ( v1 )
  {
    v2 = *((_QWORD *)v1 + 2);
    if ( *(_QWORD *)(v2 + 424) == gpqForeground )
    {
      if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(v1) )
      {
        if ( v2 == gptiCurrent )
          xxxSendMessage(v1, 763LL, 0LL, 0LL);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v2, *(struct tagQ **)(v2 + 424), 0x1Du, v1, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}
