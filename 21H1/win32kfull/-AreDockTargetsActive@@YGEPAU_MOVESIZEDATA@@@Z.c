/*
 * XREFs of ?AreDockTargetsActive@@YGEPAU_MOVESIZEDATA@@@Z @ 0x170BD9
 * Callers:
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 * Callees:
 *     <none>
 */

bool __thiscall AreDockTargetsActive(_DWORD *this)
{
  return (this[46] & 0x100000) == 0 || gWinArrGlobal[0] && dword_269004;
}
