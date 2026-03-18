/*
 * XREFs of ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020A9B4
 * Callers:
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 * Callees:
 *     ChangeComposableCursor @ 0x1C01D3BE8 (ChangeComposableCursor.c)
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
