/*
 * XREFs of ?ShouldSendSizing@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x1721F4
 * Callers:
 *     ?UpdateMoveSizeDataForCancelation@@YGXPAU_MOVESIZEDATA@@@Z @ 0x172671 (-UpdateMoveSizeDataForCancelation@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall ShouldSendSizing(_DWORD *this)
{
  return ((this[46] ^ (this[46] >> 5)) & 0x300) != 0;
}
