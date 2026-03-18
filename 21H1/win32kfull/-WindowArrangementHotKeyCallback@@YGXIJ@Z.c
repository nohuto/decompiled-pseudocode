/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YGXIJ@Z @ 0x172BB1
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 */

void __stdcall WindowArrangementHotKeyCallback(unsigned int a1, int a2)
{
  int v2; // esi
  struct tagWND *TopLevelHostForComponent; // eax
  int TopLevelWindow; // eax
  int v5; // edi
  unsigned int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]

  if ( _gpqForeground )
  {
    v2 = *(_DWORD *)(_gpqForeground + 64);
    if ( v2 )
    {
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
      TopLevelWindow = _GetTopLevelWindow((int)TopLevelHostForComponent);
      if ( TopLevelWindow )
        v2 = TopLevelWindow;
      if ( (byte_24FC04[16 * a1 - 256] & 1) != 0 || (v5 = *(_DWORD *)(*(_DWORD *)(v2 + 12) + 200)) == 0 )
      {
        if ( a1 < 0x18 )
          PostEventMessage((struct tagTHREADINFO *)0x11, (struct tagQ *)v2, 0, 0, a1, v6, v7);
      }
      else if ( anonymous_namespace_::NotifyShellSimplePayload(0, 3, 0, a2) )
      {
        CInputGlobals::SetPtiLastWoken(_gpInputGlobals, *(struct tagTHREADINFO **)(v5 + 8), 0);
      }
    }
  }
}
