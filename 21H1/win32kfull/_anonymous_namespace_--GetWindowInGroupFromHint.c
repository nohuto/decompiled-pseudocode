/*
 * XREFs of _anonymous_namespace_::GetWindowInGroupFromHint @ 0x19F198
 * Callers:
 *     _lambda_3dfc3574f1764bae2e3df8ef16480b1e_::operator() @ 0xEF93E (_lambda_3dfc3574f1764bae2e3df8ef16480b1e_--operator().c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     ?GetRootOwner@@YGPAUtagWND@@PAU1@@Z @ 0x979A6 (-GetRootOwner@@YGPAUtagWND@@PAU1@@Z.c)
 */

struct tagWND *__thiscall anonymous_namespace_::GetWindowInGroupFromHint(void *this)
{
  int v1; // esi
  struct tagWND *TopLevelWindow; // edi
  struct tagWND *TopLevelHostForComponent; // eax
  int v4; // eax
  struct tagWND *RootOwner; // eax

  v1 = 0;
  TopLevelWindow = (struct tagWND *)_GetTopLevelWindow((int)this);
  if ( TopLevelWindow )
  {
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
    v4 = _GetTopLevelWindow((int)TopLevelHostForComponent);
    if ( v4 )
      TopLevelWindow = (struct tagWND *)v4;
    RootOwner = GetRootOwner(TopLevelWindow);
    if ( *((_DWORD *)RootOwner + 45) )
      return RootOwner;
  }
  return (struct tagWND *)v1;
}
