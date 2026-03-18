/*
 * XREFs of SetWindowGroupBand @ 0x1C0024248
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0023BF8 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     zzzImeSetFutureOwner @ 0x1C0031D44 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00333D4 (zzzImeSetOwnerWindow.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     xxxUpdateShadowZorder @ 0x1C023EF48 (xxxUpdateShadowZorder.c)
 * Callees:
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C0024524 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 *     GetBandOrdinal @ 0x1C006F01C (GetBandOrdinal.c)
 *     UnlinkWindow @ 0x1C008A2D8 (UnlinkWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0109F14 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C010B9F8 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  unsigned int v5; // ebp
  struct tagWND *i; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  struct tagWND *v9; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *(_DWORD *)(*((_QWORD *)RootOwner + 5) + 236LL);
  GetBandOrdinal(v5);
  GetBandOrdinal(a2);
  for ( i = RootOwner; ; i = (struct tagWND *)*((_QWORD *)i + 12) )
  {
    v7 = *((_QWORD *)i + 12);
    if ( !v7 || *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) != v5 )
      break;
  }
  do
  {
    result = *((_QWORD *)i + 5);
    if ( *(_DWORD *)(result + 236) != v5 )
      break;
    v9 = (struct tagWND *)*((_QWORD *)i + 11);
    if ( i != RootOwner )
    {
      result = HasOwnedWindowInTree(i, RootOwner);
      if ( !(_DWORD)result )
        continue;
    }
    UnlinkWindow(i, *((_QWORD *)i + 13));
    if ( a2 != 1 )
    {
      SetOrClrWF(0LL, i, 772LL, 1LL);
      SetOrClrWF(1LL, i, 2056LL, 1LL);
    }
    SetWindowTreeBand(i, a2);
    result = LinkWindow(i);
    i = v9;
  }
  while ( v9 );
  return result;
}
