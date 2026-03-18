/*
 * XREFs of ?WasSemiMaximized@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x172B90
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE (-HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall WasSemiMaximized(_DWORD *this)
{
  return (this[46] & 0x6000) != 0;
}
