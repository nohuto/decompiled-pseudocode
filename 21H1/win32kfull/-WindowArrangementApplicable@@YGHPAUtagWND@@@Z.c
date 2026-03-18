/*
 * XREFs of ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z @ 0x1857B4
 * Callers:
 *     ?DragOperationFromMaximizedAllowed@@YG_NPAUtagWND@@@Z @ 0x1856D5 (-DragOperationFromMaximizedAllowed@@YG_NPAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1856F1 (-MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YG_NPAUtagWND@@@Z @ 0x185784 (-SizeWithSnapAllowed@@YG_NPAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1857A0 (-WindowArrangementAllowed@@YG_NPAUtagWND@@@Z.c)
 * Callees:
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     _GetAppCompatFlags2QuadWord@4 @ 0xA14BE (_GetAppCompatFlags2QuadWord@4.c)
 */

BOOL __thiscall WindowArrangementApplicable(_DWORD *this)
{
  return IsNonImmersiveBand(this) && (GetAppCompatFlags2QuadWord(0) & 0x100000000LL) == 0;
}
