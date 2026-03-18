/*
 * XREFs of ?GetSizeForCursorOrFrame@@YG?AUtagSIZE@@PAUtagCURSOR@@@Z @ 0xD920E
 * Callers:
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall GetSizeForCursorOrFrame(int this)
{
  int v1; // edx

  v1 = 0;
  if ( this )
  {
    if ( (*(_BYTE *)(this + 44) & 8) != 0 )
      return *(_DWORD *)(**(_DWORD **)(this + 56) + 88);
    else
      return *(_DWORD *)(this + 88);
  }
  return v1;
}
