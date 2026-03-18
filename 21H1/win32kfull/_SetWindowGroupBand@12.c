/*
 * XREFs of _SetWindowGroupBand@12 @ 0x97764
 * Callers:
 *     _zzzImeSetFutureOwner@8 @ 0x18ECA (_zzzImeSetFutureOwner@8.c)
 *     _zzzImeSetOwnerWindow@8 @ 0x1C3FA (_zzzImeSetOwnerWindow@8.c)
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _xxxUpdateShadowZorder@4 @ 0x19D563 (_xxxUpdateShadowZorder@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetBandOrdinal@4 @ 0x33526 (_GetBandOrdinal@4.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 *     ?HasOwnedWindowInTree@@YGHPAUtagWND@@0@Z @ 0x97850 (-HasOwnedWindowInTree@@YGHPAUtagWND@@0@Z.c)
 *     ?SetWindowTreeBand@@YGXPAUtagWND@@W4ZBID@@@Z @ 0x978B8 (-SetWindowTreeBand@@YGXPAUtagWND@@W4ZBID@@@Z.c)
 *     ?GetRootOwner@@YGPAUtagWND@@PAU1@@Z @ 0x979A6 (-GetRootOwner@@YGPAUtagWND@@PAU1@@Z.c)
 */

void __fastcall SetWindowGroupBand(struct tagWND *RootOwner, void *a2, int a3)
{
  unsigned int BandOrdinal; // eax
  unsigned int v6; // edx
  bool v7; // cf
  int v8; // esi
  void *v9; // edx
  int v10; // ecx
  int v11; // ebx
  void *v12; // eax
  struct tagWND *v13; // [esp+0h] [ebp-18h]
  struct tagWND *v14; // [esp+4h] [ebp-14h]
  _DWORD *v16; // [esp+10h] [ebp-8h]
  void *v17; // [esp+14h] [ebp-4h]

  if ( !a3 )
    RootOwner = GetRootOwner(v13);
  v17 = *(void **)(*((_DWORD *)RootOwner + 5) + 148);
  GetBandOrdinal(v17);
  BandOrdinal = GetBandOrdinal(a2);
  v7 = BandOrdinal < v6;
  v8 = (int)RootOwner;
  v9 = v17;
  v16 = (_DWORD *)(1 - v7);
  while ( 1 )
  {
    v10 = *(_DWORD *)(v8 + 52);
    if ( !v10 || *(void **)(*(_DWORD *)(v10 + 20) + 148) != v17 )
      break;
    v8 = *(_DWORD *)(v8 + 52);
  }
  do
  {
    if ( *(void **)(*(_DWORD *)(v8 + 20) + 148) != v9 )
      break;
    v11 = *(_DWORD *)(v8 + 48);
    if ( (struct tagWND *)v8 == RootOwner || HasOwnedWindowInTree(v13, v14) )
    {
      UnlinkWindow((_DWORD *)v8, *(int **)(v8 + 56));
      v12 = a2;
      if ( a2 != (void *)1 )
      {
        SetOrClrWF(0, v8, 0x304u, 1);
        SetOrClrWF(1, v8, 0x808u, 1);
        v12 = a2;
      }
      SetWindowTreeBand(v8, v12);
      LinkWindow((_DWORD *)v8, v16, *(_DWORD **)(v8 + 56));
      v16 = (_DWORD *)v8;
    }
    v9 = v17;
    v8 = v11;
  }
  while ( v11 );
}
