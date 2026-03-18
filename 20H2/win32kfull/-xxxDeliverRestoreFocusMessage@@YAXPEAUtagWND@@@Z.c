/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C011D62C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058A0 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C776C (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

void __fastcall xxxDeliverRestoreFocusMessage(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rdi

  v1 = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) != 0 )
    v1 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1400LL);
  if ( v1 )
  {
    v2 = *((_QWORD *)v1 + 2);
    if ( *(_QWORD *)(v2 + 432) == gpqForeground )
    {
      if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(v1) )
      {
        if ( v2 == gptiCurrent )
          xxxSendMessage((unsigned __int64)v1, 0x2FBu, 0LL, 0LL);
        else
          PostEventMessageEx((struct tagTHREADINFO *)v2, *(struct tagQ **)(v2 + 432), 0x1Du, v1, 0, 0LL, 0LL, 0LL);
      }
    }
  }
}
