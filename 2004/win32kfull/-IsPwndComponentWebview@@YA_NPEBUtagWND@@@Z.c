/*
 * XREFs of ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C00051D4
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C000512C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserNavigateFocus @ 0x1C0007B40 (NtUserNavigateFocus.c)
 * Callees:
 *     _GetParent @ 0x1C00E9C04 (_GetParent.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0118568 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

bool __fastcall IsPwndComponentWebview(const struct tagWND *a1)
{
  struct tagWND *Host; // rax
  __int64 Parent; // rax
  bool result; // al

  Host = CoreWindowProp::GetHost(a1);
  result = 0;
  if ( Host )
  {
    Parent = GetParent(Host);
    if ( Parent )
    {
      if ( *(char *)(*(_QWORD *)(Parent + 40) + 235LL) < 0 )
        return 1;
    }
  }
  return result;
}
