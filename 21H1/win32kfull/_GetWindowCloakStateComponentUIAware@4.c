/*
 * XREFs of _GetWindowCloakStateComponentUIAware@4 @ 0x25400
 * Callers:
 *     _zzzImeSetFutureOwner@8 @ 0x18ECA (_zzzImeSetFutureOwner@8.c)
 *     _zzzImeSetOwnerWindow@8 @ 0x1C3FA (_zzzImeSetOwnerWindow@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 * Callees:
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592 (-GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 */

int __thiscall GetWindowCloakStateComponentUIAware(void *this, int a2)
{
  int result; // eax
  struct tagWND *Host; // eax
  struct tagWND *v5; // esi
  const struct tagWND *v6; // [esp+0h] [ebp-4h]
  const struct tagWND *v7; // [esp+0h] [ebp-4h]
  const struct tagWND *v8; // [esp+0h] [ebp-4h]

  if ( !CoreWindowProp::IsComponent(v6) )
_GetWindowCloakState@4:
    JUMPOUT(0x26960);
  if ( (GetWindowCloakState(this) & 1) != 0 )
    return 1;
  while ( 1 )
  {
    Host = CoreWindowProp::GetHost(v7);
    v5 = Host;
    if ( !Host )
      return 2;
    result = GetWindowCloakState(Host);
    if ( (result & 1) != 0 )
      return result;
    if ( !CoreWindowProp::IsComponent(v8) )
    {
      _GetTopLevelWindow(v5);
      goto _GetWindowCloakState@4;
    }
  }
}
