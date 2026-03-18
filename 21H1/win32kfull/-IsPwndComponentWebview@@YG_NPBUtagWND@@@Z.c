/*
 * XREFs of ?IsPwndComponentWebview@@YG_NPBUtagWND@@@Z @ 0xC42C2
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC4246 (-xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 *     _NtUserNavigateFocus@8 @ 0x16716A (_NtUserNavigateFocus@8.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592 (-GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetParent@4 @ 0xB5390 (__GetParent@4.c)
 */

bool __thiscall IsPwndComponentWebview(void *this)
{
  struct tagWND *Host; // eax
  int Parent; // eax
  bool result; // al

  Host = CoreWindowProp::GetHost(this);
  result = 0;
  if ( Host )
  {
    Parent = _GetParent(Host);
    if ( Parent )
    {
      if ( *(char *)(*(_DWORD *)(Parent + 20) + 147) < 0 )
        return 1;
    }
  }
  return result;
}
