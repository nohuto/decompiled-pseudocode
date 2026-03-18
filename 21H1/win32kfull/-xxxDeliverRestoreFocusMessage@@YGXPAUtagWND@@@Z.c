/*
 * XREFs of ?xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z @ 0xAC35E
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x18B9E (-IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __thiscall xxxDeliverRestoreFocusMessage(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int v3; // [esp+0h] [ebp-Ch]
  struct tagINPUT_MESSAGE_SOURCE *v4; // [esp+4h] [ebp-8h]

  v1 = this;
  if ( (*(_BYTE *)(this[5] + 146) & 0x40) != 0 )
    v1 = *(_DWORD **)(this[2] + 800);
  if ( v1 )
  {
    v2 = v1[2];
    if ( *(_DWORD *)(v2 + 236) == _gpqForeground )
    {
      if ( CoreWindowProp::IsPartOfCompositeApplication(v1) )
      {
        if ( v2 == _gptiCurrent )
          xxxSendMessage(v1, 0, 0);
        else
          PostEventMessageEx((struct tagTHREADINFO *)0x1D, (struct tagQ *)v1, 0, 0, 0, 0, v3, v4);
      }
    }
  }
}
