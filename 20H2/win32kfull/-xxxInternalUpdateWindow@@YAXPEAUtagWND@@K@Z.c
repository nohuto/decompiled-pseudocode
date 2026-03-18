/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C001AED0
 * Callers:
 *     xxxUpdateWindow @ 0x1C001AEB0 (xxxUpdateWindow.c)
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     xxxPrintWindow @ 0x1C01E7A70 (xxxPrintWindow.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F37D4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C0212C4C (xxxUpdateThreadsWindows.c)
 *     xxxbFullscreenSwitch @ 0x1C021E45C (xxxbFullscreenSwitch.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxDragObject @ 0x1C02480F4 (xxxDragObject.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C001AF20 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxInternalUpdateWindow(struct tagWND *a1, unsigned int a2)
{
  _QWORD *i; // r8
  __int64 v3; // rax

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x20) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 11); i; i = (_QWORD *)i[11] )
    {
      if ( i[2] == *((_QWORD *)a1 + 2) )
      {
        v3 = i[5];
        if ( *(_QWORD *)(v3 + 136) || (*(_BYTE *)(v3 + 17) & 0x10) != 0 )
          return;
      }
    }
  }
  xxxUpdateWindow2(a1, a2);
}
