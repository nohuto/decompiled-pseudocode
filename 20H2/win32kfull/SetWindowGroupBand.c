/*
 * XREFs of SetWindowGroupBand @ 0x1C00C8B50
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     zzzImeSetFutureOwner @ 0x1C00BED50 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00C55E4 (zzzImeSetOwnerWindow.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00C8500 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C023DCA8 (xxxUpdateShadowZorder.c)
 * Callees:
 *     LinkWindow @ 0x1C0046760 (LinkWindow.c)
 *     GetBandOrdinal @ 0x1C0046CAC (GetBandOrdinal.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C00C8E2C (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     UnlinkWindow @ 0x1C00CEAA8 (UnlinkWindow.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C010B0A4 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0113AC4 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  int v5; // ebp
  unsigned int BandOrdinal; // eax
  struct tagWND *v7; // rbx
  unsigned int v8; // r8d
  _BOOL8 v9; // r15
  __int64 v10; // rcx
  struct tagWND *v11; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *(_DWORD *)(*((_QWORD *)RootOwner + 5) + 236LL);
  GetBandOrdinal(v5);
  BandOrdinal = GetBandOrdinal(a2);
  v7 = RootOwner;
  v9 = BandOrdinal >= v8;
  while ( 1 )
  {
    v10 = *((_QWORD *)v7 + 12);
    if ( !v10 || *(_DWORD *)(*(_QWORD *)(v10 + 40) + 236LL) != v5 )
      break;
    v7 = (struct tagWND *)*((_QWORD *)v7 + 12);
  }
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v7 + 5) + 236LL) != v5 )
      break;
    v11 = (struct tagWND *)*((_QWORD *)v7 + 11);
    if ( v7 == RootOwner || (unsigned int)HasOwnedWindowInTree(v7, RootOwner) )
    {
      UnlinkWindow(v7, *((_QWORD *)v7 + 13));
      if ( a2 != 1 )
      {
        SetOrClrWF(0LL, v7, 772LL, 1LL);
        SetOrClrWF(1LL, v7, 2056LL, 1LL);
      }
      SetWindowTreeBand(v7, a2);
      LinkWindow(v7, (struct tagWND *)v9, *((_QWORD **)v7 + 13));
      v9 = (_BOOL8)v7;
    }
    v7 = v11;
  }
  while ( v11 );
}
