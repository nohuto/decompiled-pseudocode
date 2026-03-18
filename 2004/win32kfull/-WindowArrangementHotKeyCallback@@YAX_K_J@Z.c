/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C020D830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00675A4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C011A320 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall WindowArrangementHotKeyCallback(unsigned __int64 a1, __int64 a2)
{
  const struct tagWND *v4; // rcx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v6; // rdi

  if ( gpqForeground )
  {
    v4 = *(const struct tagWND **)(gpqForeground + 120LL);
    if ( v4 )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v4);
      if ( (dword_1C02E524C[4 * (unsigned int)(a1 - 16)] & 1) != 0
        || (v6 = *(_QWORD *)(*((_QWORD *)CompositeAppFrameWindowOrSelf + 3) + 328LL)) == 0 )
      {
        if ( a1 < 0x18 )
          PostEventMessageEx(
            *((struct tagTHREADINFO **)CompositeAppFrameWindowOrSelf + 2),
            *(struct tagQ **)(*((_QWORD *)CompositeAppFrameWindowOrSelf + 2) + 424LL),
            0x11u,
            CompositeAppFrameWindowOrSelf,
            0,
            0LL,
            a1,
            0LL);
      }
      else if ( anonymous_namespace_::NotifyShellSimplePayload(0LL, 3, 0LL, a2) )
      {
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v6 + 16), 0);
      }
    }
  }
}
