/*
 * XREFs of ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072
 * Callers:
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     _EditionIsAppForeground@4 @ 0x141997 (_EditionIsAppForeground@4.c)
 *     _GetActiveTrackPwnd@4 @ 0x14E1E4 (_GetActiveTrackPwnd@4.c)
 *     _NtUserNavigateFocus@8 @ 0x16716A (_NtUserNavigateFocus@8.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z @ 0x18570D (-ShouldApplyShellWindowingBehaviorToSysCommand@@YGHPAUtagWND@@H@Z.c)
 *     ?CanTransferForeground@CWindow@@QBE_NXZ @ 0x19ED3A (-CanTransferForeground@CWindow@@QBE_NXZ.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z @ 0x19FC53 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z @ 0x19FE53 (-xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

BOOL __thiscall CoreWindowProp::CompositeAppHasForeground(void *this)
{
  int v1; // esi
  int TopLevelWindow; // edi
  int v3; // eax
  int v4; // esi
  struct tagWND *TopLevelHostForComponent; // eax
  int v6; // eax
  struct tagWND *v7; // eax
  int v8; // eax

  if ( !_gpqForeground )
    return 0;
  v1 = *(_DWORD *)(_gpqForeground + 64);
  if ( !v1 )
    return 0;
  TopLevelWindow = _GetTopLevelWindow((int)this);
  v3 = _GetTopLevelWindow(v1);
  v4 = v3;
  if ( !TopLevelWindow || !v3 )
    return 0;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
  v6 = _GetTopLevelWindow((int)TopLevelHostForComponent);
  if ( v6 )
    TopLevelWindow = v6;
  v7 = CoreWindowProp::GetTopLevelHostForComponent();
  v8 = _GetTopLevelWindow((int)v7);
  if ( v8 )
    v4 = v8;
  return TopLevelWindow == v4 || *(_DWORD *)(TopLevelWindow + 108) == v4;
}
