/*
 * XREFs of ?CalcForegroundInsertAfterComponentUIAware@@YGPAUtagWND@@PAU1@@Z @ 0x93274
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _CalcForegroundInsertAfter@4 @ 0x932A2 (_CalcForegroundInsertAfter@4.c)
 */

struct tagWND *__thiscall CalcForegroundInsertAfterComponentUIAware(_DWORD *this)
{
  struct tagWND *result; // eax
  struct tagWND *v3; // edi
  struct tagWND *TopLevelHostForComponent; // eax
  int TopLevelWindow; // eax

  result = (struct tagWND *)CalcForegroundInsertAfter(this);
  v3 = result;
  if ( !this[16] )
  {
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
    TopLevelWindow = _GetTopLevelWindow((int)TopLevelHostForComponent);
    if ( TopLevelWindow )
      return (struct tagWND *)TopLevelWindow;
    return v3;
  }
  return result;
}
