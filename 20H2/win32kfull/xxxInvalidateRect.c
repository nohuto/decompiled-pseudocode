/*
 * XREFs of xxxInvalidateRect @ 0x1C0234E8C
 * Callers:
 *     xxxMNSetTop @ 0x1C023B0B8 (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C024477C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02492B4 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C02498AC (xxxMNSetGapState.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, int *a2, int a3)
{
  int v3; // r9d

  if ( a1 )
  {
    v3 = a3 != 0 ? 5 : 1;
  }
  else
  {
    v3 = 66181;
    a2 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v3);
}
