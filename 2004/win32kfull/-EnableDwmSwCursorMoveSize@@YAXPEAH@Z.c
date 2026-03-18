/*
 * XREFs of ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020B834
 * Callers:
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 * Callees:
 *     ChangeComposableCursor @ 0x1C01D49F8 (ChangeComposableCursor.c)
 */

void __fastcall EnableDwmSwCursorMoveSize(int *a1)
{
  int v1; // ebx

  v1 = 0;
  if ( !gProtocolType && !gbRemoteFxSession )
  {
    v1 = 1;
    ChangeComposableCursor(1LL);
  }
  *a1 = v1;
}
