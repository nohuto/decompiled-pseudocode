/*
 * XREFs of GetWindowCloakStateComponentUIAware @ 0x1C003CBF8
 * Callers:
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     zzzImeSetFutureOwner @ 0x1C00BED50 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00C55E4 (zzzImeSetOwnerWindow.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C001432C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall GetWindowCloakStateComponentUIAware(struct tagWND *a1)
{
  const struct tagWND *v1; // rbx
  int IsComponent; // eax
  __int64 TopLevelWindow; // rcx
  __int64 result; // rax
  struct tagWND *Host; // rax

  v1 = a1;
  IsComponent = CoreWindowProp::IsComponent(a1);
  TopLevelWindow = (__int64)v1;
  if ( !IsComponent )
    return GetWindowCloakState(TopLevelWindow);
  if ( (GetWindowCloakState(v1) & 1) != 0 )
    return 1LL;
  while ( 1 )
  {
    Host = CoreWindowProp::GetHost(v1);
    v1 = Host;
    if ( !Host )
      break;
    result = GetWindowCloakState(Host);
    if ( (result & 1) != 0 )
      return result;
    if ( !(unsigned int)CoreWindowProp::IsComponent(v1) )
    {
      TopLevelWindow = GetTopLevelWindow(v1);
      return GetWindowCloakState(TopLevelWindow);
    }
  }
  return 2LL;
}
