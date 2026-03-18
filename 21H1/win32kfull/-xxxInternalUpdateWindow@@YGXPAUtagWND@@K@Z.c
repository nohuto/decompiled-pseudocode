/*
 * XREFs of ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436
 * Callers:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _xxxUpdateWindow@4 @ 0x7D41C (_xxxUpdateWindow@4.c)
 *     _xxxPrintWindow@12 @ 0x153AF9 (_xxxPrintWindow@12.c)
 *     ?xxxShowSwitchWindow@@YGHPAUtagWND@@@Z @ 0x15CF04 (-xxxShowSwitchWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxUpdateThreadsWindows@12 @ 0x17804C (_xxxUpdateThreadsWindows@12.c)
 *     _xxxbFullscreenSwitch@8 @ 0x181710 (_xxxbFullscreenSwitch@8.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     <none>
 */

void __cdecl xxxInternalUpdateWindow(struct tagWND *a1, unsigned int a2)
{
  _DWORD *v2; // ecx
  _DWORD *i; // eax
  int v4; // edx

  if ( (*(_BYTE *)(v2[5] + 16) & 0x20) != 0 )
  {
    for ( i = (_DWORD *)v2[12]; i; i = (_DWORD *)i[12] )
    {
      if ( i[2] == v2[2] )
      {
        v4 = i[5];
        if ( *(_DWORD *)(v4 + 92) || (*(_BYTE *)(v4 + 9) & 0x10) != 0 )
          return;
      }
    }
  }
  xxxUpdateWindow2(a1, a2);
}
