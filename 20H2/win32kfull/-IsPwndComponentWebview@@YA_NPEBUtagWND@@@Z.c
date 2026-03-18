/*
 * XREFs of ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0005074
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0004FCC (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserNavigateFocus @ 0x1C00077C0 (NtUserNavigateFocus.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C001432C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetParent @ 0x1C00E5E64 (_GetParent.c)
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
